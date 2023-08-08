#include "decls.h"

OAEVENT GetGlobalOAEvent() {
    return gOAEvent;
}

WPARAM sub_401230() {
    DWORD msgWaitRet;
    HANDLE pHandles;
    MSG Msg = {0};
    do {
        while (1) {
        LABEL_1:
            pHandles = (HANDLE)GetGlobalOAEvent();
            if (!pHandles) {
                WaitMessage();
                break;
            }
            msgWaitRet = MsgWaitForMultipleObjects(1, &pHandles, FALSE, INFINITE, QS_ALLINPUT);
            if (msgWaitRet == 1) {
                break;
            } else if (!msgWaitRet) {
                HandleMediaEvents();
                if (IsPlaybackStateStopped()) {
                    PostMessage(gHwnd, WM_QUIT, 0, 0);
                }
            }
        }
    } while (!PeekMessage(&Msg, 0, 0, 0, 1u));
    while (Msg.message != WM_QUIT) {
        if (Msg.message == WM_CHAR && LOBYTE(Msg.wParam) == VK_ESCAPE && IsPlaybackStateFailed()) {
            HandleIMediaEventComplete();
            PostMessage(gHwnd, WM_QUIT, 0, 0);
        }
        if (Msg.message != WM_SYSKEYDOWN) {
            TranslateMessage(&Msg);
            DispatchMessage(&Msg);
        }
        if (!PeekMessage(&Msg, NULL, 0, 0, PM_REMOVE))
            goto LABEL_1;
    }
    return Msg.wParam;
}
