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
    if (SUCCEEDED(CoCreateInstance(&CLSID_FilterGraph,
                                   NULL,
                                   CLSCTX_INPROC,
                                   &IID_IGraphBuilder,
                                   (void **)&gGraphBuilder))) {
        IMediaEvent *mediaEvent; // [esp+14h] [ebp-4h] BYREF
        if (FAILED(gGraphBuilder->lpVtbl->QueryInterface(
                gGraphBuilder, &IID_IMediaEvent, (void **)&mediaEvent))) {
            return 1;
        }
        HRESULT getEventHandleRet = mediaEvent->lpVtbl->GetEventHandle(mediaEvent, &gOAEvent);
        mediaEvent->lpVtbl->Release(mediaEvent);
        if (FAILED(getEventHandleRet)) {
            ReleaseIGraphBuilder();
            return 0;
        }
        return 1;
    }
    gGraphBuilder = NULL;
    return 0;
}

int ReleaseIGraphBuilder() {
    if (gGraphBuilder) {
        gGraphBuilder->lpVtbl->Release(gGraphBuilder);
        gGraphBuilder = NULL;
    }
    gOAEvent = 0;
    SetPlaybackState(PLAYBACK_STATE_INIT);
    return 0;
}
