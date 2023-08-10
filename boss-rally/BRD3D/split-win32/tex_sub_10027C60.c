#include "types-win32.h"
//----- (10027C60) --------------------------------------------------------
int __cdecl tex_sub_10027C60(unsigned __int8 *a1,
                             int a2,
                             int a3,
                             int a4,
                             int a5,
                             int a6,
                             int a7,
                             int a8,
                             int a9,
                             int a10,
                             int a11,
                             int a12,
                             int a13,
                             int a14,
                             int a15) {
    int v15;              // ebp
    int v16;              // ebx
    int v17;              // eax
    int v18;              // eax
    int v19;              // eax
    int v20;              // edi
    int v21;              // esi
    unsigned __int8 *v22; // eax
    int v24;              // [esp-Ch] [ebp-2C8h]
    int v25;              // [esp-8h] [ebp-2C4h]
    int v26;              // [esp+10h] [ebp-2ACh] BYREF
    char v27;             // [esp+14h] [ebp-2A8h]
    int v28;              // [esp+18h] [ebp-2A4h]
    int v29;              // [esp+1Ch] [ebp-2A0h]
    int v30;              // [esp+20h] [ebp-29Ch]
    int v31;              // [esp+24h] [ebp-298h]
    DWORD v32;            // [esp+28h] [ebp-294h] BYREF
    DWORD v33;            // [esp+2Ch] [ebp-290h] BYREF
    _DWORD v34[8];        // [esp+30h] [ebp-28Ch] BYREF
    int v35;              // [esp+50h] [ebp-26Ch]
    int v36;              // [esp+54h] [ebp-268h]
    int v37;              // [esp+58h] [ebp-264h]
    unsigned __int8 *v38; // [esp+5Ch] [ebp-260h]
    int v39;              // [esp+60h] [ebp-25Ch]
    int v40;              // [esp+64h] [ebp-258h]
    int v41;              // [esp+68h] [ebp-254h]
    int v42;              // [esp+6Ch] [ebp-250h]
    int v43;              // [esp+70h] [ebp-24Ch]
    int v44[140];         // [esp+74h] [ebp-248h]
    char v45;             // [esp+2A4h] [ebp-18h]
    char v46;             // [esp+2A5h] [ebp-17h]
    char v47;             // [esp+2A6h] [ebp-16h]
    char v48;             // [esp+2A7h] [ebp-15h]
    char v49;             // [esp+2A8h] [ebp-14h]
    char v50;             // [esp+2A9h] [ebp-13h]
    char v51;             // [esp+2AAh] [ebp-12h]
    char v52;             // [esp+2ABh] [ebp-11h]
    int v53;              // [esp+2ACh] [ebp-10h]
    int v54;              // [esp+2B0h] [ebp-Ch]
    int v55;              // [esp+2B4h] [ebp-8h]
    int v56;              // [esp+2B8h] [ebp-4h]

    v15 = 1 << sub_10027C00(a3);
    v16 = 1 << sub_10027C00(a4);
    v26 = 0;
    v31 = 0;
    v27 = 3;
    v55 = a3;
    v56 = a4;
    v28 = a3;
    v29 = a4;
    v36 = v15;
    v37 = v16;
    pow2ExponentToAdd(&v32, v15, v16);
    v33 = v32;
    v42 = 0;
    v44[3] = 0;
    v17 = sub_10027C00(a3);
    v44[16 * v42 + 8] = v17;
    v18 = sub_10027C00(a4);
    v44[16 * v42 + 9] = v18;
    v44[16 * v42 + 2] = a5;
    v44[16 * v42 + 1] = a6;
    v44[16 * v42] = a7;
    v44[16 * v42 + 10] = a12;
    v44[16 * v42 + 11] = a13;
    v44[16 * v42 + 12] = 2;
    v44[16 * v42 + 13] = 2;
    v44[16 * v42 + 14] = 4 * a3 - 2;
    v44[16 * v42 + 15] = 4 * a4 - 2;
    v43 = 1;
    v53 = a15;
    v44[129] = 0;
    v44[130] = 0;
    v52 = 0;
    v51 = 0;
    v50 = 0;
    v49 = 0;
    v48 = 0;
    v47 = 0;
    v46 = 0;
    v45 = 0;
    v25 = v44[16 * v42];
    v24 = v44[16 * v42 + 1];
    dword_10575444 = 0;
    dword_10575440 = 0;
    v30 = sub_10027B90(v24, v25, 0);
    v35 = v15 * v16 * _RTC_NumErrors();
    v34[1] = a10 != 0;
    v38 = a1;
    v39 = a2;
    v40 = a8;
    v34[2] = a11 != 0;
    v41 = a9;
    if ((dword_118AA088 & 2) == 0 || dword_100AC300) {
        dword_100A7DF4 = dword_100A7E04;
        v19 = dword_100A7E08;
    } else {
        dword_100A7DF4 = dword_100A7DFC;
        v19 = dword_100A7E00;
    }
    v20 = v29;
    dword_100A7DF8 = v19;
    if (a8 || a9 || gD3DAlwaysSquareTextures || (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0 ||
        (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) != 0 ||
        g_HWCaps.dwMaxTextureWidth && v28 > g_HWCaps.dwMaxTextureWidth ||
        g_HWCaps.dwMaxTextureHeight && v29 > g_HWCaps.dwMaxTextureHeight ||
        a14 && (v28 > dword_100A7DF4 || v29 > dword_100A7DF8)) {
        v21 = v28;
        if (a8) {
            v21 = v28 / 2;
            pow2ExponentToAdd(&v33, v28 / 2, v29);
            sub_10028200(v34, v28 / 2, v29);
            v32 = dword_10575430 + v33;
        }
        if (v41) {
            v20 = v29 / 2;
            pow2ExponentToAdd(&v33, v21, v29 / 2);
            sub_10028200(v34, v21, v29 / 2);
            v32 = dword_10575430 + v33;
        }
        if (g_HWCaps.dwMaxTextureWidth && v21 > g_HWCaps.dwMaxTextureWidth) {
            v21 = g_HWCaps.dwMaxTextureWidth;
            pow2ExponentToAdd(&v33, g_HWCaps.dwMaxTextureWidth, v20);
            sub_10028200(v34, v21, v20);
            v32 = dword_10575430 + v33;
        }
        if (g_HWCaps.dwMaxTextureHeight && v20 > g_HWCaps.dwMaxTextureHeight) {
            v20 = g_HWCaps.dwMaxTextureHeight;
            pow2ExponentToAdd(&v33, v21, g_HWCaps.dwMaxTextureHeight);
            sub_10028200(v34, v21, v20);
            v32 = dword_10575430 + v33;
        }
        if (a14) {
            if (v21 > dword_100A7DF4) {
                v21 = dword_100A7DF4;
                pow2ExponentToAdd(&v33, dword_100A7DF4, v20);
                sub_10028200(v34, v21, v20);
                v32 = dword_10575430 + v33;
            }
            if (v20 > dword_100A7DF8) {
                v20 = dword_100A7DF8;
                pow2ExponentToAdd(&v33, v21, dword_100A7DF8);
                sub_10028200(v34, v21, v20);
                v32 = dword_10575430 + v33;
            }
        }
        if (!gD3DAlwaysSquareTextures && (g_HWCaps.dpcTriCaps.dwTextureCaps & 0x20) == 0 &&
                (g_HELCaps.dpcTriCaps.dwTextureCaps & 0x20) == 0 ||
            v21 == v20) {
            goto label_HWAlwaysSquareTextures;
        }
        if (v21 < v20) {
            if (a14) {
                v21 = dword_100A7DF8;
                if (v20 >= dword_100A7DF8) {
                    v20 = dword_100A7DF8;
                    goto LABEL_46;
                }
            }
            v20 = 1 << sub_10027C00(v20);
        } else if (!a14 || (v20 = dword_100A7DF4, v21 < dword_100A7DF4)) {
            v21 = 1 << sub_10027C00(v21);
            v20 = v21;
        LABEL_46:
            pow2ExponentToAdd(&v33, v21, v20);
            sub_10028200(v34, v21, v20);
            v32 = dword_10575430 + v33;
        label_HWAlwaysSquareTextures:
            v28 = v21;
            v29 = v20;
            sub_10028200(v34, v21, v20);
            goto LABEL_48;
        }
        v21 = v20;
        goto LABEL_46;
    }
    sub_10028200(v34, v15, v16);
LABEL_48:
    v34[7] = 0;
    v34[3] = 1;
    v34[4] = 1;
    v34[5] = 0xC0000000;
    v34[6] = 0;
    v44[128] = dword_118AA088;
    v54 = v35;
    v22 = sub_10028860((#506 *)&v26);
    return TIDFromTextureAppend(&v26, (int)v22);
}
// 100280A2: conditional instruction was optimized away because of '%arg_34.4!=0'
// 100A7DFC: using guessed type int dword_100A7DFC;
// 100A7E00: using guessed type int dword_100A7E00;
// 100A7E04: using guessed type int dword_100A7E04;
// 100A7E08: using guessed type int dword_100A7E08;
// 100AC300: using guessed type int dword_100AC300;
// 10575420: using guessed type int gD3DAlwaysSquareTextures;
// 10575430: using guessed type int dword_10575430;
// 10575440: using guessed type int dword_10575440;
// 10575444: using guessed type int dword_10575444;
// 118AA088: using guessed type int dword_118AA088;
