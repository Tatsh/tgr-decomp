#include "../types-win32.h"
//----- (10024BF0) --------------------------------------------------------
int __cdecl sub_10024BF0(_DWORD *a1, _DWORD *a2, _DWORD *a3) {
    _DWORD *v3;           // ebx
    _BYTE *v4;            // edi
    int v5;               // esi
    int v6;               // ecx
    _DWORD *v7;           // eax
    int v8;               // ecx
    int v9;               // eax
    int v10;              // edx
    int v11;              // ebp
    int v12;              // ecx
    int v13;              // edx
    _DWORD *v14;          // edx
    int v15;              // eax
    int v16;              // eax
    int v17;              // ecx
    char *v18;            // eax
    int v19;              // esi
    _DWORD *v20;          // ebp
    int v21;              // eax
    char *v22;            // eax
    unsigned __int8 *v23; // eax
    _DWORD *v25;          // eax
    int v26;              // ecx
    _DWORD *v27;          // eax
    int v28;              // eax
    int v29;              // ecx
    int v30;              // eax
    int v31;              // edx
    char *v32;            // eax
    int v33;              // esi
    _DWORD *v34;          // ebp
    int v35;              // eax
    char *v36;            // eax
    unsigned __int8 *v37; // eax
    _DWORD *v38;          // eax
    int v39;              // ecx
    unsigned __int8 *v40; // eax
    unsigned int v41;     // edx
    int v42;              // [esp-10h] [ebp-2Ch]
    int v43;              // [esp-Ch] [ebp-28h]
    int v44;              // [esp-Ch] [ebp-28h]
    int v45;              // [esp-8h] [ebp-24h]
    int v46;              // [esp-4h] [ebp-20h]
    int v47;              // [esp+10h] [ebp-Ch] BYREF
    int v48;              // [esp+14h] [ebp-8h] BYREF
    int v49;              // [esp+18h] [ebp-4h] BYREF
    int v50;              // [esp+20h] [ebp+4h]
    int v51;              // [esp+20h] [ebp+4h]

    v3 = a3;
    a3[155] = 0;
    if (dword_118AA088 != 2)
        return 0;
    v4 = (_BYTE *)sub_10060F70(dword_10AA3444, ++dword_10AA3460, 0);
    if (!v4)
        return 0;
    sub_10060FB0(dword_10AA3444, dword_10AA3460, &v49, &v48, &v47, (int *)&a3);
    v5 = v49;
    if (v49) {
        v7 = a3;
        v6 = v48;
    } else {
        v6 = v48;
        if (v48) {
            v7 = a3;
        } else {
            v7 = a3;
            if (!v47 && !a3) {
                v8 = v3[169];
                v9 = v3[170];
                v5 = 0;
                v47 = 0;
                v6 = 2 * v8;
                v7 = (_DWORD *)(2 * v9);
                v49 = 0;
                v48 = v6;
                a3 = v7;
            }
        }
    }
    v10 = v3[169];
    if (v10 == v3[2]) {
        v11 = v3[170];
        if (v11 == v3[3] && dword_100B8C90 <= 0) {
            if (sub_10061480((int)v4, v5, v6, v47, (int)v7, (int)byte_11829870, 2 * v10, 2 * v11)) {
                v12 = 2 * v3[3];
                v45 = 2 * v3[2];
                v13 = 4 * v3[16];
                v3[2] = v45;
                v3[3] = v12;
                v3[16] = v13;
                pow2ExponentToAdd(v3 + 7, v45, v12);
                v3[6] = v3[7];
                *a1 *= 2;
                *a2 *= 2;
                v14 = a3;
                v3[155] = 1;
                v3[156] = dword_10AA3444;
                v15 = v47;
                v3[157] = dword_10AA3460;
                v43 = v48;
                v42 = v49;
                v3[158] = 0;
                v16 = sub_100615B0(v4, v42, v43, v15, (int)v14);
                v17 = v3[15];
                v3[159] = v16;
                if (v17)
                    v18 = sub_10009660(byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
                else
                    v18 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
                v3[164] = v18;
                if (sub_10061000() >= 0) {
                    v19 = 3;
                    v20 = v3 + 163;
                    v50 = 3;
                    do {
                        v21 = sub_10060F70(dword_10AA3444, dword_10AA3460, v19);
                        if (v21) {
                            if (sub_10061480(v21,
                                             v49,
                                             v48,
                                             v47,
                                             (int)a3,
                                             (int)byte_11829870,
                                             2 * v3[169],
                                             2 * v3[170])) {
                                if (v3[15])
                                    v22 = sub_10009660(
                                        byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
                                else
                                    v22 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
                                v3[164] = v22;
                            }
                            v23 = (unsigned __int8 *)malloc(v3[164]);
                            *v20 = v23;
                            qmemcpy(v23, byte_11829870, v3[164]);
                            v19 = v50;
                        } else {
                            *v20 = 0;
                        }
                        --v19;
                        --v20;
                        v50 = v19;
                    } while (v19 >= 0);
                    return 1;
                }
                v25 = v3 + 163;
                v26 = 3;
                do {
                    *v25-- = 0;
                    --v26;
                } while (v26);
                goto LABEL_50;
            }
            return 1;
        }
    }
    if (!sub_10061480((int)v4, v5, v6, v47, (int)v7, (int)&unk_104D51D0, 2 * v10, 2 * v3[170]))
        return 1;
    v27 = a3;
    v3[155] = 1;
    v46 = (int)v27;
    v28 = v49;
    v3[156] = dword_10AA3444;
    v29 = v47;
    v3[157] = dword_10AA3460;
    v44 = v48;
    v3[158] = 0;
    v30 = sub_100615B0(v4, v28, v44, v29, v46);
    v31 = v3[170];
    v3[159] = v30;
    sub_10025350(
        (int)byte_11829870, v3[2], v3[3], COERCE_FLOAT(&unk_104D51D0), 2 * v3[169], 2 * v31);
    if (v3[15])
        v32 = sub_10009660(byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
    else
        v32 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
    v3[164] = v32;
    if (sub_10061000() < 0) {
        v38 = v3 + 163;
        v39 = 3;
        do {
            *v38-- = 0;
            --v39;
        } while (v39);
    LABEL_50:
        v40 = (unsigned __int8 *)malloc(v3[164]);
        v41 = v3[164];
        v3[160] = v40;
        qmemcpy(v40, byte_11829870, v41);
        return 1;
    }
    v33 = 3;
    v34 = v3 + 163;
    v51 = 3;
    do {
        v35 = sub_10060F70(dword_10AA3444, dword_10AA3460, v33);
        if (v35) {
            if (sub_10061480(
                    v35, v49, v48, v47, (int)a3, (int)&unk_104D51D0, 2 * v3[169], 2 * v3[170])) {
                sub_10025350((int)byte_11829870,
                             v3[2],
                             v3[3],
                             COERCE_FLOAT(&unk_104D51D0),
                             2 * v3[169],
                             2 * v3[170]);
                if (v3[15])
                    v36 = sub_10009660(byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
                else
                    v36 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
                v3[164] = v36;
            }
            v37 = (unsigned __int8 *)malloc(v3[164]);
            *v34 = v37;
            qmemcpy(v37, byte_11829870, v3[164]);
            v33 = v51;
        } else {
            *v34 = 0;
        }
        --v33;
        --v34;
        v51 = v33;
    } while (v33 >= 0);
    return 1;
}
// 100B8C90: using guessed type int dword_100B8C90;
// 10AA3444: using guessed type int dword_10AA3444;
// 10AA3460: using guessed type int dword_10AA3460;
// 118AA088: using guessed type int dword_118AA088;
