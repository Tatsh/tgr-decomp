#include "types-win32.h"
//----- (1005C590) --------------------------------------------------------
int __thiscall meth_1005C590(char *this, int *a2) {
    int v3;                                // ebp
    int v4;                                // eax
    unk54 *v6;                             // edx
    DWORD v7;                              // eax
    int v8;                                // ebx
    char *v9;                              // edi
    int(__thiscall * v10)(char *, char *); // ebx
    int v11;                               // eax
    double v12;                            // st7
    double v13;                            // st6
    double v14;                            // st6
    char v16;                              // c0
    double v17;                            // st6
    unsigned __int16 v18;                  // cx
    double v19;                            // st6
    double v20;                            // st6
    double v21;                            // st6
    char v23;                              // c0
    double v24;                            // st6
    unsigned __int16 v25;                  // cx
    void (*v26)(void);                     // eax
    int v27;                               // eax
    bool v28;                              // sf
    void (*v29)(void);                     // eax
    unsigned __int16 v30;                  // ax
    double v31;                            // st7
    int v32;                               // eax
    __int16 v33;                           // cx
    unsigned __int16 v34;                  // ax
    void (*v35)(void);                     // eax
    unsigned __int16 v36;                  // ax
    char v38;                              // c0
    double v39;                            // st7
    int v40;                               // eax
    int v41;                               // ecx
    int v42;                               // ebx
    char *v43;                             // ebp
    int v44;                               // eax
    int v45;                               // eax
    void(__cdecl * v46)(char *, int *);    // eax
    int v47;                               // eax
    int v48;                               // [esp+10h] [ebp-Ch]
    int v49;                               // [esp+14h] [ebp-8h]
    int(__thiscall * v50)(char *, char *); // [esp+18h] [ebp-4h]
    float v51;                             // [esp+20h] [ebp+4h]

    v3 = 0;
    v4 = *((_DWORD *)this + 6);
    if ((v4 & 0x18) != 0)
        return 0;
    v6 = g_unk54Ptr;
    if ((v4 & 0x80000) == 0 || *(_DWORD *)&g_unk54Ptr->gap4[40] ||
        *(_DWORD *)&g_unk54Ptr->gap4[44]) {
        if ((v4 & 0x80000) != 0 &&
            (*(_DWORD *)&g_unk54Ptr->gap4[40] || *(_DWORD *)&g_unk54Ptr->gap4[44])) {
            LOBYTE(v4) = v4 | 0x22;
            *((_DWORD *)this + 6) = v4;
            v7 = getTicks();
            v8 = dword_10AA2A60;
            dword_10AA2A60 = v7;
            v6 = (unk54 *)(v7 - v8);
            dword_10AA2A5C += v7 - v8;
            if (dword_10AA2A5C < 60)
                return 1;
            dword_10AA2A5C = 0;
            v3 = 1;
        }
    } else {
        *((_DWORD *)this + 27245) = 0;
        *((_DWORD *)this + 6) = v4 & 0xFFF7FFFD;
    }
    v9 = this + 108940;
    v10 = *(int(__thiscall **)(char *, char *))(*(_DWORD *)this + 24);
    v50 = v10;
    if (((int(__fastcall *)(char *, unk54 *, char *))v10)(this, v6, this + 108940) ||
        *((_DWORD *)this + 27245)) {
        v11 = *((_DWORD *)this + 6);
        if ((v11 & 0x200000) == 0) {
            if ((v11 & 2) != 0) {
                if (*((_WORD *)this + 54422) > 1u)
                    v12 = (double)(*((unsigned __int16 *)this + 54422) - 1) /
                          *((float *)this + 27252);
                else
                    v12 = 1.0 / *((float *)this + 27252);
                if (*((_DWORD *)this + 27246)) {
                    v13 = (double)(**(_DWORD **)&SrcStr[8] - *(_DWORD *)v9);
                    if (!*((_DWORD *)this + 27245))
                        flt_10AA2A64 = v13;
                    v14 = v13 + (double)(int)**(_DWORD **)&SrcStr[8] - flt_10AA2A64;
                    *((float *)this + 27243) = v14;
                    if (v16) {
                        *((_DWORD *)this + 27243) = *((_DWORD *)this + 27248);
                    } else if (v14 > *((float *)this + 27249)) {
                        *((_DWORD *)this + 27243) = *((_DWORD *)this + 27249);
                    }
                    v17 = *((float *)this + 27243);
                    *(_DWORD *)v9 = (__int64)v17;
                    v18 = *((_WORD *)this + 54422);
                    *((_DWORD *)this + 27237) = (__int64)v17 + 16;
                    if (v18 - 1 <= 0)
                        goto LABEL_38;
                    v19 = *((float *)this + 27243) - *((float *)this + 27248);
                } else {
                    if (!*((_DWORD *)this + 27247))
                        goto LABEL_38;
                    v51 = (float)*(int *)(*(_DWORD *)&SrcStr[8] + 4);
                    v20 = v51 - (double)*(int *)(*(_DWORD *)&SrcStr[8] + 16);
                    if (!*((_DWORD *)this + 27245))
                        flt_10AA2A68 = v51 - (double)*((int *)this + 27236);
                    v21 = v20 + (double)*(int *)(*(_DWORD *)&SrcStr[8] + 4) - flt_10AA2A68;
                    *((float *)this + 27244) = v21;
                    if (v23) {
                        *((_DWORD *)this + 27244) = *((_DWORD *)this + 27250);
                    } else if (v21 > *((float *)this + 27251)) {
                        *((_DWORD *)this + 27244) = *((_DWORD *)this + 27251);
                    }
                    v24 = *((float *)this + 27244);
                    *((_DWORD *)this + 27236) = (__int64)v24;
                    v25 = *((_WORD *)this + 54422);
                    *((_DWORD *)this + 27238) = (__int64)v24 + 16;
                    if (v25 - 1 <= 0)
                        goto LABEL_38;
                    v19 = *((float *)this + 27244) - *((float *)this + 27250);
                }
                *((_WORD *)this + 54423) = (__int64)(v19 * v12);
            LABEL_38:
                v26 = (void (*)(void)) * ((_DWORD *)this + 4);
                if (v26)
                    v26();
                *((_DWORD *)this + 27245) = 1;
                return 1;
            }
            return 1;
        }
    }
    if (!v10(this, this + 108876) || (v27 = *((_DWORD *)this + 6), (v27 & 0x200000) != 0)) {
        if (v10(this, this + 108892)) {
            v32 = *((_DWORD *)this + 6);
            if ((v32 & 0x200000) == 0) {
                if ((v32 & 2) == 0) {
                    *((_DWORD *)this + 27240) = 0;
                    return 1;
                }
                v33 = ++*((_WORD *)this + 54423);
                v34 = *((_WORD *)this + 54422);
                *((_DWORD *)this + 27240) = 1;
                if (v33 >= (int)v34)
                    *((_WORD *)this + 54423) = v34 - 1;
                v35 = (void (*)(void)) * ((_DWORD *)this + 3);
                if (v35)
                    v35();
                v36 = *((_WORD *)this + 54422) - 1;
                if (*((_WORD *)this + 54422) == 1)
                    v36 = 1;
                v31 = *((float *)this + 27252) / (double)v36 + *((float *)this + 27244);
                goto LABEL_62;
            }
        }
        v49 = 0;
        if (v3)
            return 0;
        v40 = *((__int16 *)this + 54423);
        v41 = v40 + *((unsigned __int16 *)this + 54424);
        v48 = v41;
        if (v41 > 100) {
            v41 = 100;
            v48 = 100;
        }
        v42 = *((__int16 *)this + 54423);
        if (v40 >= v41) {
        LABEL_93:
            if (!v49) {
                v47 = *((_DWORD *)this + 6);
                LOBYTE(v47) = v47 & 0xDD;
                *((_DWORD *)this + 6) = v47;
                return 0;
            }
            return 1;
        }
        v43 = &this[1080 * v40 + 52];
        while (1) {
            if ((*(v43 - 4) & 0x10) != 0) {
                *v43 = 0;
            } else if (v50(this, v43 + 1052) && strlen(v43 + 1)) {
                v44 = *((_DWORD *)this + 6);
                v49 = 1;
                if ((v44 & 0x1000000) == 0) {
                    if ((v44 & 0x100) != 0) {
                        switch (*v43) {
                        case 0:
                            goto LABEL_85;
                        case 1:
                            *v43 = 2;
                            break;
                        case 2:
                        LABEL_85:
                            *v43 = 1;
                            break;
                        default:
                            *v43 = 0;
                            break;
                        }
                        v45 = *((_DWORD *)this + 6);
                        BYTE1(v45) &= 0xFEu;
                        *((_DWORD *)this + 6) = v45;
                    }
                    if (sub_1003E080()) {
                        unknown_libname_9();
                        if ((*(v43 - 4) & 0x10) == 0) {
                            *a2 = v42;
                            sub_10072AF0(1, 0x200020u);
                            dword_10AA2854 = 1;
                            v46 = (void(__cdecl *)(char *, int *)) * ((_DWORD *)this + 1);
                            if (v46)
                                v46(this, a2);
                        }
                    }
                    goto LABEL_92;
                }
            } else {
                *v43 = 1;
            }
        LABEL_92:
            ++v42;
            v43 += 1080;
            if (v42 >= v48)
                goto LABEL_93;
        }
    }
    if ((v27 & 2) == 0) {
        *((_DWORD *)this + 27239) = 0;
        return 1;
    }
    v28 = (__int16)--*((_WORD *)this + 54423) < 0;
    *((_DWORD *)this + 27239) = 1;
    if (v28)
        *((_WORD *)this + 54423) = 0;
    v29 = (void (*)(void)) * ((_DWORD *)this + 2);
    if (v29)
        v29();
    v30 = *((_WORD *)this + 54422) - 1;
    if (*((_WORD *)this + 54422) == 1)
        v30 = 1;
    v31 = *((float *)this + 27244) - *((float *)this + 27252) / (double)v30;
LABEL_62:
    *((float *)this + 27244) = v31;
    if (v38) {
        *((_DWORD *)this + 27244) = *((_DWORD *)this + 27250);
    } else if (v31 > *((float *)this + 27251)) {
        *((_DWORD *)this + 27244) = *((_DWORD *)this + 27251);
    }
    v39 = *((float *)this + 27244);
    *((_DWORD *)this + 27236) = (__int64)v39;
    *((_DWORD *)this + 27238) = (__int64)v39 + 16;
    return 1;
}
// 1005C6D6: variable 'v16' is possibly undefined
// 1005C79A: variable 'v23' is possibly undefined
// 1005C977: variable 'v38' is possibly undefined
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA2A5C: using guessed type int dword_10AA2A5C;
// 10AA2A60: using guessed type int dword_10AA2A60;
// 10AA2A64: using guessed type float flt_10AA2A64;
// 10AA2A68: using guessed type float flt_10AA2A68;
