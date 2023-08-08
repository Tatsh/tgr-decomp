#include "types-win32.h"
//----- (1000C440) --------------------------------------------------------
void __stdcall __noreturn StartAddress(LPVOID lpThreadParameter) {
    HANDLE Handles[2]; // [esp+8h] [ebp-8h] BYREF

    Handles[0] = *((HANDLE *)lpThreadParameter + 1);
    Handles[1] = hEvent;
    while (!WaitForMultipleObjects(2u, Handles, 0, INFINITE))
        sub_1000C350((int)lpThreadParameter);
    ExitThread(0);
}
