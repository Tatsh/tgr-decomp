#include "types-win32.h"
//----- (1006E760) --------------------------------------------------------
int __cdecl sub_1006E760(int a1, float *a2) {
    int *v2;             // ebx
    int v3;              // ebp
    double v4;           // st2
    double v5;           // st1
    double v6;           // st0
    void *v7;            // ecx
    double v9;           // st7
    char v10;            // c0
    double v12;          // st7
    char v13;            // c0
    double v15;          // st7
    char v16;            // c0
    double v18;          // st7
    char v19;            // c0
    int v20;             // edi
    char v22;            // c0
    double v23;          // st7
    char v25;            // c0
    double v26;          // st7
    char v28;            // c0
    double v29;          // st7
    double v30;          // st7
    void *v31;           // ecx
    int v32;             // eax
    int v33;             // edx
    double v34;          // st7
    double v35;          // st6
    double v36;          // st5
    int v37;             // eax
    int v38;             // ecx
    double v39;          // st4
    double v40;          // st3
    double v41;          // rt1
    double v42;          // st7
    unsigned __int8 v43; // al
    float v45;           // [esp+18h] [ebp-78h]
    int v46;             // [esp+1Ch] [ebp-74h]
    int v47;             // [esp+20h] [ebp-70h]
    int v48;             // [esp+20h] [ebp-70h]
    int v49;             // [esp+20h] [ebp-70h]
    int v50;             // [esp+24h] [ebp-6Ch]
    int v51;             // [esp+28h] [ebp-68h]
    int v52;             // [esp+2Ch] [ebp-64h]
    int v53;             // [esp+30h] [ebp-60h] BYREF
    float v54;           // [esp+34h] [ebp-5Ch]
    float v55;           // [esp+38h] [ebp-58h]
    float v56;           // [esp+3Ch] [ebp-54h]
    float v57;           // [esp+40h] [ebp-50h]
    float v58;           // [esp+44h] [ebp-4Ch]
    float v59;           // [esp+48h] [ebp-48h]
    float v60;           // [esp+4Ch] [ebp-44h]
    float v61;           // [esp+50h] [ebp-40h]
    int v62;             // [esp+54h] [ebp-3Ch] BYREF
    float v63;           // [esp+58h] [ebp-38h]
    float v64;           // [esp+5Ch] [ebp-34h]
    float v65;           // [esp+64h] [ebp-2Ch]
    float v66;           // [esp+68h] [ebp-28h]
    int v67;             // [esp+6Ch] [ebp-24h] BYREF
    float v68;           // [esp+70h] [ebp-20h]
    float v69;           // [esp+74h] [ebp-1Ch]
    float v70[3];        // [esp+78h] [ebp-18h] BYREF
    float v71[3];        // [esp+84h] [ebp-Ch] BYREF

    v2 = (int *)dword_11754E38;
    v52 = 0;
    v46 = 0;
    v51 = dword_11754E38;
    if (dword_11754E38) {
        while (1) {
            v3 = *v2;
            sub_100747C0((float *)&v67, a2, *(float **)(*v2 + 16));
            sub_100747C0(v70, a2, *(float **)(v3 + 20));
            sub_100747C0(v71, a2, *(float **)(v3 + 24));
            v4 = v71[0] - *(float *)&v67;
            v59 = v4;
            v5 = v71[1] - v68;
            v60 = v5;
            v6 = v71[2] - v69;
            v61 = v6;
            v56 = v70[0] - *(float *)&v67;
            v57 = v70[1] - v68;
            v58 = v70[2] - v69;
            *(float *)&v53 = v6 * v57 - v5 * v58;
            v54 = v4 * v58 - v61 * v56;
            v55 = v60 * v56 - v59 * v57;
            if (sub_1006DAF0((float *)&v67, (float *)&v53))
                break;
        LABEL_34:
            v2 = (int *)v2[1];
            v51 = (int)v2;
            if (!v2)
                goto LABEL_35;
        }
        sub_10074250((float *)&v53);
        v7 = (void *)++v46;
        dword_1175549C = 0;
        v45 = *(float *)&v53 * *(float *)&v67 + v54 * v68 + v55 * v69;
        if (g_GameMode == 4) {
            v9 = *(float *)&v53;
            if (v10)
                v9 = -v9;
            if (v9 > 0.99900001)
                goto LABEL_40;
            v12 = v54;
            if (v13)
                v12 = -v12;
            if (v12 > 0.99900001)
                goto LABEL_40;
            v15 = v55;
            if (v16)
                v15 = -v15;
            if (v15 > 0.99900001) {
            LABEL_40:
                v20 = 1;
                dword_1175549C = 1;
                debugPrint(v7);
                v50 = 1;
                goto LABEL_18;
            }
            v18 = v45;
            if (v19)
                v18 = -v18;
            if (v18 < 0.5) {
                debugPrint(v7);
                v50 = 0;
                dword_1175549C = 2;
            }
        }
        v20 = 1;
    LABEL_18:
        debugPrint(v7);
        v58 = v45 * v55;
        if (v22)
            v47 = -1;
        else
            v47 = 1;
        v23 = (double)v47;
        v48 = -1;
        *(float *)&v62 = v23 * 0.5;
        if (!v25)
            v48 = 1;
        v26 = (double)v48;
        v49 = -1;
        v63 = v26 * 0.5;
        if (!v28)
            v49 = 1;
        *(float *)&dword_11755490 = *(float *)(a1 + 476) * *(float *)&v62;
        v29 = *(float *)(a1 + 480) * v63;
        v64 = (double)v49 * 0.5;
        *(float *)&dword_11755494 = v29;
        v30 = *(float *)(a1 + 484) * v64 + *(float *)(a1 + 488);
        dword_11754E3C = v3;
        *(float *)&dword_11755498 = v30;
        sub_1006E4C0(a1, (int)&v53, v45, (int)&v62, (int)&v67);
        if (*(float *)(a1 + 228) > 0.5)
            v20 = 0;
        if (v20)
            debugPrint(v31);
        if (dword_1175549C == 1)
            v32 = sub_1006C9D0(a1, (float *)dword_11754E3C, v20, v50);
        else
            v32 = sub_1006CCD0(a1, (int)&dword_11755490, dword_11754E3C, v20, 0.0);
        if (v32) {
            v33 = *(_DWORD *)(a1 + 300);
            v34 = *(float *)(a1 + 352);
            v35 = *(float *)(a1 + 348);
            v36 = ((v35 - *(float *)(a1 + 280)) * *(float *)(v3 + 4) +
                   (v34 - *(float *)(a1 + 284)) * *(float *)(v3 + 8) +
                   (*(float *)(a1 + 344) - *(float *)(a1 + 276)) * *(float *)v3) *
                  1.1;
            v37 = *(_DWORD *)(a1 + 304);
            v38 = *(_DWORD *)(a1 + 308);
            v52 = 1;
            v39 = v36 * *(float *)(v3 + 8);
            v40 = v36 * *(float *)v3;
            v65 = v36 * *(float *)(v3 + 4);
            v66 = v39;
            v41 = v34 - v66;
            v42 = *(float *)(a1 + 344) - v40;
            *(float *)(a1 + 348) = v35 - v65;
            *(float *)(a1 + 352) = v41;
            *(float *)(a1 + 344) = v42;
            *(_DWORD *)(a1 + 368) = v33;
            *(_DWORD *)(a1 + 372) = v37;
            *(_DWORD *)(a1 + 376) = v38;
            sub_100742D0((float *)(a1 + 344));
            sub_10074450((float *)(a1 + 188), (float *)(a1 + 344));
            v2 = (int *)v51;
        }
        goto LABEL_34;
    }
LABEL_35:
    if ((_WORD)v46) {
        *(_BYTE *)(a1 + 512) = 0;
    } else {
        v43 = *(_BYTE *)(a1 + 512);
        if (v43 < 0x28u) {
            *(_BYTE *)(a1 + 512) = v43 + 1;
            return v52;
        }
    }
    return v52;
}
// 1006E902: variable 'v10' is possibly undefined
// 1006E92A: variable 'v13' is possibly undefined
// 1006E952: variable 'v16' is possibly undefined
// 1006E97A: variable 'v19' is possibly undefined
// 1006E9B0: variable 'v7' is possibly undefined
// 1006E9E3: variable 'v22' is possibly undefined
// 1006EA12: variable 'v25' is possibly undefined
// 1006EA39: variable 'v28' is possibly undefined
// 1006EADC: variable 'v31' is possibly undefined
// 1006EB15: variable 'v50' is possibly undefined
// 100AA010: using guessed type int g_GameMode;
// 11754E38: using guessed type int dword_11754E38;
// 11755490: using guessed type int dword_11755490;
// 11755494: using guessed type int dword_11755494;
// 11755498: using guessed type int dword_11755498;
// 1175549C: using guessed type int dword_1175549C;
