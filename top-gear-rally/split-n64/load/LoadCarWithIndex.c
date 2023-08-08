#include "types-n64.h"
//----- (8021D534) --------------------------------------------------------
int __fastcall LoadCarWithIndex(unsigned __int8 *a1, int carIndex) {
    unk0 *u0;          // $s0
    unsigned int size; // $v0
    char buffer[80];   // [sp+30h] [-50h] BYREF

    u0 = &gCarData[carIndex];
    size = CHK_GetFileSize(u0->field_14);
    u0->size = size;
    if (size < 0xDF89) {
        debugPrint("Loading car %d (%d / %d)\n", carIndex, u0->size, 0xDF88);
    } else {
        sub_80260DD4(buffer, "Car %d too big (%d vs. %d)", carIndex, size, 0xDF88);
        sub_8021E1F4(buffer);
    }
    return LoadCarWithIndex2((char *)a1, u0->field_14, 0);
}
