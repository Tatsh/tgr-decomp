#include "types-win32.h"
//----- (10061F70) --------------------------------------------------------
void __thiscall meth_10061F70(_DWORD *this) {
    double v2;       // st7
    double v3;       // st7
    double v4;       // st7
    double v5;       // st7
    double v7;       // st6
    char v8;         // c0
    double v9;       // st7
    double v10;      // st6
    double v11;      // st5
    _BOOL2 v12;      // cx
    double v13;      // st6
    double v14;      // st5
    double v15;      // st6
    double v16;      // st7
    long double v17; // st7
    double v18;      // st6
    double v19;      // st7
    double v20;      // st7
    int v21;         // ecx
    int v22;         // eax
    int *v23;        // ecx
    int v24;         // eax
    int *v25;        // ecx
    double v26;      // st7
    double v27;      // st7
    int *v28;        // edx
    int v29;         // edi
    int v30;         // ecx
    double v31;      // st7
    double v32;      // st7
    float *v33;      // edx
    double v34;      // st6
    int v35;         // ecx
    int v36;         // ecx
    float v37;       // eax
    double v38;      // st7
    double v39;      // st7
    double v40;      // st7
    double v41;      // st7
    double v42;      // st7
    double v44;      // st6
    char v45;        // c0
    double v46;      // st7
    int v47;         // eax
    float v48;       // [esp+10h] [ebp-18h]
    float v49;       // [esp+10h] [ebp-18h]
    float v50;       // [esp+10h] [ebp-18h]
    float v51;       // [esp+10h] [ebp-18h]
    float v52;       // [esp+14h] [ebp-14h]
    float v53;       // [esp+14h] [ebp-14h]
    float v54;       // [esp+14h] [ebp-14h]
    float v55;       // [esp+14h] [ebp-14h]
    float v56;       // [esp+14h] [ebp-14h]
    float v57;       // [esp+18h] [ebp-10h]
    float v58;       // [esp+18h] [ebp-10h]
    float v59;       // [esp+18h] [ebp-10h]
    float v60;       // [esp+18h] [ebp-10h]
    float v61;       // [esp+18h] [ebp-10h]
    float v62;       // [esp+18h] [ebp-10h]
    float v63[3];    // [esp+1Ch] [ebp-Ch] BYREF

    v2 = *(float *)(this[2672] + 32);
    if (*(__int16 *)gConfigJoystickPtr >= 0 && (*((_WORD *)gConfigJoystickPtr + 3) & 0x8000) == 0) {
        if (v2 <= 0.0) {
            v4 = v2 - -0.07;
            v48 = v4;
            if (v4 > 0.0) {
            LABEL_7:
                v48 = 0.0;
                goto LABEL_8;
            }
        } else {
            v3 = v2 - 0.07;
            v48 = v3;
            if (v3 < 0.0)
                goto LABEL_7;
        }
    LABEL_8:
        sub_10074720(v63, (float *)this + 136, (float *)this + 122);
        v52 = v63[0];
        if (v63[0] < 10.0)
            v52 = 10.0;
        if (v52 > 70.0)
            v52 = 70.0;
        switch (this[934]) {
        case 0:
            flt_100B3670 = 10.0;
            v5 = 6.0;
            dword_100B3668 = 1096810496;
            dword_100B366C = 1006834287;
            break;
        case 1:
            flt_100B3670 = 10.0;
            v5 = 5.0;
            dword_100B3668 = 1096810496;
            dword_100B366C = 1008981770;
            break;
        case 2:
            flt_100B3670 = 10.0;
            v5 = 4.0;
            dword_100B3668 = 1096810496;
            dword_100B366C = 1012202996;
            break;
        case 3:
            flt_100B3670 = 10.0;
            v5 = 3.0;
            dword_100B3668 = 1096810496;
            dword_100B366C = 1015759766;
            break;
        case 4:
            flt_100B3670 = 10.0;
            v5 = 3.0;
            dword_100B3668 = 1096810496;
            dword_100B366C = 1018444120;
            break;
        case 5:
            flt_100B3670 = 10.0;
            v5 = 3.0;
            dword_100B3668 = 1096810496;
            dword_100B366C = 1022739087;
            break;
        case 6:
            flt_100B3670 = 10.0;
            v5 = 3.0;
            dword_100B3668 = 1096810496;
            dword_100B366C = 1028443341;
            break;
        default:
            v5 = 16.0;
            dword_100B3668 = 1099431936;
            dword_100B366C = 1032805417;
            flt_100B3670 = 14.0;
            break;
        }
        v57 = *(float *)&dword_100B366C;
        word_10AA346C = 0;
        v53 = *(float *)&dword_100B3668 - v52 * 0.011111111 * flt_100B3670;
        v7 = v48;
        if (v8)
            v7 = -v7;
        if (v7 >= 0.001) {
            if (v48 >= -0.75) {
                if (v48 <= 0.75)
                    v9 = -(v5 * 0.017453292 * v48);
                else
                    v9 = v53 * -0.017453292;
            } else {
                v9 = v53 * 0.017453292;
            }
        } else {
            v9 = 0.0;
        }
        v49 = v53 * 0.017453292;
        if (v9 > v49)
            v9 = v49;
        v54 = v53 * -0.017453292;
        if (v9 < v54)
            v9 = v54;
        if (v9 == 0.0) {
            v10 = 0.0;
        } else if (v9 <= 0.0) {
            v10 = -1.0;
        } else {
            v10 = 1.0;
        }
        if (*((float *)this + 904) == 0.0) {
            v11 = 0.0;
        } else if (*((float *)this + 904) <= 0.0) {
            v11 = -1.0;
        } else {
            v11 = 1.0;
        }
        v12 = v10 != v11 || *((float *)this + 904) > 0.0 && v9 < *((float *)this + 904) ||
              *((float *)this + 904) < 0.0 && v9 > *((float *)this + 904);
        if (*((float *)this + 904) == 0.0) {
            v12 = 0;
            *((_BYTE *)this + 3713) = 0;
        }
        if (v9 < *((float *)this + 904) && *((char *)this + 3713) < 0)
            v12 = 1;
        if (v9 > *((float *)this + 904) && *((char *)this + 3713) > 0)
            v12 = 1;
        if (v12) {
            if (v9 >= *((float *)this + 904))
                *((_BYTE *)this + 3713) = 1;
            else
                *((_BYTE *)this + 3713) = -1;
            v57 = 1.0;
            if (*((float *)this + 904) == 0.0) {
                v13 = 0.0;
            } else if (*((float *)this + 904) <= 0.0) {
                v13 = -1.0;
            } else {
                v13 = 1.0;
            }
            if (v9 == 0.0) {
                v14 = 0.0;
            } else if (v9 <= 0.0) {
                v14 = -1.0;
            } else {
                v14 = 1.0;
            }
            if (v13 != v14)
                v9 = 0.0;
        } else {
            *((_BYTE *)this + 3713) = 0;
        }
        v15 = *((float *)this + 904) - v9;
        if (v15 < 0.0)
            v15 = -v15;
        if (v15 >= v57) {
            if (v9 >= *((float *)this + 904))
                v16 = v57 + *((float *)this + 904);
            else
                v16 = *((float *)this + 904) - v57;
            *((float *)this + 904) = v16;
        } else {
            *((float *)this + 904) = v9;
        }
        goto LABEL_124;
    }
    if (v2 >= 0.0)
        v55 = *(float *)(this[2672] + 32);
    else
        v55 = -v2;
    v50 = 1.0;
    if (gSpeedSensitive) {
        if (*((float *)this + 1036) > 50.0) {
            if (*((float *)this + 1036) < 100.0)
                v50 = 1.0 - (*((float *)this + 1036) - 50.0) * 0.001;
            else
                v50 = 0.94999999;
        } else {
            v50 = 1.0;
        }
    }
    switch (this[934]) {
    case 0:
        if (v2 == 0.0) {
            v58 = 0.0;
        } else {
            v58 = 1.0;
            if (v2 <= 0.0)
                v58 = -1.0;
        }
        *((float *)this + 904) = (pow(11.0, v55) - 1.0) * v58 * 0.1 * v50 * -0.078539819;
        break;
    case 1:
        if (v2 == 0.0) {
            v59 = 0.0;
        } else {
            v59 = 1.0;
            if (v2 <= 0.0)
                v59 = -1.0;
        }
        v17 = (pow(11.0, v55) - 1.0) * v59 * 0.1;
        goto LABEL_109;
    case 2:
        if (v2 == 0.0) {
            v60 = 0.0;
        } else {
            v60 = 1.0;
            if (v2 <= 0.0)
                v60 = -1.0;
        }
        v17 = (pow(2.0, v55) - 1.0) * v60;
    LABEL_109:
        *((float *)this + 904) = v17 * v50 * -0.087266468;
        break;
    case 3:
        if (v2 == 0.0) {
            v61 = 0.0;
        } else {
            v61 = 1.0;
            if (v2 <= 0.0)
                v61 = -1.0;
        }
        *((float *)this + 904) = (pow(2.0, v55) - 1.0) * v61 * v50 * -0.095993109;
        break;
    case 4:
        *((float *)this + 904) = v50 * v2 * -0.087266468;
        break;
    case 5:
        *((float *)this + 904) = v50 * v2 * -0.10471976;
        break;
    case 6:
        *((float *)this + 904) = v50 * v2 * -0.12217305;
        break;
    default:
        if (v2 == 0.0) {
            v18 = 0.0;
        } else if (v2 <= 0.0) {
            v18 = -1.0;
        } else {
            v18 = 1.0;
        }
        *((float *)this + 904) = v2 * v2 * v18 * v50 * -0.1308997;
        break;
    }
LABEL_124:
    v56 = *((float *)this + 905);
    if (v56 < 800.0)
        this[905] = 1145569280;
    if (!this[920]) {
        v22 = this[924];
        if (v22 > 0 && (v23 = (int *)this[2672], (*v23 & 0x200000) != 0)) {
            meth_10035FA0(v23, 0x200000);
            v24 = this[924] - 1;
        } else {
            if (v22 >= this[918])
                goto LABEL_145;
            v25 = (int *)this[2672];
            if ((*v25 & 0x100000) == 0 || (*v25 & 0x20000) != 0)
                goto LABEL_145;
            meth_10035FA0(v25, 0x100000);
            v24 = this[924] + 1;
        }
        this[924] = v24;
        goto LABEL_145;
    }
    v62 = 6000.0;
    v19 = 4000.0;
    if ((*((_WORD *)gConfigJoystickPtr + 6) & 0x8000) != 0) {
        v51 = *(float *)(this[2672] + 28);
        if (v51 > 0.40000001) {
            v20 = 4000.0 - v51 * -2000.0;
            v62 = v20;
            v19 = v20 - 2000.0;
        }
    }
    v21 = this[924];
    if (v21 <= 1 || v19 <= *((float *)this + 905)) {
        if (v21 < this[918] && *((float *)this + 905) > (double)v62 &&
            (*(_DWORD *)this[2672] & 0x20000) == 0)
            this[924] = v21 + 1;
    } else {
        this[924] = v21 - 1;
    }
LABEL_145:
    v26 = 0.0;
    if (gGameMode == 1) {
        if (!this[1022])
            goto LABEL_161;
        v27 = 0.0;
        if (dword_100B36F8 > 0) {
            v28 = &dword_10ACD4F8;
            v29 = dword_100B36F8;
            do {
                v30 = *v28;
                if (*v28) {
                    if (v27 < *(float *)(v30 + 4084))
                        v27 = *(float *)(v30 + 4084);
                } else if (v27 < *((float *)v28 - 4)) {
                    v27 = *((float *)v28 - 4);
                }
                v28 += 32;
                --v29;
            } while (v29);
        }
        v31 = v27 - *((float *)this + 1021);
        if (v31 < 0.0)
            v31 = -v31;
        v26 = v31 * 0.5 - 18.0;
        if (v26 < 0.0) {
            v26 = 0.0;
            goto LABEL_161;
        }
        if (v26 > 30.0)
            goto LABEL_160;
    } else if (gGameMode == 6) {
        v47 = this[1022];
        if (v47) {
            if (v47 != 1) {
            LABEL_160:
                v26 = 30.0;
                goto LABEL_161;
            }
            v26 = 20.0;
        } else {
            v26 = 0.0;
        }
    }
LABEL_161:
    v32 = v26 +
          ((*((float *)this + 913) * *((float *)this + 905) + *((float *)this + 914)) *
               *((float *)this + 905) +
           *((float *)this + 915)) *
              *((float *)this + 905) +
          *((float *)this + 916);
    if (!this[920])
        v32 = v32 * 1.03;
    v33 = (float *)this[2672];
    if ((*(_DWORD *)v33 & 0x10000) == 0)
        v32 = 0.0;
    v34 = 7.0;
    if ((*((_WORD *)gConfigJoystickPtr + 6) & 0x8000) != 0 && v33[7] > 0.0)
        v34 = v33[7] * 7.0;
    v35 = this[960];
    *((float *)this + 922) = v34 * v32;
    if ((*(_BYTE *)(v35 + 104) & 1) != 0) {
        this[924] = 0;
    } else if (!this[924]) {
        this[924] = 1;
    }
    v36 = this[924];
    v37 = *v33;
    if (v36) {
        if ((LODWORD(v37) & 0x20000) != 0)
            v38 = *((float *)this + 907) * *((float *)this + 917) *
                  (*((float *)this + 464) * 0.15915494) * -60.0;
        else
            v38 = *(float *)&this[v36 + 906] * *((float *)this + 917) *
                  (*((float *)this + 464) * 0.15915494) * -60.0;
        *((float *)this + 905) = v38;
    } else {
        v39 = *((float *)this + 905);
        if ((LODWORD(v37) & 0x10000) != 0)
            v40 = v39 - -300.0;
        else
            v40 = v39 - 200.0;
        *((float *)this + 905) = v40;
        this[922] = 0;
    }
    if (*((float *)this + 905) < 0.0)
        *((float *)this + 905) = -*((float *)this + 905);
    if (*((float *)this + 905) < 900.0)
        this[905] = 1147207680;
    if (*((float *)this + 905) > 8000.0)
        this[905] = 1174011904;
    if ((*((_WORD *)gConfigJoystickPtr + 6) & 0x8000) != 0 && !v36) {
        v41 = v33[7] * 8000.0;
        if (v41 < 900.0)
            v41 = 900.0;
        if (v41 < *((float *)this + 905))
            *((float *)this + 905) = v41;
    }
    v42 = *((float *)this + 905) - v56;
    v44 = v42;
    if (v45)
        v44 = -v42;
    if (v44 > 400.0) {
        if (v42 == 0.0) {
            v46 = 0.0;
        } else if (v42 <= 0.0) {
            v46 = -1.0;
        } else {
            v46 = 1.0;
        }
        v42 = v46 * 400.0;
    }
    this[923] = 0;
    *((float *)this + 905) = v42 + v56;
    if ((*(_DWORD *)v33 & 0x40000) != 0)
        this[923] = -938952704;
}
// 100621EE: variable 'v8' is possibly undefined
// 10062B63: variable 'v45' is possibly undefined
// 100AA010: using guessed type int g_GameMode;
// 100B3664: using guessed type int g_SpeedSensitive;
// 100B3668: using guessed type int dword_100B3668;
// 100B366C: using guessed type int dword_100B366C;
// 100B3670: using guessed type float flt_100B3670;
// 100B36F8: using guessed type int dword_100B36F8;
// 10AA346C: using guessed type __int16 word_10AA346C;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
