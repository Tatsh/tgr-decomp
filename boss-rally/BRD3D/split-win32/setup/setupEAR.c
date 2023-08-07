#include "../../types-win32.h"
//----- (1002ADC0) --------------------------------------------------------
int __cdecl setupEAR(HWND hWnd) {
    const CHAR *v2; // eax
    const CHAR *v3; // eax
    const CHAR *v4; // [esp-10h] [ebp-10h]
    const CHAR *v5; // [esp-10h] [ebp-10h]

    if (++dword_105754E0 != 1)
        return 1;
    if (!loadEARDLL(dword_100A81A8)) {
        v4 = getCaptionString(0xFDu);
        v2 = getCaptionString(0xFEu);
        MessageBoxA(hWnd, v2, v4, 0x10u);
        exit(1);
    }
    EAR_DLL_AAA_Validate(10217929);
    EAR_DLL_AssignHwnd(hWnd);
    if (!EAR_DLL_InitializeEar(0)) {
        if (EAR_DLL_GetLastError() == 3) {
            v5 = getCaptionString(0xFDu);
            v3 = getCaptionString(0x12Eu);
            MessageBoxA(hWnd, v3, v5, 0x10u);
            exit(1);
        }
        EAR_DLL_ShowLastError();
        exit(1);
    }
    return 1;
}
// 100A81A8: using guessed type int dword_100A81A8;
// 1057548C: using guessed type int (__stdcall *EAR_DLL_AssignHwnd)(_DWORD);
// 105754A8: using guessed type int (*EAR_DLL_ShowLastError)(void);
// 105754B0: using guessed type int (__stdcall *EAR_DLL_AAA_Validate)(_DWORD);
// 105754C0: using guessed type int (__stdcall *EAR_DLL_InitializeEar)(_DWORD);
// 105754C4: using guessed type int (*EAR_DLL_GetLastError)(void);
// 105754E0: using guessed type int dword_105754E0;
