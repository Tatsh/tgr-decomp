#include "types-n64.h"
//----- (8026C5C0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8026C5C0() {
    LODWORD(gMtqueue.context.a3) = 1;
    osCreateMesgQueue(&stru_803819E8, dword_803819E0, 1);
    return sub_802654B0(&stru_803819E8, 0, 0);
}
// 8026C5D8: write access to const memory at 802A62E0 has been detected
