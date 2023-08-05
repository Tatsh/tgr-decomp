#include "decls.h"

//----- (00401480) --------------------------------------------------------
int SetInitialStates() {
    SetPlaybackState(PLAYBACK_STATE_INIT);
    gOAEvent = 0;
    gGraphBuilder = NULL;
    return 1;
}

//----- (004014B0) --------------------------------------------------------
HRESULT SetupGlobalOAEvent() {
    HRESULT hr;                // eax
    HRESULT getEventHandleRet; // esi
    IMediaEvent *mediaEvent;   // [esp+14h] [ebp-4h] BYREF

    if (CoCreateInstance(
            &CLSID_FilgraphManager, 0, 1u, &IID_IGraphBuilder, (void **)&gGraphBuilder) >= 0) {
        if (gGraphBuilder->lpVtbl->QueryInterface(
                gGraphBuilder, &IID_IMediaEvent, (void **)&mediaEvent) < 0 ||
            (getEventHandleRet = mediaEvent->lpVtbl->GetEventHandle(mediaEvent, &gOAEvent),
             mediaEvent->lpVtbl->Release(mediaEvent),
             getEventHandleRet < 0)) {
            ReleaseIGraphBuilder();
            hr = 0;
        } else {
            hr = 1;
        }
    } else {
        gGraphBuilder = 0;
        hr = 0;
    }
    return hr;
}

int ReleaseIGraphBuilder() {
    if (gGraphBuilder) {
        gGraphBuilder->lpVtbl->Release(gGraphBuilder);
        gGraphBuilder = 0;
    }
    gOAEvent = 0;
    SetPlaybackState(PLAYBACK_STATE_INIT);
    return 0;
}
