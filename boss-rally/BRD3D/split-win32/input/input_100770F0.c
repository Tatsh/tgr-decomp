#include "types-win32.h"
//----- (100770F0) --------------------------------------------------------
int input_100770F0() {
    int v0; // eax

    v0 = ++dword_118ABDD8;
    if (dword_118ABDD8 == 1) {
        dword_118ABAD8 = v0;
        memset(byte_118AB8B8, 0, 0x200u);
        memset(dword_118ABAE0, 0, 0x220u);
        gDIEffectSpring.dwStartDelay = 0;
        dword_118ABD7C = 0;
        dword_118ABAB8 = 1;
        input_100770C0();
        if (g_DirectInputA->lpVtbl->CreateDevice(
                g_DirectInputA, &CLSID_GUID_SysKeyboard, &g_lpDirectInputDeviceA, 0) < 0)
            return 0;
        if (g_lpDirectInputDeviceA->lpVtbl->SetDataFormat(g_lpDirectInputDeviceA,
                                                          &g_lpcDiDataFormat) < 0)
            return 0;
        if (g_lpDirectInputDeviceA->lpVtbl->SetCooperativeLevel(g_lpDirectInputDeviceA, gHwnd, 6) <
            0)
            return 0;
        if (g_lpDirectInputDeviceA)
            g_lpDirectInputDeviceA->lpVtbl->Acquire(g_lpDirectInputDeviceA);
    }
    return 1;
}
// 118ABAB8: using guessed type int dword_118ABAB8;
// 118ABAD8: using guessed type int dword_118ABAD8;
// 118ABAE0: using guessed type int dword_118ABAE0[];
// 118ABD7C: using guessed type int dword_118ABD7C;
// 118ABDD8: using guessed type int dword_118ABDD8;
