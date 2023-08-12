#include "types-win32.h"
//----- (10079740) --------------------------------------------------------
int __cdecl main_10079740(int argc, const char **argv, const char **envp) {
    int result;        // eax
    void *v4;          // ecx
    struct tagMSG Msg; // [esp+0h] [ebp-1Ch] BYREF

    result = (int)hInstance;
    if (hInstance && gHwnd) {
        hAccTable = LoadAcceleratorsA(hInstance, (LPCSTR)0x71);
        while (1) {
            while (1) {
                result = PeekMessageA(&Msg, 0, 0, 0, 1u);
                if (result)
                    break;
                if (gWPARAM0 && gWPARAMLO && !gWPARAMHI) {
                    sub_1002F8F0();
                    meth_DebugPrint(v4);
                }
            }
            if (Msg.message == 18)
                break;
            if (!hAccTable || !TranslateAcceleratorA(gHwnd, hAccTable, &Msg)) {
                TranslateMessage(&Msg);
                DispatchMessageA(&Msg);
            }
        }
        gExitCode = Msg.wParam;
    }
    return result;
}
// 100797FE: variable 'v4' is possibly undefined
// 10680598: using guessed type int gWPARAM0;
// 1068059C: using guessed type int gWPARAMLO;
// 106805A0: using guessed type int gWPARAMHI;
// 118ABE2C: using guessed type int gExitCode;
