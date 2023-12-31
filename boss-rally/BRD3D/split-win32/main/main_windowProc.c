#include "types-win32.h"
//----- (10079CA0) --------------------------------------------------------
LONG __stdcall main_windowProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) {
    LONG result; // eax
    LONG v5;     // eax

    if (gUnkC8Ptr1) {
        if (gUnkC8Ptr1->field_68) {
            s_IostreamInit_10060060(gIostreamInit, hWnd, Msg, wParam, lParam);
            if (dword_10A9CFFC)
                sub_1003C3A0(hWnd, Msg, wParam, (char *)lParam);
        }
    }
    if (gPlayMusic == 2) {
        if (Msg == aEarInteractiveMessageID) {
            if (lParam == gPlayMusic && wParam == getWPARAM()) {
                pm_sub_100029B0();
                return 0;
            }
            return 0;
        }
        if (Msg == WM_DEVICECHANGE) {
            if (wParam == DBT_DEVICEARRIVAL) {
                pm_10002260();
                pm_sub_100027C0(1);
            }
            if (wParam == DBT_DEVICEQUERYREMOVE || wParam == DBT_DEVICEREMOVEPENDING ||
                wParam == DBT_DEVICEREMOVECOMPLETE) {
                pm_sub_10002C30();
                pm_sub_10002440();
            }
            return 1;
        }
    }
    if (Msg <= WM_CLOSE) {
        if (Msg != WM_CLOSE) {
            switch (Msg) {
            case WM_CREATE:
                goto exit0;
            case WM_DESTROY:
                noreturn_1007A1D0(); // WM_DESTROY
            case WM_MOVE:            // WM_MOVE
                return events_handle_WM_MOVE(hWnd, wParam, lParam);
            case WM_SIZE: // WM_SIZE
                return events_handle_WM_SIZE(hWnd, wParam, lParam);
            case WM_ACTIVATE: // WM_ACTIVATE
                windows_10077090(wParam);
                return events_handle_WM_ACTIVATE(hWnd, wParam, lParam);
            default:
                return DefWindowProcA(hWnd, Msg, wParam, lParam);
            }
        }
        return main_DestroyWindowWrapper(hWnd);
    }
    if (Msg <= WM_ACTIVATEAPP) // <= WM_ACTIVATEAPP
    {
        if (Msg == WM_ACTIVATEAPP) // // WM_ACTIVATEAPP
            return events_handle_WM_ACTIVATEAPP(hWnd, wParam, lParam);
        if (Msg == WM_ERASEBKGND) // WM_ERASEBKGND
            return events_handle_WM_ERASEBKGND(hWnd, wParam, lParam);
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if (Msg <= WM_GETMINMAXINFO) // <= WM_GETMINMAXINFO
    {
        if (Msg == WM_GETMINMAXINFO) // WM_GETMINMAXINFO
            return events_handle_WM_GETMINMAXINFO(hWnd, wParam, lParam);
        if (Msg == WM_SETCURSOR) // WM_SETCURSOR
            return events_handle_WM_SETCURSOR(hWnd, wParam, lParam);
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if (Msg <= WM_DISPLAYCHANGE) // <= WM_DISPLAYCHANGE
    {
        if (Msg == WM_DISPLAYCHANGE) // WM_DISPLAYCHANGE
            return events_handle_WM_DISPLAYCHANGE(hWnd);
        if (Msg == WM_WINDOWPOSCHANGING) // WM_WINDOWPOSCHANGING
            return events_handle_WM_WINDOWPOSCHANGING(hWnd, wParam, lParam);
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if (Msg <= WM_COMMAND) // <= WM_COMMAND
    {
        if (Msg == WM_COMMAND) // WM_COMMAND
            return events_handle_WM_COMMAND(hWnd, wParam, lParam);
        if (Msg == WM_NCPAINT) // WM_NCPAINT
            return events_handle_WM_NCPAINT(hWnd, wParam, lParam);
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if (Msg <= WM_ENTERMENULOOP) // <= WM_ENTERMENULOOP
    {
        if (Msg == WM_ENTERMENULOOP) // WM_ENTERMENULOOP
            return events_handle_WM_ENTERMENULOOP(hWnd, wParam, lParam);
        if (Msg == WM_SYSCOMMAND) // WM_SYSCOMMAND
            return events_handle_WM_SYSCOMMAND(hWnd, wParam, lParam);
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if (Msg <= 0x3B9) {
        if (Msg == 0x3B9) {
            if (gPlayMusic == 1) {
                if (lParam == mciId && wParam == 1 && !dword_106909B4) {
                    pm_10002510();
                    return 0;
                }
                return 0;
            }
        } else if (Msg == WM_EXITMENULOOP) // WM_EXITMENULOOP
        {
            return events_handle_WM_EXITMENULOOP(hWnd, wParam, lParam);
        }
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if (Msg > 0xBD0) {
        switch (Msg) {
        case 0xBD1u:
            result = main_ResetWindowLong_USERDATA(hWnd);
            break;
        case 0xBD2u:
        case 0xBD3u:
        case 0xBD4u:
        exit0:
            result = ReturnZero();
            break;
        default:
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
    } else {
        switch (Msg) {
        case 0xBD0u:
            return main_1007A6A0(hWnd, lParam);
        case 0x7E8u: // UM_GETUSERSELA
            v5 = GetWindowLongA(hWnd, GWL_USERDATA);
            if (!v5)
                return 0;
            result = (*(_BYTE *)(v5 + 28) & 0x1F) == 31;
            break;
        case 0x7E9u: // UM_GETUSERSELA
            return GetWindowLongA(hWnd, GWL_USERDATA);
        case 0x7EAu: // UM_GETUSERSELW
            result = GetWindowLongA(hWnd, GWL_USERDATA);
            if (result)
                result = *(_DWORD *)(result + 88);
            break;
        default:
            return DefWindowProcA(hWnd, Msg, wParam, lParam);
        }
    }
    return result;
}
// 100940A4: using guessed type int gPlayMusic;
// 10575478: using guessed type int aEarInteractiveMessageID;
// 106909B4: using guessed type int dword_106909B4;
// 10A9CFFC: using guessed type int dword_10A9CFFC;
