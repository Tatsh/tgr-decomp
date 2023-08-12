#include "types-win32.h"
//----- (1005C590) --------------------------------------------------------
int __thiscall meth_unk1A5E0_7(unk1A5E0 *this, int *a2) {
    int v3;                                    // ebp
    int v4;                                    // eax
    unk00054 *v6;                              // edx
    DWORD v7;                                  // eax
    int v8;                                    // ebx
    _DWORD *v9;                                // edi
    int(__thiscall * v10)(unk1A5E0 *, char *); // ebx
    int v11;                                   // eax
    double v12;                                // st7
    double v13;                                // st6
    double v14;                                // st6
    char v16;                                  // c0
    double v17;                                // st6
    unsigned __int16 v18;                      // cx
    double v19;                                // st6
    double v20;                                // st6
    double v21;                                // st6
    char v23;                                  // c0
    double v24;                                // st6
    unsigned __int16 v25;                      // cx
    void (*v26)(void);                         // eax
    int v27;                                   // eax
    bool v28;                                  // sf
    void (*v29)(void);                         // eax
    unsigned __int16 v30;                      // ax
    double v31;                                // st7
    int v32;                                   // eax
    __int16 v33;                               // cx
    unsigned __int16 v34;                      // ax
    void (*v35)(void);                         // eax
    unsigned __int16 v36;                      // ax
    char v38;                                  // c0
    double v39;                                // st7
    int v40;                                   // eax
    int v41;                                   // ecx
    int v42;                                   // ebx
    char *v43;                                 // ebp
    int v44;                                   // eax
    int v45;                                   // eax
    void(__cdecl * v46)(unk1A5E0 *, int *);    // eax
    int v47;                                   // eax
    int v48;                                   // [esp+10h] [ebp-Ch]
    int v49;                                   // [esp+14h] [ebp-8h]
    int(__thiscall * v50)(unk1A5E0 *, char *); // [esp+18h] [ebp-4h]
    float v51;                                 // [esp+20h] [ebp+4h]

    v3 = 0;
    v4 = this->field_18;
    if ((v4 & 0x18) != 0)
        return 0;
    v6 = gUnk54Ptr;
    if ((v4 & 0x80000) == 0 || gUnk54Ptr->field_2C || gUnk54Ptr->field_30) {
        if ((v4 & 0x80000) != 0 && (gUnk54Ptr->field_2C || gUnk54Ptr->field_30)) {
            LOBYTE(v4) = v4 | 0x22;
            this->field_18 = v4;
            v7 = GetTicks();
            v8 = dword_10AA2A60;
            dword_10AA2A60 = v7;
            v6 = (unk00054 *)(v7 - v8);
            dword_10AA2A5C += v7 - v8;
            if (dword_10AA2A5C < 60)
                return 1;
            dword_10AA2A5C = 0;
            v3 = 1;
        }
    } else {
        *(_DWORD *)&this->field_1A99C[12] = 0;
        this->field_18 = v4 & 0xFFF7FFFD;
    }
    v9 = &this->gap1A93A[82];
    v10 = (int(__thiscall *)(unk1A5E0 *, char *))this->lpVtbl->meth6;
    v50 = v10;
    if (((int(__fastcall *)(unk1A5E0 *, unk00054 *, _BYTE *))v10)(this, v6, &this->gap1A93A[82]) ||
        *(_DWORD *)&this->field_1A99C[12]) {
        v11 = this->field_18;
        if ((v11 & 0x200000) == 0) {
            if ((v11 & 2) != 0) {
                if (this->field_1A92C[0] > 1u)
                    v12 = (double)((unsigned __int16)this->field_1A92C[0] - 1) /
                          *(float *)&this->field_1A99C[26];
                else
                    v12 = 1.0 / *(float *)&this->field_1A99C[26];
                if (*(_DWORD *)&this->field_1A99C[14]) {
                    v13 = (double)(**(_DWORD **)&SrcStr[8] - *v9);
                    if (!*(_DWORD *)&this->field_1A99C[12])
                        flt_10AA2A64 = v13;
                    v14 = v13 + (double)(int)**(_DWORD **)&SrcStr[8] - flt_10AA2A64;
                    *(float *)&this->field_1A99C[8] = v14;
                    if (v16) {
                        *(_DWORD *)&this->field_1A99C[8] = *(_DWORD *)&this->field_1A99C[18];
                    } else if (v14 > *(float *)&this->field_1A99C[20]) {
                        *(_DWORD *)&this->field_1A99C[8] = *(_DWORD *)&this->field_1A99C[20];
                    }
                    v17 = *(float *)&this->field_1A99C[8];
                    *v9 = (__int64)v17;
                    v18 = this->field_1A92C[0];
                    *(_DWORD *)&this->gap1A93A[90] = (__int64)v17 + 16;
                    if (v18 - 1 <= 0)
                        goto LABEL_38;
                    v19 = *(float *)&this->field_1A99C[8] - *(float *)&this->field_1A99C[18];
                } else {
                    if (!*(_DWORD *)&this->field_1A99C[16])
                        goto LABEL_38;
                    v51 = (float)*(int *)(*(_DWORD *)&SrcStr[8] + 4);
                    v20 = v51 - (double)*(int *)(*(_DWORD *)&SrcStr[8] + 16);
                    if (!*(_DWORD *)&this->field_1A99C[12])
                        flt_10AA2A68 = v51 - (double)*(int *)&this->gap1A93A[86];
                    v21 = v20 + (double)*(int *)(*(_DWORD *)&SrcStr[8] + 4) - flt_10AA2A68;
                    *(float *)&this->field_1A99C[10] = v21;
                    if (v23) {
                        *(_DWORD *)&this->field_1A99C[10] = *(_DWORD *)&this->field_1A99C[22];
                    } else if (v21 > *(float *)&this->field_1A99C[24]) {
                        *(_DWORD *)&this->field_1A99C[10] = *(_DWORD *)&this->field_1A99C[24];
                    }
                    v24 = *(float *)&this->field_1A99C[10];
                    *(_DWORD *)&this->gap1A93A[86] = (__int64)v24;
                    v25 = this->field_1A92C[0];
                    *(_DWORD *)&this->gap1A93A[94] = (__int64)v24 + 16;
                    if (v25 - 1 <= 0)
                        goto LABEL_38;
                    v19 = *(float *)&this->field_1A99C[10] - *(float *)&this->field_1A99C[22];
                }
                this->field_1A92C[1] = (__int64)(v19 * v12);
            LABEL_38:
                v26 = (void (*)(void))this->field_4[3];
                if (v26)
                    v26();
                *(_DWORD *)&this->field_1A99C[12] = 1;
                return 1;
            }
            return 1;
        }
    }
    if (!v10(this, &this->gap1A93A[18]) || (v27 = this->field_18, (v27 & 0x200000) != 0)) {
        if (v10(this, &this->gap1A93A[34])) {
            v32 = this->field_18;
            if ((v32 & 0x200000) == 0) {
                if ((v32 & 2) == 0) {
                    *(_DWORD *)&this->field_1A99C[2] = 0;
                    return 1;
                }
                v33 = ++this->field_1A92C[1];
                v34 = this->field_1A92C[0];
                *(_DWORD *)&this->field_1A99C[2] = 1;
                if (v33 >= (int)v34)
                    this->field_1A92C[1] = v34 - 1;
                v35 = (void (*)(void))this->field_4[2];
                if (v35)
                    v35();
                v36 = this->field_1A92C[0] - 1;
                if (this->field_1A92C[0] == 1)
                    v36 = 1;
                v31 = *(float *)&this->field_1A99C[26] / (double)v36 +
                      *(float *)&this->field_1A99C[10];
                goto LABEL_62;
            }
        }
        v49 = 0;
        if (v3)
            return 0;
        v40 = this->field_1A92C[1];
        v41 = v40 + (unsigned __int16)this->field_1A92C[2];
        v48 = v41;
        if (v41 > 100) {
            v41 = 100;
            v48 = 100;
        }
        v42 = this->field_1A92C[1];
        if (v40 >= v41) {
        LABEL_93:
            if (!v49) {
                v47 = this->field_18;
                LOBYTE(v47) = v47 & 0xDD;
                this->field_18 = v47;
                return 0;
            }
            return 1;
        }
        v43 = &this->vectorUnk438[v40].field_8;
        while (1) {
            if ((*(v43 - 4) & 0x10) != 0) {
                *v43 = 0;
            } else if (v50(this, v43 + 1052) && strlen(v43 + 1)) {
                v44 = this->field_18;
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
                        v45 = this->field_18;
                        BYTE1(v45) &= 0xFEu;
                        this->field_18 = v45;
                    }
                    if (sub_1003E080()) {
                        unknown_libname_9();
                        if ((*(v43 - 4) & 0x10) == 0) {
                            *a2 = v42;
                            sub_10072AF0(1, 0x200020u);
                            dword_10AA2854 = 1;
                            v46 = (void(__cdecl *)(unk1A5E0 *, int *))this->field_4[0];
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
        *(_DWORD *)this->field_1A99C = 0;
        return 1;
    }
    v28 = --this->field_1A92C[1] < 0;
    *(_DWORD *)this->field_1A99C = 1;
    if (v28)
        this->field_1A92C[1] = 0;
    v29 = (void (*)(void))this->field_4[1];
    if (v29)
        v29();
    v30 = this->field_1A92C[0] - 1;
    if (this->field_1A92C[0] == 1)
        v30 = 1;
    v31 = *(float *)&this->field_1A99C[10] - *(float *)&this->field_1A99C[26] / (double)v30;
LABEL_62:
    *(float *)&this->field_1A99C[10] = v31;
    if (v38) {
        *(_DWORD *)&this->field_1A99C[10] = *(_DWORD *)&this->field_1A99C[22];
    } else if (v31 > *(float *)&this->field_1A99C[24]) {
        *(_DWORD *)&this->field_1A99C[10] = *(_DWORD *)&this->field_1A99C[24];
    }
    v39 = *(float *)&this->field_1A99C[10];
    *(_DWORD *)&this->gap1A93A[86] = (__int64)v39;
    *(_DWORD *)&this->gap1A93A[94] = (__int64)v39 + 16;
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
