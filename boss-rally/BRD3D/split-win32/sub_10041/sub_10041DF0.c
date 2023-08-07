#include "../../types-win32.h"
//----- (10041DF0) --------------------------------------------------------
int __cdecl sub_10041DF0(int a1, int a2) {
    int v3;         // edx
    char Buffer[4]; // [esp+0h] [ebp-108h] BYREF
    char v5[260];   // [esp+4h] [ebp-104h] BYREF

    if (!dword_10AA289C)
        return 0;
    if (a2 == -1) {
        if (byte_10A9D078) {
            strcpy((char *)(a1 + 1080 * Value + 53), byte_10A9D078);
            return 1;
        }
    } else {
        v3 = Value;
        if (a1 + 1080 * Value != -53) {
            strcpy(v5, aRallyseason);
            _itoa(v3, Buffer, 10);
            strcat(v5, Buffer);
            strcat(v5, aBrf);
            strcpy(aCRallyseasonDatFilepath_ptr, v5);
            strcpy((char *)(*(_DWORD *)(dword_10AA2908 + 192) + 260 * Value + 4),
                   (const char *)(a1 + 1080 * Value + 53));
            strcpy(byte_10AD0990, (const char *)(a1 + 1080 * Value + 53));
            if (!*((_BYTE *)dword_10ACED34 + 4) && !*((_BYTE *)dword_10ACED34 + 5)) {
                memset((char *)dword_10ACED34 + 6, 0, 0x18u);
                memset((char *)dword_10ACED34 + 30, 0, 0x30u);
                memset((char *)dword_10ACED34 + 80, 0, 0x60u);
            }
            sub_100709A0();
            dword_10AA28E4 = 1;
        }
    }
    return 1;
}
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28E4: using guessed type int dword_10AA28E4;
// 10AA2908: using guessed type int dword_10AA2908;
