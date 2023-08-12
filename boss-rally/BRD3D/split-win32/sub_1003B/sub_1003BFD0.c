#include "types-win32.h"
//----- (1003BFD0) --------------------------------------------------------
int sub_1003BFD0() {
    int result;             // eax
    CHAR OutputString[260]; // [esp+0h] [ebp-104h] BYREF

    np_sub_10005BE0();
    sub_1003CFE0();
    sprintf(OutputString, "DirectPlay interface final instance count = %d\n", dword_10A9D004);
    OutputDebugStringA(OutputString);
    result = dword_10A9BFD8;
    if (dword_10A9BFD8)
        result = (*(int(__stdcall **)(int))(*(_DWORD *)dword_10A9BFD8 + 8))(dword_10A9BFD8);
    return result;
}
// 10A9BFD8: using guessed type int dword_10A9BFD8;
// 10A9D004: using guessed type int dword_10A9D004;
