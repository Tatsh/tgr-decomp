#include <dshow.h>

#include "decls.h"

HRESULT HandleMediaEvents() {
    HRESULT result;          // eax
    IMediaEvent *mediaEvent; // [esp+20h] [ebp-10h] BYREF
    long int eventCode;      // [esp+24h] [ebp-Ch] BYREF
    long long int v3;        // [esp+28h] [ebp-8h] BYREF
    long long int v4;        // [esp+2Ch] [ebp-4h] BYREF
    if (SUCCEEDED(gGraphBuilder->lpVtbl->QueryInterface(
            gGraphBuilder, &IID_IMediaEvent, (void **)&mediaEvent)) &&
        SUCCEEDED(mediaEvent->lpVtbl->GetEvent(mediaEvent, &eventCode, &v4, &v3, 0))) {
        switch (eventCode) {
        case EC_COMPLETE:
            HandleIMediaEventComplete();
            break;
        case EC_USERABORT:
        case EC_ERRORABORT:
            HandleIMediaEventAbort();
            break;
        case EC_FULLSCREEN_LOST:
            HandleIMediaEventFullscreenLost();
            break;
        }
        return (HRESULT)mediaEvent->lpVtbl->Release(mediaEvent);
    }
}

HRESULT HandleIMediaEventFullscreenLost() {
    HRESULT result;      // eax
    IVideoWindow *vw;    // [esp+1Ch] [ebp-8h] BYREF
    long fullscreenMode; // [esp+20h] [ebp-4h] BYREF
    if (FAILED(
            gGraphBuilder->lpVtbl->QueryInterface(gGraphBuilder, &IID_IVideoWindow, (void **)&vw)))
        return 0;
    if (SUCCEEDED(vw->lpVtbl->get_FullScreenMode(vw, &fullscreenMode)) &&
        (fullscreenMode == -1 || SUCCEEDED(vw->lpVtbl->HideCursor(vw, -1))) &&
        SUCCEEDED(vw->lpVtbl->put_FullScreenMode(vw, -1))) {
        vw->lpVtbl->Release(vw);
        return 1;
    }
    vw->lpVtbl->Release(vw);
    return 0;
}

HRESULT HandleIMediaEventComplete() {
    if (IsPlaybackStateFailed()) {
        IMediaControl *mediaControl; // [esp+3Ch] [ebp-Ch] BYREF
        if (SUCCEEDED(gGraphBuilder->lpVtbl->QueryInterface(
                gGraphBuilder, &IID_IMediaControl, (void **)&mediaControl))) {
            mediaControl->lpVtbl->Pause(mediaControl);
            IMediaPosition *mediaPosition; // [esp+40h] [ebp-8h] BYREF
            if (SUCCEEDED(gGraphBuilder->lpVtbl->QueryInterface(
                    gGraphBuilder, &IID_IMediaPosition, (void **)&mediaPosition))) {
                mediaPosition->lpVtbl->put_CurrentPosition(mediaPosition, 0.0);
                mediaPosition->lpVtbl->Release(mediaPosition);
            }
        }
        LONG v3; // [esp+44h] [ebp-4h] BYREF
        mediaControl->lpVtbl->GetState(mediaControl, -1, &v3);
        mediaControl->lpVtbl->Stop(mediaControl);
        mediaControl->lpVtbl->Release(mediaControl);
        return SetPlaybackState(PLAYBACK_STATE_STOPPED);
    }
    return 0;
}

HRESULT HandleIMediaEventAbort() {
    HRESULT result;              // eax
    IMediaControl *mediaControl; // [esp+28h] [ebp-8h] BYREF
    if (IsPlaybackStateFailed() &&
        SUCCEEDED(gGraphBuilder->lpVtbl->QueryInterface(
            gGraphBuilder, &IID_IMediaControl, (void **)&mediaControl))) {
        mediaControl->lpVtbl->Stop(mediaControl);
        mediaControl->lpVtbl->Release(mediaControl);
        IMediaPosition *mediaPosition; // [esp+2Ch] [ebp-4h] BYREF
        if (SUCCEEDED(gGraphBuilder->lpVtbl->QueryInterface(
                gGraphBuilder, &IID_IMediaPosition, (void **)&mediaPosition))) {
            mediaPosition->lpVtbl->put_CurrentPosition(mediaPosition, 0.0);
            mediaPosition->lpVtbl->Release(mediaPosition);
            return SetPlaybackState(PLAYBACK_STATE_STOPPED);
        }
    }
    return 0;
}
