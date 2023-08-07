#include "../../types-n64.h"
//----- (80266588) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn sub_80266588(void *a1) {
    int v1;               // $s0
    unsigned __int16 *v2; // [sp+2Ch] [-Ch] BYREF
    OSMesgQueue **v3;     // [sp+30h] [-8h]
    char *v4;             // [sp+34h] [-4h]

    v2 = 0;
    v4 = sub_8026C060();
    word_803806A0 = *((_WORD *)v4 + 1);
    v3 = (OSMesgQueue **)a1;
    while (1) {
        sub_802642E0(v3[3], &v2, 1);
        v1 = *v2;
        if (v1 == 13) {
            sub_8026C070();
            word_803806A0 = -14831;
            dword_803818CC = 1980889401;
            dword_803818C8 = sub_802649F0();
            dword_803818C0 = 149720012;
            dword_803818C4 = -28461155;
        } else if (v1 == 14) {
            sub_8026BCCC();
        }
    }
}
// 802665B8: write access to const memory at 803806A0 has been detected
// 802665C0: write access to const memory at 803806A0 has been detected
// 80266628: write access to const memory at 803806A0 has been detected
// 80266664: write access to const memory at 803806A0 has been detected
// 80266680: write access to const memory at 803818CC has been detected
// 80266698: write access to const memory at 803818C0 has been detected
// 802666A8: write access to const memory at 803818C4 has been detected
// 802666C0: write access to const memory at 803818C8 has been detected
// 80266704: write access to const memory at 803818C0 has been detected
// 80266714: write access to const memory at 803818C4 has been detected
// 8026667C: conditional instruction was optimized away because of '%var_10.4==0'
// 803806A0: using guessed type __int16 word_803806A0;
// 803818C0: using guessed type int dword_803818C0;
// 803818C4: using guessed type int dword_803818C4;
// 803818C8: using guessed type int dword_803818C8;
// 803818CC: using guessed type int dword_803818CC;
