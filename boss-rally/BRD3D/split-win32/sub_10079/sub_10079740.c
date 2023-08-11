#include "types-win32.h"
//----- (10079740) --------------------------------------------------------
HINSTANCE sub_10079740() {
    HINSTANCE result;  // eax
    void *v1;          // ecx
    struct tagMSG Msg; // [esp+0h] [ebp-1Ch] BYREF

    result = hInstance;
    if (hInstance && gHwnd) {
        hAccTable = LoadAcceleratorsA(hInstance, (LPCSTR)0x71);
        while (1) {
            while (1) {
                result = (HINSTANCE)PeekMessageA(&Msg, 0, 0, 0, 1u);
                if (result)
                    break;
                if (dword_10680598 && dword_1068059C && !dword_106805A0) {
                    sub_1002F8F0();
                    meth_DebugPrint(v1);
                }
            }
            if (Msg.message == 18)
                break;
            if (!hAccTable || !TranslateAcceleratorA(gHwnd, hAccTable, &Msg)) {
                TranslateMessage(&Msg);
                DispatchMessageA(&Msg);
            }
        }
        dword_118ABE2C = Msg.wParam;
    }
    return result;
  }
  // 100797FE: variable 'v1' is possibly undefined
  // 10680598: using guessed type int dword_10680598;
  // 1068059C: using guessed type int dword_1068059C;
  // 106805A0: using guessed type int dword_106805A0;
  // 118ABE2C: using guessed type int dword_118ABE2C;
