#include "types-win32.h"
//----- (10008AA0) --------------------------------------------------------
int __thiscall meth_Pod_10008AA0(Pod *this) {
    int v1;        // edi
    char magic[4]; // [esp+8h] [ebp-10h] BYREF
    int v4;        // [esp+Ch] [ebp-Ch]
    int v5;        // [esp+10h] [ebp-8h]
    int v6;        // [esp+14h] [ebp-4h]

    v1 = ftell(dword_1027735C);
    fwriteLockHandleError(dword_1027735C, &unk_1022B358, 76 * dword_10277358);
    qmemcpy(magic, "POD", 3);
    v4 = 500;
    v5 = dword_10277358;
    v6 = v1;
    fseek(dword_1027735C, 0, 0);
    fwriteLockHandleError(dword_1027735C, magic, 0x10u);
    return fclose(dword_1027735C);
}
// 10277358: using guessed type int dword_10277358;
