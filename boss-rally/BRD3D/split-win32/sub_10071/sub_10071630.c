#include "../types-win32.h"
//----- (10071630) --------------------------------------------------------
HANDLE sub_10071630() {
    HANDLE result; // eax

    dword_11826B00 = CreateEventA(0, 0, 0, 0);
    result = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)sub_10071680, 0, 0, &dword_11826B04);
    dword_11828D1C = result;
    dword_11826B48 = 1000;
    dword_11828D18 = 1;
    return result;
}
// 11826B48: using guessed type int dword_11826B48;
// 11828D18: using guessed type int dword_11828D18;
