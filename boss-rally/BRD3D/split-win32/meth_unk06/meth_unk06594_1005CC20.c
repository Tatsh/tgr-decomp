#include "types-win32.h"
//----- (1005CC20) --------------------------------------------------------
int __thiscall meth_unk06594_1005CC20(unk06594 *this) {
    FILE *v1;         // ebp
    int i;            // ebx
    char Buffer[100]; // [esp+10h] [ebp-64h] BYREF

    v1 = fopen(kSeasondescDat, aWb);
    if (!v1)
        sub_1003E260(7);
    for (i = 0; i < 26000; i += 260) {
        strcpy(Buffer, (const char *)&gUnkC8Ptr1->field_C0->field_4 + i);
        if ((int)fwriteLock(Buffer, 1u, 0x64u, v1) < 100)
            sub_1003E260(7);
    }
    fclose(v1);
    return 1;
}
