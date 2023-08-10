#include "types-win32.h"
//----- (10029470) --------------------------------------------------------
int sub_10029470() {
    int result;               // eax
    int v1;                   // esi
    int v2;                   // edi
    int v3;                   // ecx
    int v4;                   // ebp
    int v5;                   // ebx
    int v6;                   // ecx
    int *v7;                  // edx
    int v8;                   // edx
    int v9;                   // ebp
    int v10;                  // edi
    int v11;                  // esi
    bool v12;                 // zf
    int v13;                  // ebp
    int v14;                  // ecx
    int v15;                  // ecx
    int v16;                  // esi
    BOOL v17;                 // ebp
    int v18;                  // eax
    int v19;                  // edi
    int v20;                  // esi
    unsigned int v21;         // edx
    int v22;                  // ecx
    int v23;                  // eax
    int v24;                  // eax
    int v25;                  // eax
    int v26;                  // eax
    unsigned __int8 *v27;     // eax
    int v28;                  // esi
    int v29;                  // eax
    __int16 v30;              // bp
    __int16 v31;              // bx
    unsigned __int8 *v32;     // edi
    unsigned int v33;         // eax
    unsigned __int8 *v34;     // edi
    unsigned int v35;         // eax
    unsigned int v36;         // eax
    int v37;                  // [esp+4h] [ebp-2B8h] BYREF
    int v38;                  // [esp+8h] [ebp-2B4h] BYREF
    unsigned int v39;         // [esp+Ch] [ebp-2B0h]
    int a1;                   // [esp+10h] [ebp-2ACh] BYREF
    char v41;                 // [esp+14h] [ebp-2A8h]
    int a2;                   // [esp+18h] [ebp-2A4h] BYREF
    int a3[3];                // [esp+1Ch] [ebp-2A0h] BYREF
    DWORD v44;                // [esp+28h] [ebp-294h] BYREF
    DWORD outExponent;        // [esp+2Ch] [ebp-290h] BYREF
    int v46;                  // [esp+30h] [ebp-28Ch] BYREF
    BOOL v47;                 // [esp+34h] [ebp-288h]
    BOOL v48;                 // [esp+38h] [ebp-284h]
    int v49;                  // [esp+3Ch] [ebp-280h]
    int v50;                  // [esp+40h] [ebp-27Ch]
    int v51;                  // [esp+44h] [ebp-278h]
    int v52;                  // [esp+48h] [ebp-274h]
    int v53;                  // [esp+4Ch] [ebp-270h]
    unsigned int elementSize; // [esp+50h] [ebp-26Ch]
    int v55;                  // [esp+54h] [ebp-268h]
    int v56;                  // [esp+58h] [ebp-264h]
    int v57;                  // [esp+5Ch] [ebp-260h]
    __int16 *v58;             // [esp+60h] [ebp-25Ch]
    unsigned int v59;         // [esp+64h] [ebp-258h]
    int v60;                  // [esp+68h] [ebp-254h]
    int v61;                  // [esp+6Ch] [ebp-250h]
    int v62;                  // [esp+70h] [ebp-24Ch]
    char v63[512];            // [esp+74h] [ebp-248h] BYREF
    int v64;                  // [esp+274h] [ebp-48h]
    int v65;                  // [esp+278h] [ebp-44h]
    int v66;                  // [esp+27Ch] [ebp-40h]
    int v67;                  // [esp+28Ch] [ebp-30h]
    char v68;                 // [esp+2A4h] [ebp-18h]
    char v69;                 // [esp+2A5h] [ebp-17h]
    char v70;                 // [esp+2A6h] [ebp-16h]
    char v71;                 // [esp+2A7h] [ebp-15h]
    char v72;                 // [esp+2A8h] [ebp-14h]
    char v73;                 // [esp+2A9h] [ebp-13h]
    char v74;                 // [esp+2AAh] [ebp-12h]
    char v75;                 // [esp+2ABh] [ebp-11h]
    int v76;                  // [esp+2ACh] [ebp-10h]
    unsigned int v77;         // [esp+2B0h] [ebp-Ch]
    int v78;                  // [esp+2B4h] [ebp-8h]
    int v79;                  // [esp+2B8h] [ebp-4h]

    v65 = dword_10575448;
    v57 = dword_104C51A4;
    v58 = (__int16 *)dword_10575434;
    v70 = byte_104D51A8;
    v68 = byte_104D51B0;
    v69 = byte_105551D4;
    v73 = byte_10575410;
    v71 = byte_104C51A0;
    v72 = byte_10555400;
    v66 = 0;
    v74 = byte_105553D8;
    v75 = byte_105551D0;
    result = sub_10028630((int)&a1);
    if (result != -1)
        return result;
    v1 = dword_10575430;
    v61 = dword_1057544C;
    if (dword_10575430 < dword_1057544C) {
        v1 = dword_1057544C;
        dword_10575430 = dword_1057544C;
    }
    a1 = 0;
    v2 = dword_105551F8[16 * dword_1057544C];
    v41 = 3;
    v3 = dword_105551FC[16 * dword_1057544C];
    v4 = 1 << v3;
    a2 = 1 << v2;
    v55 = 1 << v2;
    a3[0] = 1 << v3;
    v56 = 1 << v3;
    if (v1 > dword_1057544C) {
        v5 = v3;
        v6 = dword_1057544C + 1;
        if (dword_1057544C + 1 <= v1) {
            v7 = &dword_105551FC[16 * v6];
            while (*(v7 - 1) == --v2) {
                if (*v7 != --v5)
                    break;
                ++v6;
                v7 += 16;
                if (v6 > v1)
                    goto LABEL_12;
            }
            dword_10575430 = v6 - 1;
        }
    }
LABEL_12:
    v8 = dword_105551F0[16 * dword_1057544C];
    v39 = dword_105551E8[16 * dword_1057544C];
    v37 = v8;
    if (v39)
        a2 *= 2;
    if (v8)
        a3[0] = 2 * v4;
    a3[1] = sub_10027B90(
        dword_105551DC[16 * dword_1057544C], dword_105551D8[16 * dword_1057544C], dword_10575448);
    v44 = 8;
    outExponent = 8;
    a3[2] = 2;
    v9 = dword_105551F4[16 * v61];
    v10 = dword_10555208[16 * v61];
    v11 = dword_10555214[16 * v61];
    v12 = dword_105551EC[16 * v61] == 0;
    v46 = 3;
    v47 = !v12;
    v12 = v9 == 0;
    v13 = dword_1055520C[16 * v61];
    v14 = dword_10555210[16 * v61] - v10;
    v48 = !v12;
    v15 = (v14 + 4) >> 2;
    v16 = (v11 - v13 + 4) >> 2;
    if (v15 != v55) {
        if (v15 == a2) {
            v55 = v15;
        } else if (v15 > a2 && a2 * (v15 / a2) == v15) {
            v47 = 0;
        }
    }
    if (v16 != v56) {
        if (v16 == a3[0]) {
            v56 = v16;
        } else if (v16 > a3[0] && a3[0] * (v16 / a3[0]) == v16) {
            v48 = 0;
        }
    }
    pow2ExponentToAdd(&outExponent, a2, a3[0]);
    v17 = sub_10028200(&v46, a2, a3[0]) == 0;
    pow2ExponentToAdd(
        &v44, a2 >> (dword_10575430 - dword_1057544C), a3[0] >> (dword_10575430 - dword_1057544C));
    if (dword_100B8C90 > 1) {
        v44 = outExponent;
        dword_10575430 = dword_1057544C;
    }
    v49 = 1;
    v50 = 1;
    v51 = -1073741824;
    v52 = 0;
    v18 = sub_10029E10(v44, outExponent, v46);
    if (v18 > 0x80000)
        v18 = 0x80000;
    elementSize = v18;
    qmemcpy(v63, dword_105551D8, sizeof(v63));
    v19 = a2;
    v20 = a3[0];
    v62 = dword_10575430 + 1;
    v59 = v39;
    v60 = v37;
    v76 = 1;
    v78 = a2;
    v79 = a3[0];
    v55 = a2;
    v56 = a3[0];
    if ((dword_118AA088 & 2) == 0 || dword_100AC300) {
        dword_100A7DF4 = dword_100A7E04;
        dword_100A7DF8 = dword_100A7E08;
    } else {
        dword_100A7DF4 = dword_100A7DFC;
        dword_100A7DF8 = dword_100A7E00;
    }
    v21 = g_HWCaps.dwMaxTextureWidth;
    if (v17 || v39 || v37 || gD3DAlwaysSquareTextures ||
        (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0 ||
        (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0 ||
        g_HWCaps.dwMaxTextureWidth && a2 > g_HWCaps.dwMaxTextureWidth ||
        g_HWCaps.dwMaxTextureHeight && a3[0] > g_HWCaps.dwMaxTextureHeight || a2 > dword_100A7DF4 ||
        a3[0] > dword_100A7DF8) {
        v22 = a2;
        v23 = a3[0];
        v38 = a2;
        v37 = a3[0];
        if (v39 && dword_100B8C90 > 1) {
            v38 = a2 / 2;
            pow2ExponentToAdd(&outExponent, a2 / 2, a3[0]);
            v24 = sub_10028200(&v46, v38, v37);
            v20 = a3[0];
            v19 = a2;
            v21 = g_HWCaps.dwMaxTextureWidth;
            v17 = v24 == 0;
            v22 = v38;
            v44 = dword_10575430 + outExponent - dword_1057544C;
            v23 = v37;
        }
        if (v60 && dword_100B8C90 > 1) {
            v37 = v23 / 2;
            pow2ExponentToAdd(&outExponent, v22, v23 / 2);
            v25 = sub_10028200(&v46, v38, v37);
            v20 = a3[0];
            v19 = a2;
            v22 = v38;
            v17 = v25 == 0;
            v23 = v37;
            v44 = dword_10575430 + outExponent - dword_1057544C;
            v21 = g_HWCaps.dwMaxTextureWidth;
        }
        if (!v17)
            goto LABEL_62;
        if (v19 < v20) {
            if (v20 > 1) {
                v20 /= 2;
                goto LABEL_60;
            }
        } else if (v19 > 1) {
            v19 /= 2;
        LABEL_60:
            pow2ExponentToAdd(&outExponent, v19, v20);
            sub_10028200(&v46, v19, v20);
            v44 = dword_10575430 + outExponent - dword_1057544C;
            goto LABEL_61;
        }
    LABEL_61:
        sub_10028720(&v38, &v37, outExponent, v46);
        v21 = g_HWCaps.dwMaxTextureWidth;
        v22 = v38;
        v23 = v37;
    LABEL_62:
        if (v21 && v22 > v21) {
            v38 = v21;
            pow2ExponentToAdd(&outExponent, v21, v23);
            sub_10028200(&v46, v38, v37);
            v22 = v38;
            v23 = v37;
            v44 = dword_10575430 + outExponent - dword_1057544C;
        }
        if (g_HWCaps.dwMaxTextureHeight && v23 > g_HWCaps.dwMaxTextureHeight) {
            v37 = g_HWCaps.dwMaxTextureHeight;
            pow2ExponentToAdd(&outExponent, v22, g_HWCaps.dwMaxTextureHeight);
            sub_10028200(&v46, v38, v37);
            v23 = v37;
            v44 = dword_10575430 + outExponent - dword_1057544C;
            v22 = v38;
        }
        if (v22 > dword_100A7DF4) {
            v38 = dword_100A7DF4;
            pow2ExponentToAdd(&outExponent, dword_100A7DF4, v23);
            sub_10028200(&v46, v38, v37);
            v22 = v38;
            v44 = dword_10575430 + outExponent - dword_1057544C;
            v23 = v37;
        }
        if (v23 > dword_100A7DF8) {
            v37 = dword_100A7DF8;
            pow2ExponentToAdd(&outExponent, v22, dword_100A7DF8);
            sub_10028200(&v46, v38, v37);
            v22 = v38;
            v23 = v37;
            v44 = dword_10575430 + outExponent - dword_1057544C;
        }
        if ((gD3DAlwaysSquareTextures || (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0 ||
             (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0) &&
            v22 != v23) {
            if (v22 < v23) {
                v22 = dword_100A7DF8;
                if (v23 < dword_100A7DF8) {
                    v22 = v23;
                } else {
                    v23 = dword_100A7DF8;
                    v37 = dword_100A7DF8;
                }
                v38 = v22;
            } else {
                v23 = dword_100A7DF4;
                if (v22 < dword_100A7DF4) {
                    v23 = v22;
                    v37 = v22;
                } else {
                    v22 = dword_100A7DF4;
                    v37 = dword_100A7DF4;
                    v38 = dword_100A7DF4;
                }
            }
            pow2ExponentToAdd(&outExponent, v22, v23);
            sub_10028200(&v46, v38, v37);
            v23 = v37;
            v44 = dword_10575430 + outExponent - dword_1057544C;
            v22 = v38;
        }
        a2 = v22;
        a3[0] = v23;
    }
    if (!dword_10575414 || (v53 = 1, gD3dalphacompar))
        v53 = 0;
    if (dword_100B8C90 > 1 && sub_10037930(v57, &a2, a3)) {
        pow2ExponentToAdd(&outExponent, a2, a3[0]);
        sub_10028200(&v46, a2, a3[0]);
        v44 = dword_10575430 + outExponent - dword_1057544C;
    }
    v64 = dword_118AA088;
    v77 = elementSize;
    if ((dword_118AA088 & 2) != 0 && v62 == 2) {
        v26 = v64;
        LOBYTE(v26) = v64 | 0x80;
        v64 = v26;
    }
    v27 = sub_10028860((#506 *)&a1);
    v28 = TIDFromTextureAppend(&a1, (int)v27);
    if (*((_DWORD *)dword_1057543C + 174 * v28 + 156)) {
        v29 = sub_10061000();
        if (v29 >= 0 && v29 < 8)
            dword_11829850[v29] = v28;
    }
    if ((v64 & 2) != 0) {
        if (v66) {
            if (v67) {
                sub_10037030(v28);
                return v28;
            }
        } else if (sub_10037070((int)v58)) {
            v30 = *v58;
            v31 = v58[1];
            *v58 = -1;
            v58[1] = -1;
            v32 = sub_10028860((#506 *)&a1);
            dword_118AA0B8(v28, v32);
            v33 = CalculateChecksum(0, 0, 0);
            v39 = CalculateChecksum(v33, v32, elementSize);
            *v58 = v30;
            v58[1] = v31;
            v34 = sub_10028860((#506 *)&a1);
            dword_118AA0B8(v28, v34);
            v35 = CalculateChecksum(0, 0, 0);
            v36 = CalculateChecksum(v35, v34, elementSize);
            if (v36 != v39)
                sub_10037030(v28);
        }
    }
    return v28;
}
// 100A7DFC: using guessed type int dword_100A7DFC;
// 100A7E00: using guessed type int dword_100A7E00;
// 100A7E04: using guessed type int dword_100A7E04;
// 100A7E08: using guessed type int dword_100A7E08;
// 100AA720: using guessed type int gD3dalphacompar;
// 100AC300: using guessed type int dword_100AC300;
// 100B8C90: using guessed type int dword_100B8C90;
// 104C51A0: using guessed type char byte_104C51A0;
// 104C51A4: using guessed type int dword_104C51A4;
// 104D51A8: using guessed type char byte_104D51A8;
// 104D51B0: using guessed type char byte_104D51B0;
// 105551D0: using guessed type char byte_105551D0;
// 105551D4: using guessed type char byte_105551D4;
// 105551D8: using guessed type int dword_105551D8[];
// 105551DC: using guessed type int dword_105551DC[];
// 105551E8: using guessed type int dword_105551E8[];
// 105551EC: using guessed type int dword_105551EC[];
// 105551F0: using guessed type int dword_105551F0[];
// 105551F4: using guessed type int dword_105551F4[];
// 105551F8: using guessed type int dword_105551F8[];
// 105551FC: using guessed type int dword_105551FC[];
// 10555208: using guessed type int dword_10555208[];
// 1055520C: using guessed type int dword_1055520C[];
// 10555210: using guessed type int dword_10555210[];
// 105553D8: using guessed type char byte_105553D8;
// 10555400: using guessed type char byte_10555400;
// 10575410: using guessed type char byte_10575410;
// 10575414: using guessed type int dword_10575414;
// 10575420: using guessed type int gD3DAlwaysSquareTextures;
// 10575430: using guessed type int dword_10575430;
// 10575434: using guessed type int dword_10575434;
// 10575448: using guessed type int dword_10575448;
// 1057544C: using guessed type int dword_1057544C;
// 118AA088: using guessed type int dword_118AA088;
// 118AA0B8: using guessed type int (__cdecl *dword_118AA0B8)(_DWORD, _DWORD);
