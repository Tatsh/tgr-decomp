#include "types-win32.h"
//----- (1000C4D0) --------------------------------------------------------
int __cdecl sub_1000C4D0(int a1, int a2, int a3, int a4, int a5, int a6) {
    int v6; // esi

    EnterCriticalSection(&CriticalSection);
    v6 = (*(int(__stdcall **)(int, int, int, int, int, int))(*(_DWORD *)a1 + 104))(
        a1, a2, a3, a4, a5, a6);
    LeaveCriticalSection(&CriticalSection);
    return v6;
}
