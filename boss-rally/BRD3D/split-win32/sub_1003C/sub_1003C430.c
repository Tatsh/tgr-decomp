#include "../../types-win32.h"
//----- (1003C430) --------------------------------------------------------
int __stdcall sub_1003C430(IID *iid, int a2, SIZE_T dwBytes, int a4, int a5, int a6) {
    int v6;     // ecx
    int v7;     // ebx
    HGLOBAL v8; // eax
    void *v9;   // eax

    if (!memcmp(iid, &DPSPGUID_MODEM, 0x10u)) {
        v6 = 2;
    } else if (!memcmp(iid, &IID_IDirectPlay2A, 0x10u)) {
        v6 = 1;
    } else if (!memcmp(iid, &IID_IDirectPlay2, 0x10u)) {
        v6 = 0;
    } else {
        if (memcmp(iid, &DPSPGUID_SERIAL, 0x10u))
            return 1;
        v6 = 3;
    }
    v7 = 56 * v6;
    qmemcpy((char *)&unk_10A9BFF0 + 224 * v6, *(const void **)(a4 + 8), 0xC8u);
    *((IID *)&unk_10A9C0B8 + 14 * v6) = *iid;
    v8 = GlobalAlloc(0x42u, dwBytes);
    v9 = GlobalLock(v8);
    dword_10A9C0CC[v7] = (int)v9;
    if (v9) {
        qmemcpy(v9, (const void *)a2, dwBytes);
        dword_10A9C0C8[v7] = dwBytes;
    }
    return 1;
}
// 10090890: using guessed type IID IID_IDirectPlay2;
// 100908A0: using guessed type IID IID_IDirectPlay2A;
// 100908B0: using guessed type IID DPSPGUID_SERIAL;
// 100908C0: using guessed type IID DPSPGUID_MODEM;
// 10A9C0C8: using guessed type int dword_10A9C0C8[];
// 10A9C0CC: using guessed type int dword_10A9C0CC[];
