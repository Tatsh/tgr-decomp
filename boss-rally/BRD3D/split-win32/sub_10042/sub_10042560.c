#include "../types-win32.h"
//----- (10042560) --------------------------------------------------------
int __cdecl sub_10042560(char *a1, int a2) {
    int v3;         // edx
    char Buffer[4]; // [esp+10h] [ebp-108h] BYREF
    char v5[260];   // [esp+14h] [ebp-104h] BYREF

    if (a2 == -1) {
        if (byte_10A9D078) {
            strcpy(&a1[1080 * Value + 53], byte_10A9D078);
            return 1;
        }
    } else {
        v3 = Value;
        if (&a1[1080 * Value] != (char *)0xFFFFFFCB) {
            strcpy(v5, aTimeattack);
            _itoa(v3, Buffer, 10);
            strcat(v5, Buffer);
            strcat(v5, aGrf);
            strcpy(aCRallyghostDatFilepath_ptr, v5);
            strcpy((char *)&g_unkC8Ptr2->last->field_4 + 0x104 * Value, &a1[1080 * Value + 0x35]);
            strcpy(byte_10AD0990, &a1[1080 * Value + 0x35]);
            sub_10070E80();
            dword_10AA28EC = 1;
        }
    }
    return 1;
}
// 10AA28EC: using guessed type int dword_10AA28EC;
