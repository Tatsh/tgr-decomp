#include "../../types-win32.h"
//----- (1000C510) --------------------------------------------------------
int __cdecl sub_1000C510(HANDLE *a1) {
    if (dword_10277B60) {
        DeleteCriticalSection(&CriticalSection);
        dword_10277B60 = 0;
    }
    if (dword_10277B54) {
        SetEvent(hEvent);
        WaitForSingleObject(dword_10277B54, INFINITE);
        CloseHandle(dword_10277B54);
        dword_10277B54 = 0;
    }
    if (hEvent) {
        CloseHandle(hEvent);
        hEvent = 0;
    }
    if (a1) {
        if (*a1) {
            if (a1[2]) {
                (*(void(__stdcall **)(HANDLE, HANDLE))(*(_DWORD *)*a1 + 36))(*a1, a1[2]);
                a1[2] = 0;
            }
            (*(void(__stdcall **)(HANDLE))(*(_DWORD *)*a1 + 16))(*a1);
            (*(void(__stdcall **)(HANDLE))(*(_DWORD *)*a1 + 8))(*a1);
            *a1 = 0;
        }
        if (a1[1]) {
            CloseHandle(a1[1]);
            a1[1] = 0;
        }
    }
    return 0;
}
// 1000C5AD: conditional instruction was optimized away because of '%arg_0.4!=0'
// 10277B60: using guessed type int dword_10277B60;
