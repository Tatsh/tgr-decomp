#include "decls.h"

OAEVENT GetGlobalOAEvent() {
    return gOAEvent;
}

WPARAM sub_401230() {
    DWORD msgWaitRet;
    HANDLE pHandles;
    struct tagMSG Msg;

    do {
        while (1) {
        LABEL_1:
            pHandles = (HANDLE)GetGlobalOAEvent();
            if (!pHandles) {
                WaitMessage();
                break;
            }
            msgWaitRet = MsgWaitForMultipleObjects(1u, &pHandles, FALSE, INFINITE, QS_ALLINPUT);
            if (msgWaitRet == 1)
                break;
            if (!msgWaitRet) {
                HandleMediaEvents();
                if (IsPlaybackStateStopped())
                    PostMessageA(oaHwnd, WM_QUIT, 0, 0);
            }
        }
    } while (!PeekMessageA(&Msg, 0, 0, 0, 1u));
    while (Msg.message != WM_QUIT) {
        if (Msg.message == WM_CHAR && LOBYTE(Msg.wParam) == VK_ESCAPE && IsPlaybackStateFailed()) {
            HandleIMediaEventComplete();
            PostMessageA(oaHwnd, WM_QUIT, 0, 0);
        }
        if (Msg.message != WM_SYSKEYDOWN) {
            TranslateMessage(&Msg);
            DispatchMessageA(&Msg);
        }
        if (!PeekMessageA(&Msg, NULL, 0, 0, PM_REMOVE))
            goto LABEL_1;
    }
    return Msg.wParam;
}
