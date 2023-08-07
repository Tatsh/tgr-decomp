#include "../../types-n64.h"
//----- (8021DE5C) --------------------------------------------------------
// sub_10037B10 on PC
// write access to const memory has been detected, the output may be wrong!
void __fastcall LoadTrack(int trackIndex) {
    int *v2;      // $s1
    int v3;       // $a2
    int v4;       // $s3
    int v5;       // $s2
    int v6;       // $s0
    int i;        // $t3
    float v8;     // $f0
    float v9;     // $f2
    int v10;      // $v0
    char v11[80]; // [sp+58h] [-108h] BYREF
    char v12[92]; // [sp+A8h] [-B8h] BYREF
    float v13[3]; // [sp+104h] [-5Ch] BYREF
    char v14[80]; // [sp+110h] [-50h] BYREF

    v2 = (int *)&(&off_80270854)[0x5F * trackIndex];
    *(_DWORD *)&MEMORY[0x80025C00] = CHK_GetFileSize(v2[5]);
    sub_802662E0(0x80025C00, 4);
    if (*(_DWORD *)&MEMORY[0x80025C00] < 1512449u) // 1.44 MiB?
    {
        debugPrint(
            "Loading track %d (%d / %d)\n", trackIndex, *(_DWORD *)&MEMORY[0x80025C00], 1512448);
    } else {
        sub_80260DD4(v14,
                     "Track %d too big (%d vs. %d)",
                     trackIndex,
                     *(_DWORD *)&MEMORY[0x80025C00],
                     1512448);
        sub_8021E1F4(v14);
    }
    LoadCarWithIndex2((char *)0x80025C00, v2[5], 0);
    debugPrint("hmm = %04x %04x\n", MEMORY[0x80029560], MEMORY[0x80029568]);
    sub_802662E0(0x80025C00, *(int *)&MEMORY[0x80025C00]);
    sub_8021C748((unsigned int)dword_80373EB0, v2[7], 32);
    LoadCarWithIndex2(dword_803736B0, v2[7] + 32, 0);
    sub_8021C748((unsigned int)dword_803746D0, v2[9], 32);
    LoadCarWithIndex2(dword_80373ED0, v2[9] + 32, 0);
    dword_8028A87C = v2[5];
    dword_8028A880 = sub_8021C848(0) + v2[5];
    dword_8028AA7C = -1;
    dword_8028AA88 = -1;
    v3 = MEMORY[0x80025C64];
    v4 = 0;
    v5 = 0;
    v6 = 0;
    if (MEMORY[0x80025C64] > 0) {
        for (i = MEMORY[0x80025C60];; i = MEMORY[0x80025C60]) {
            v13[0] = 1.0;
            v13[1] = 0.0;
            v13[2] = 0.0;
            sub_802250FC(v13, v13, (float *)(i + v6));
            v8 = sub_80224B08(v13);
            if (v8 == 0.0) {
                v3 = MEMORY[0x80025C64];
            } else {
                v9 = 1.0 / v8;
                v10 = MEMORY[0x80025C60] + v6;
                if (1.0 == (float)(*(float *)(MEMORY[0x80025C60] + v6) * (float)(1.0 / v8))) {
                    if (1.0 == (float)(*(float *)(v10 + 20) * v9)) {
                        if (1.0 == (float)(*(float *)(v10 + 40) * v9)) {
                            ++v4;
                            *(_WORD *)(v10 + 76) |= 0x2000u;
                            *(float *)(MEMORY[0x80025C60] + v6 + 64) = v9;
                        } else {
                            *(float *)(v10 + 64) = v9;
                        }
                    } else {
                        *(float *)(v10 + 64) = v9;
                    }
                } else {
                    *(float *)(v10 + 64) = v9;
                }
                v3 = MEMORY[0x80025C64];
            }
            ++v5;
            v6 += 84;
            if (v5 >= v3)
                break;
        }
    }
    debugPrint("Scalars: %d/%d\n", v4, v3);
    if (MEMORY[0x80025C64] >= 2049) {
        sub_80260DD4(v12, "ERROR: instances (%d) > MAX_INSTANCES (%d)", MEMORY[0x80025C64], 2048);
        sub_8021E1F4(v12);
    }
    if (MEMORY[0x80025C04] != 560) {
        sub_80260DD4(v11, "ERROR: Track header size mismatch! (%d!=%d)", MEMORY[0x80025C04], 560);
        sub_8021E1F4(v11);
    }
    sub_80255CA0();
}
// 8021DFD4: write access to const memory at 8028A87C has been detected
// 8021DFE8: write access to const memory at 8028A880 has been detected
// 8021DFEC: write access to const memory at 8028AA7C has been detected
// 8021DFF4: write access to const memory at 8028AA88 has been detected
// 80270854: using guessed type char *off_80270854;
// 8028A87C: using guessed type int dword_8028A87C;
// 8028A880: using guessed type int dword_8028A880;
// 8028AA7C: using guessed type int dword_8028AA7C;
// 8028AA88: using guessed type int dword_8028AA88;
// 80373EB0: using guessed type int dword_80373EB0[8];
// 803746D0: using guessed type int dword_803746D0[8];
