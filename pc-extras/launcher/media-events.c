#include <dshow.h>

#include "decls.h"

HRESULT HandleMediaEvents() {
    HRESULT result;          // eax
    IMediaEvent *mediaEvent; // [esp+20h] [ebp-10h] BYREF
    long int eventCode;      // [esp+24h] [ebp-Ch] BYREF
    long long int v3;        // [esp+28h] [ebp-8h] BYREF
    long long int v4;        // [esp+2Ch] [ebp-4h] BYREF

    result = gGraphBuilder->lpVtbl->QueryInterface(
        gGraphBuilder, &IID_IMediaEvent, (void **)&mediaEvent);
    if (result >= 0) {
        if (mediaEvent->lpVtbl->GetEvent(mediaEvent, &eventCode, &v4, &v3, 0) >= 0) {
            switch (eventCode) {
            case EC_COMPLETE:
                HandleIMediaEventComplete();
                return (HRESULT)mediaEvent->lpVtbl->Release(mediaEvent);
            case EC_USERABORT:
            case EC_ERRORABORT:
                HandleIMediaEventAbort();
                break;
            case EC_FULLSCREEN_LOST:
                HandleIMediaEventFullscreenLost();
                return (HRESULT)mediaEvent->lpVtbl->Release(mediaEvent);
            }
        }
        result = (HRESULT)mediaEvent->lpVtbl->Release(mediaEvent);
    }
    return result;
}

HRESULT HandleIMediaEventFullscreenLost() {
    HRESULT result;      // eax
    IVideoWindow *vw;    // [esp+1Ch] [ebp-8h] BYREF
    long fullscreenMode; // [esp+20h] [ebp-4h] BYREF

    if (gGraphBuilder->lpVtbl->QueryInterface(gGraphBuilder, &IID_IVideoWindow, (void **)&vw) < 0)
        return 0;
    if (vw->lpVtbl->get_FullScreenMode(vw, &fullscreenMode) >= 0 &&
        (fullscreenMode == -1 || vw->lpVtbl->HideCursor(vw, -1) >= 0) &&
        vw->lpVtbl->put_FullScreenMode(vw, -1) >= 0) {
        vw->lpVtbl->Release(vw);
        result = 1;
    } else {
        vw->lpVtbl->Release(vw);
        result = 0;
    }
    return result;
}

HRESULT HandleIMediaEventComplete() {
    HRESULT result;                // eax
    IMediaControl *mediaControl;   // [esp+3Ch] [ebp-Ch] BYREF
    IMediaPosition *mediaPosition; // [esp+40h] [ebp-8h] BYREF
    LONG v3;                       // [esp+44h] [ebp-4h] BYREF

    result = IsPlaybackStateFailed();
    if (result) {
        result = gGraphBuilder->lpVtbl->QueryInterface(
            gGraphBuilder, &IID_IMediaControl, (void **)&mediaControl);
        if (result >= 0) {
            mediaControl->lpVtbl->Pause(mediaControl);
            if (gGraphBuilder->lpVtbl->QueryInterface(
                    gGraphBuilder, &IID_IMediaPosition, (void **)&mediaPosition) >= 0) {
                mediaPosition->lpVtbl->put_CurrentPosition(mediaPosition, 0.0);
                mediaPosition->lpVtbl->Release(mediaPosition);
            }
            mediaControl->lpVtbl->GetState(mediaControl, -1, &v3);
            mediaControl->lpVtbl->Stop(mediaControl);
            mediaControl->lpVtbl->Release(mediaControl);
            result = SetPlaybackState(PLAYBACK_STATE_STOPPED);
        }
    }
    return result;
}

HRESULT HandleIMediaEventAbort() {
    HRESULT result;                // eax
    int qiMediaPositionRet;        // esi
    IMediaControl *mediaControl;   // [esp+28h] [ebp-8h] BYREF
    IMediaPosition *mediaPosition; // [esp+2Ch] [ebp-4h] BYREF

    result = IsPlaybackStateFailed();
    if (result) {
        result = gGraphBuilder->lpVtbl->QueryInterface(
            gGraphBuilder, &IID_IMediaControl, (void **)&mediaControl);
        if (result >= 0) {
            mediaControl->lpVtbl->Stop(mediaControl);
            mediaControl->lpVtbl->Release(mediaControl);
            result = gGraphBuilder->lpVtbl->QueryInterface(
                gGraphBuilder, &IID_IMediaPosition, (void **)&mediaPosition);
            qiMediaPositionRet = result;
            if (result >= 0) {
                mediaPosition->lpVtbl->put_CurrentPosition(mediaPosition, 0.0);
                result = (HRESULT)mediaPosition->lpVtbl->Release(mediaPosition);
                if (qiMediaPositionRet >= 0)
                    result = SetPlaybackState(PLAYBACK_STATE_STOPPED);
            }
        }
    }
    return result;
}
