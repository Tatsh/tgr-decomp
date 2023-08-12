#include "types-win32.h"
//----- (1005CCD0) --------------------------------------------------------
int __thiscall meth_unk06594_5(unk06594 *this, __int16 a1) {
    FILE *v2;           // ebx
    char Buffer[4];     // [esp+10h] [ebp-20Ch] BYREF
    char FileName[260]; // [esp+14h] [ebp-208h] BYREF
    char String[260];   // [esp+118h] [ebp-104h] BYREF

    strcpy(FileName, aRallyseason);
    _itoa(a1, Buffer, 10);
    strcat(FileName, Buffer);
    strcat(FileName, aBrf);
    v2 = fopen(FileName, kFileModeReadBinary);
    if (v2) {
        memset(String, 0, sizeof(String));
        if ((int)filesystem_freadLock(String, 1u, 0x80u, v2) < 128)
            sub_1003E260(7);
        strcpy((char *)&gUnkC8Ptr1->field_C0->field_4 + 260 * a1, _strupr(String));
        fclose(v2);
    }
    return 1;
}
