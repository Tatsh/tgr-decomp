#ifndef DECLS_H
#define DECLS_H

#include <stdbool.h>

#include <dshow.h>
#include <windows.h>

enum MACRO_PLAYBACK_STATE {
    PLAYBACK_STATE_INIT = 0x0,
    PLAYBACK_STATE_STOPPED = 0x1,
    PLAYBACK_STATE_2 = 0x2,
    PLAYBACK_STATE_FAILED = 0x3,
};

WPARAM sub_401230();
bool IsPlaybackStateStopped2();
bool IsPlaybackStateFailed();
bool IsPlaybackStateStopped();
bool IsPlaybackInitialized();
enum MACRO_PLAYBACK_STATE SetPlaybackState(enum MACRO_PLAYBACK_STATE newValue);
int SetInitialStates();
HRESULT SetupGlobalOAEvent();
int VideoWindowPutMessageDrain(OAHWND oaHwnd); // idb
HRESULT HandleIMediaEventFullscreenLost();
int ReleaseIGraphBuilder();
void RenderFileToWindow(HWND hWnd, const char *lpFileName);
HRESULT PlayIfStopped(IMediaControl *mediaControl);
HRESULT HandleIMediaEventAbort();
HRESULT HandleIMediaEventComplete();
OAEVENT GetGlobalOAEvent();
HRESULT HandleMediaEvents();

extern enum MACRO_PLAYBACK_STATE gPlaybackState;
extern IGraphBuilder *gGraphBuilder;
extern OAEVENT gOAEvent;
extern HWND oaHwnd;

#endif // DECLS_H
