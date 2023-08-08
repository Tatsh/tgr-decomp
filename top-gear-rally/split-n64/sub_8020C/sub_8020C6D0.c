#include "types-n64.h"
//----- (8020C6D0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8020C6D0(int a1,
                             int a2,
                             int a3,
                             float a4,
                             int a5,
                             int a6,
                             int a7,
                             float a8,
                             float a9,
                             int a10,
                             int a11,
                             float a12,
                             float a13) {
    float v13; // $f0
    float v14; // $f0
    float v15; // $f0
    int *v16;  // $v0
    int v17;   // $t8
    int *v18;  // $v0
    int *v19;  // [sp+54h] [-8Ch]
    float v20; // [sp+58h] [-88h]
    int *v21;  // [sp+58h] [-88h]
    float v26; // [sp+FCh] [+1Ch]

    dword_8028AAF0 = (int)&dword_8031B760[2084 * a3];
    MEMORY[0] = sub_802617D0(a13);
    MEMORY[4] = sub_80261610(a13);
    MEMORY[8] = 0.0;
    sub_8022439C((float *)0x10, (float *)0x20, 0);
    MEMORY[0x1DE8] = 7868;
    dword_8028AAF4 = 7868;
    sub_8022576C(MEMORY[0], MEMORY[4]);
    MEMORY[0x1DCC] = v13;
    sub_8022576C(MEMORY[0], MEMORY[4]);
    MEMORY[0x1DCC] = v14;
    sub_8021B2F8(0, 0.52359879, 400.0 * 0.2, (float)a6, (float)a7);
    sub_80219BF0(SLODWORD(a4), a5, a6, a7, 1);
    sub_8022D090(0, 0);
    if (a8 >= 0.0)
        v15 = (float)(a8 * a8) * a12;
    else
        v15 = (float)(a8 * a8) * (float)-a12;
    MEMORY[0x30] = v15;
    v20 = -v15;
    MEMORY[0x34] = v20;
    MEMORY[0x38] = 0.25400001;
    v26 = v15;
    if (!a1) {
        v26 = v15;
        sub_8022FEF0(a3);
    }
    v19 = &dword_8031B370[10 * a10];
    sub_80220544(v19);
    sub_80233494();
    if (a9 == 0.0)
        sub_80233668();
    if (a1) {
        v16 = sub_80255DD8();
        sub_80261150(__SPAIR64__(&flt_8031AB50, (unsigned int)v16),
                     11.0,
                     11.0,
                     1.0,
                     0.0,
                     0.0,
                     0.0,
                     0.0,
                     0.0,
                     1.0);
        dword_8028A858 = 8;
        MEMORY[4] = dword_802721F0;
        MEMORY[0] = 59637776;
        sub_80255CD0();
        sub_80260800((int)&flt_8031AB10,
                     COERCE_INT(0.0013020834),
                     COERCE_INT(0.0013020834),
                     COERCE_INT(0.0013020834));
        sub_80260BC0(&flt_8031AB50, a13 * 57.295776, 0.0, 0.0, 1.0);
        sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB10);
        sub_80260E30((int)&flt_8031AB50, SLODWORD(v26), SLODWORD(v20), 0);
        sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB10);
        sub_80209D70((unsigned int *)a1, &flt_8031AB10);
        v17 = a11;
    } else {
        if (sub_80220534((int)v19)) {
            sub_802203F0(0, a10);
            sub_802336E0(0);
            sub_802303D4(0);
            sub_80230554(0, 0);
        }
        v17 = a11;
    }
    v21 = &dword_8031B370[10 * v17];
    sub_80220544(v21);
    if (v26 != 0.0) {
        if (a2) {
            v18 = sub_80255DD8();
            sub_80261150(__SPAIR64__(&flt_8031AB50, (unsigned int)v18),
                         0.0,
                         -1.0,
                         15.0,
                         0.0,
                         0.0,
                         0.0,
                         0.0,
                         1.0,
                         0.0);
            dword_8028A858 = 8;
            MEMORY[0] = 59637776;
            MEMORY[4] = dword_802721F0;
            sub_80255CD0();
            sub_80260800((int)&flt_8031AB10,
                         COERCE_INT(0.0013020834),
                         COERCE_INT(0.0013020834),
                         COERCE_INT(0.0013020834));
            sub_80260BC0(&flt_8031AB50, a13 * 57.295776, 0.0, 0.0, 1.0);
            sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB10);
            if (v26 > 0.0)
                sub_80260E30(
                    (int)&flt_8031AB50, COERCE_INT(v26 - a12), COERCE_INT(-(float)(v26 - a12)), 0);
            else
                sub_80260E30(
                    (int)&flt_8031AB50, COERCE_INT(v26 + a12), COERCE_INT(-(float)(v26 + a12)), 0);
            sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB10);
            sub_80209D70((unsigned int *)a2, &flt_8031AB10);
        } else if (sub_80220534((int)v21) || !sub_80220544(v21)) {
            sub_802203F0(0, a11);
            if (v26 > 0.0) {
                MEMORY[0x30] = v26 - a12;
                MEMORY[0x34] = -(float)(v26 - a12);
            } else {
                MEMORY[0x30] = v26 + a12;
                MEMORY[0x34] = -MEMORY[0x30];
            }
            MEMORY[0x38] = 0.25400001;
            sub_8022FEF0(a3);
            sub_802336E0(0);
            sub_802303D4(0);
            sub_80230554(0, 0);
            if (sub_80220534((int)v19))
                sub_802203F0(0, a10);
        }
    }
}
// 8020C714: write access to const memory at 8028AAF0 has been detected
// 8020C768: write access to const memory at 8028AAF4 has been detected
// 8020C964: write access to const memory at 8028A858 has been detected
// 8020C984: write access to const memory at 8028A858 has been detected
// 8020C9A4: write access to const memory at 8028A858 has been detected
// 8020C9C8: write access to const memory at 8028A858 has been detected
// 8020C9EC: write access to const memory at 8028A858 has been detected
// 8020CA10: write access to const memory at 8028A858 has been detected
// 8020CA34: write access to const memory at 8028A858 has been detected
// 8020CA58: write access to const memory at 8028A858 has been detected
// 8020CC64: write access to const memory at 8028A858 has been detected
// 8020CC84: write access to const memory at 8028A858 has been detected
// 8020CCA4: write access to const memory at 8028A858 has been detected
// 8020CCC8: write access to const memory at 8028A858 has been detected
// 8020CCE4: write access to const memory at 8028A858 has been detected
// 8020CD0C: write access to const memory at 8028A858 has been detected
// 8020CD2C: write access to const memory at 8028A858 has been detected
// 8020CD44: write access to const memory at 8028A858 has been detected
// 8020C780: variable 'v13' is possibly undefined
// 8020C7A0: variable 'v14' is possibly undefined
// 802721F0: using guessed type int dword_802721F0[2];
// 8028A858: using guessed type int dword_8028A858;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB50: using guessed type float flt_8031AB50;
// 8031B370: using guessed type int dword_8031B370[44];
// 8031B760: using guessed type int dword_8031B760[512];
