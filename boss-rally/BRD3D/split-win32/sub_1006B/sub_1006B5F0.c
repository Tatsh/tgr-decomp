#include "types-win32.h"
//----- (1006B5F0) --------------------------------------------------------
void __cdecl sub_1006B5F0(int a1, float a2, int a3, int a4, int a5, int a6) {
    int v6;               // eax
    int v7;               // eax
    int v8;               // eax
    int v9;               // eax
    float *v10;           // edx
    double v12;           // st7
    char v13;             // c0
    double v14;           // st6
    float *v15;           // ecx
    double v16;           // st7
    double v18;           // st6
    char v19;             // c0
    double v20;           // st5
    double v22;           // st7
    char v23;             // c0
    double v24;           // st7
    double v26;           // st7
    char v27;             // c0
    double v28;           // st7
    int v29;              // ecx
    int v30;              // edi
    int v31;              // ebp
    int v32;              // edx
    int v33;              // eax
    double v35;           // st7
    char v36;             // c0
    double v38;           // st6
    char v39;             // c0
    double v40;           // rt2
    double v41;           // st6
    double v42;           // st7
    unsigned __int8 v44;  // c0
    unsigned __int8 v45;  // c3
    double v46;           // st6
    double v47;           // st6
    double v48;           // st6
    double v49;           // st7
    double v50;           // st6
    int v51;              // ecx
    double v52;           // st5
    int v53;              // eax
    int v54;              // eax
    int v55;              // edx
    int v56;              // eax
    float v57;            // ecx
    double v59;           // st5
    char v60;             // c3
    double v61;           // st7
    long double v62;      // st7
    long double v63;      // st7
    double v64;           // st6
    double v66;           // st6
    char v67;             // c0
    double v68;           // st7
    double v69;           // st7
    double v71;           // st7
    char v72;             // c0
    double v73;           // st7
    double v74;           // st6
    int v75;              // eax
    long double v76;      // st7
    int v77;              // eax
    double v78;           // st6
    double v79;           // st5
    double v80;           // st4
    double v81;           // st5
    char v83;             // c0
    long double v84;      // st7
    long double v86;      // st6
    double v87;           // st7
    double v88;           // st6
    char v89;             // c0
    double v90;           // st7
    int v91;              // eax
    int v92;              // edx
    int v93;              // eax
    float v94;            // ecx
    double v96;           // st7
    char v97;             // c3
    long double v98;      // st7
    long double v99;      // st7
    double v100;          // st6
    double v101;          // st7
    int v102;             // eax
    int v103;             // ecx
    double v104;          // st7
    double v105;          // st7
    double v107;          // st6
    char v108;            // c0
    double v109;          // st7
    double v110;          // st7
    double v111;          // st6
    double v113;          // st7
    unsigned __int8 v114; // c0
    unsigned __int8 v115; // c3
    float v116;           // [esp+0h] [ebp-A0h]
    float v117;           // [esp+0h] [ebp-A0h]
    float v118;           // [esp+0h] [ebp-A0h]
    float v119;           // [esp+0h] [ebp-A0h]
    float v120;           // [esp+14h] [ebp-8Ch]
    float v121;           // [esp+14h] [ebp-8Ch]
    float v122;           // [esp+14h] [ebp-8Ch]
    float v123;           // [esp+14h] [ebp-8Ch]
    float v124;           // [esp+14h] [ebp-8Ch]
    float v125;           // [esp+14h] [ebp-8Ch]
    float v126;           // [esp+18h] [ebp-88h]
    float v127;           // [esp+1Ch] [ebp-84h]
    unsigned __int8 v128; // [esp+20h] [ebp-80h]
    float v129;           // [esp+20h] [ebp-80h]
    float v130;           // [esp+20h] [ebp-80h]
    float v131;           // [esp+24h] [ebp-7Ch]
    float v132;           // [esp+28h] [ebp-78h] BYREF
    float v133;           // [esp+2Ch] [ebp-74h]
    float v134;           // [esp+34h] [ebp-6Ch]
    float v135;           // [esp+38h] [ebp-68h] BYREF
    float v136;           // [esp+3Ch] [ebp-64h]
    float v137;           // [esp+40h] [ebp-60h]
    float v138;           // [esp+44h] [ebp-5Ch]
    float v139;           // [esp+48h] [ebp-58h]
    float v140;           // [esp+4Ch] [ebp-54h]
    float v141;           // [esp+50h] [ebp-50h] BYREF
    float v142;           // [esp+54h] [ebp-4Ch]
    int v143;             // [esp+58h] [ebp-48h]
    float v144;           // [esp+5Ch] [ebp-44h]
    int v145;             // [esp+60h] [ebp-40h]
    float v146;           // [esp+64h] [ebp-3Ch]
    float v147;           // [esp+68h] [ebp-38h]
    float v148;           // [esp+6Ch] [ebp-34h]
    float v149;           // [esp+70h] [ebp-30h]
    float v150;           // [esp+74h] [ebp-2Ch]
    int v151[3];          // [esp+78h] [ebp-28h] BYREF
    int v152;             // [esp+84h] [ebp-1Ch]
    float v153[3];        // [esp+88h] [ebp-18h] BYREF
    float v154[3];        // [esp+94h] [ebp-Ch] BYREF

    v6 = *(_DWORD *)(a1 + 4);
    v144 = 0.0;
    v145 = 0;
    if (!*(_DWORD *)(v6 + 412))
        *(_DWORD *)(v6 + 436) = 0;
    v7 = *(_DWORD *)(a1 + 8);
    if (!*(_DWORD *)(v7 + 412))
        *(_DWORD *)(v7 + 436) = 0;
    v8 = *(_DWORD *)(a1 + 12);
    if (!*(_DWORD *)(v8 + 412))
        *(_DWORD *)(v8 + 436) = 0;
    v9 = *(_DWORD *)(a1 + 16);
    if (!*(_DWORD *)(v9 + 412))
        *(_DWORD *)(v9 + 436) = 0;
    v10 = *(float **)(a1 + 12);
    v12 = v10[116];
    if (v13)
        v12 = -v12;
    if (v10[113] == 0.0) {
        v14 = 0.0;
    } else if (v10[113] <= 0.0) {
        v14 = -1.0;
    } else {
        v14 = 1.0;
    }
    v15 = *(float **)(a1 + 4);
    v16 = v12 * v14 * -2.0 / v10[114];
    v18 = v15[116];
    if (v19)
        v18 = -v18;
    if (v15[113] == 0.0) {
        v20 = 0.0;
    } else if (v15[113] <= 0.0) {
        v20 = -1.0;
    } else {
        v20 = 1.0;
    }
    v127 = *(float *)(a1 + 44) * 0.25;
    v126 = v16 / v127 * a2 * a2;
    v120 = v20 * v18 * -2.0 / v15[114] / v127 * a2 * a2;
    v22 = v126;
    if (v23)
        v22 = -v22;
    if (v22 > 1.0) {
        if (v126 == 0.0) {
            v24 = 0.0;
        } else if (v126 <= 0.0) {
            v24 = -1.0;
        } else {
            v24 = 1.0;
        }
        v126 = v24 * 1.5;
    }
    v26 = v120;
    if (v27)
        v26 = -v26;
    if (v26 > 1.0) {
        if (v120 == 0.0) {
            v28 = 0.0;
        } else if (v120 <= 0.0) {
            v28 = -1.0;
        } else {
            v28 = 1.0;
        }
        v120 = v28 * 1.5;
    }
    v143 = 0;
    v142 = 0.0;
    v141 = v15[30];
    sub_1006B510(v153, (float *)a1, (int *)&v141);
    sub_10074720(&v132, (float *)(a1 + 188), v153);
    v29 = *(_DWORD *)(a1 + 4);
    v30 = *(_DWORD *)(a1 + 12);
    v31 = *(_DWORD *)(a1 + 16);
    v128 = *(_BYTE *)(v29 + 416);
    v32 = *(_DWORD *)(a1 + 8);
    LOBYTE(v146) = *(_BYTE *)(v32 + 416);
    LOBYTE(v152) = *(_BYTE *)(v30 + 416);
    LOBYTE(v147) = *(_BYTE *)(v31 + 416);
    v33 = dword_104BBE08 - 1;
    if ((__int16)(dword_104BBE08 - 1) > 2 || (v33 & 0x8000u) != 0)
        v33 = 0;
    LODWORD(v134) = 8 * v33;
    *(_BYTE *)(a1 + 521) = 0;
    if ((*(_DWORD *)(v29 + 436) || *(_DWORD *)(v32 + 436)) &&
        (*(_DWORD *)(v30 + 436) || *(_DWORD *)(v31 + 436))) {
        v35 = v133;
        if (v36)
            v35 = -v35;
        v38 = *(float *)a3;
        if (v39)
            v38 = -v38;
        v40 = v38;
        v41 = v35 * *(float *)(a1 + 44);
        v145 = 1;
        v42 = v41 / a2 + v40;
        if (v44 | v45) {
            v48 = v120;
            if (v120 < 0.0)
                v48 = -v48;
            v47 = (double)(v48 > 0.0001) * -100000.0;
        } else {
            v46 = v120;
            if (v120 < 0.0)
                v46 = -v46;
            v47 = (double)(v46 > 0.0001) * -10000.0;
        }
        v49 = v42 - v47;
        if (*(_BYTE *)a5)
            v50 = 5600.0;
        else
            v50 = 8000.0;
        v51 = SLOWORD(v134);
        v52 = v49;
        v53 = LOBYTE(v146);
        *(_BYTE *)a5 = 0;
        v54 = (v128 + v53 + 1) >> 1;
        v55 = v54 + v51 + 24 * *(unsigned __int8 *)(a1 + 509);
        v56 = v51 + v54;
        v57 = *(float *)&dword_100B5970[v56];
        v146 = *(float *)(dword_117554A8 + 4 * v55);
        v131 = *(float *)(dword_117554C0 + v56 * 4);
        if (v49 > v131)
            v52 = v131;
        if (v52 < v57)
            v52 = v57;
        v59 = v57 / v52 * v146 * 20.0;
        v129 = v59;
        if (v60) {
            v59 = v59 * 1.5;
            v129 = v59;
        }
        if (v59 < 0.0)
            v59 = -v59;
        if (v59 > 1.0)
            v129 = 1.0;
        if (v49 >= v50) {
            v116 = *(float *)(a1 + 132) * *(float *)(a1 + 132) +
                   *(float *)(a1 + 136) * *(float *)(a1 + 136) +
                   *(float *)(a1 + 140) * *(float *)(a1 + 140);
            v62 = sqrt_(v116);
            if (v62 < 27.0) {
                v63 = (27.0 - v62) * 0.0037037039;
                if (v129 < v63)
                    v129 = v63;
            }
            v64 = v133 - v129 * v133;
            *(_BYTE *)a5 = 1;
            v133 = v64;
            v61 = v64;
            v144 = v129 * v64;
        } else {
            v61 = 0.0;
            v144 = 0.0;
            v133 = 0.0;
        }
        v66 = v132;
        if (v67)
            v66 = -v66;
        if (v66 <= 1.0) {
            if (v61 < 0.0)
                v61 = -v61;
            if (v61 <= 1.0)
                *(_BYTE *)(a1 + 521) = 0;
            else
                *(_BYTE *)(a1 + 521) = 0x80;
        } else {
            v68 = v61 / v132;
            if (v68 < 0.0)
                v68 = -v68;
            if (v68 > 0.25)
                *(_BYTE *)(a1 + 521) = 0x80;
        }
        v69 = v132 - v120;
        v121 = v132;
        v132 = v69;
        v71 = v132;
        if (v72)
            v71 = -v71;
        if (v71 > 0.0000099999997) {
            if (v132 == 0.0)
                v73 = 0.0;
            else
                v73 = v132 <= 0.0 ? -1.0 : 1.0;
            if (v121 == 0.0)
                v74 = 0.0;
            else
                v74 = v121 <= 0.0 ? -1.0 : 1.0;
            if (v73 != v74)
                v132 = 0.0;
        }
    } else {
        *(_BYTE *)a5 = 0;
    }
    v141 = *(float *)(*(_DWORD *)(a1 + 12) + 120);
    sub_1006B510(v154, (float *)a1, (int *)&v141);
    sub_10074720(&v135, (float *)(a1 + 188), v154);
    v75 = *(_DWORD *)(a1 + 12);
    if ((*(_DWORD *)(v75 + 436) || *(_DWORD *)(*(_DWORD *)(a1 + 16) + 436)) &&
        (*(_DWORD *)(*(_DWORD *)(a1 + 4) + 436) || *(_DWORD *)(*(_DWORD *)(a1 + 8) + 436))) {
        v117 = *(float *)(v75 + 448);
        v145 = 1;
        v76 = cos_(v117);
        v77 = *(_DWORD *)(a1 + 12);
        v141 = v76;
        v142 = sin_(*(float *)(v77 + 448));
        v140 = v137;
        v138 = v135;
        v78 = v135 * v141 + v136 * v142;
        v122 = v78;
        v79 = v135;
        v139 = v136;
        v137 = 0.0;
        v135 = v78 * v141;
        v80 = v79;
        v81 = v136;
        v136 = v122 * v142;
        v143 = 0;
        v148 = v80 - v135;
        v149 = v81 - v136;
        v150 = v140 - 0.0;
        if (v83)
            v123 = -*(float *)a4;
        else
            v123 = *(float *)a4;
        v118 = v148 * v148 + v149 * v149 + v150 * v150;
        v84 = sqrt_(v118);
        v86 = v84 * *(float *)(a1 + 44) / a2 + v123;
        v87 = 8000.0;
        v124 = v86;
        v88 = v126;
        if (v89)
            v88 = -v88;
        v125 = v124 - (double)(v88 > 0.0001) * -10000.0;
        if (*(_BYTE *)a6)
            v87 = 5600.0;
        *(_BYTE *)a6 = 0;
        if (v125 <= v87) {
            *(_BYTE *)a6 = 0;
        } else {
            v90 = v125;
            v91 = ((unsigned __int8)v152 + LOBYTE(v147) + 1) >> 1;
            v92 = v91 + 24 * *(unsigned __int8 *)(a1 + 509);
            v93 = SLOWORD(v134) + v91;
            v94 = *(float *)&dword_100B5970[v93];
            v147 = *(float *)(dword_117554A8 + 4 * (SLOWORD(v134) + v92));
            v134 = *(float *)(dword_117554C0 + v93 * 4);
            if (v125 > (double)v134)
                v90 = v134;
            if (v90 < v94)
                v90 = v94;
            v96 = v94 / v90 * v147 * 20.0;
            v130 = v96;
            if (v97) {
                v96 = v96 * 1.5;
                v130 = v96;
            }
            if (v96 < 0.0)
                v96 = -v96;
            if (v96 > 1.0)
                v130 = 1.0;
            v119 = *(float *)(a1 + 132) * *(float *)(a1 + 132) +
                   *(float *)(a1 + 136) * *(float *)(a1 + 136) +
                   *(float *)(a1 + 140) * *(float *)(a1 + 140);
            v98 = sqrt_(v119);
            if (v98 < 27.0) {
                v99 = (27.0 - v98) * 0.0037037039;
                if (v130 < v99)
                    v130 = v99;
            }
            v100 = v139 - v149 * v130;
            v101 = v140 - v150 * v130;
            v135 = v138 - v148 * v130;
            *(_BYTE *)a6 = 1;
            v136 = v100;
            v137 = v101;
        }
    }
    if (v145) {
        v102 = *(_DWORD *)(a1 + 4);
        v103 = *(_DWORD *)(a1 + 12);
        v138 = (v132 + v135) * 0.5;
        v104 = (v133 - v136) / (*(float *)(v102 + 120) - *(float *)(v103 + 120));
        v140 = v104;
        v139 = v133 - v104 * *(float *)(v102 + 120);
        sub_10074720((float *)v151, (float *)(a1 + 188), (float *)(a1 + 160));
        *(float *)&v151[2] = v140;
        sub_10074770((float *)(a1 + 160), a1 + 188, (float *)v151);
        sub_10074720((float *)v151, (float *)(a1 + 188), (float *)(a1 + 132));
        *(float *)v151 = v138;
        *(float *)&v151[1] = v139;
        sub_10074770((float *)(a1 + 132), a1 + 188, (float *)v151);
    }
    v105 = v144;
    v107 = v144;
    if (v108)
        v107 = -v107;
    if (v107 > 0.5) {
        if (v105 == 0.0) {
            v109 = 0.0;
        } else if (v105 <= 0.0) {
            v109 = -1.0;
        } else {
            v109 = 1.0;
        }
        v105 = v109 * 0.5;
    }
    v110 = (v105 + v105) * -4.0;
    v111 = *(float *)(a1 + 468) - v110;
    if (v111 < 0.0)
        v111 = -v111;
    if (v111 >= 0.26666668) {
        v113 = *(float *)(a1 + 468);
        if (!(v114 | v115)) {
            *(float *)(a1 + 468) = v113 - -0.26666668;
            return;
        }
        v110 = v113 - 0.26666668;
    }
    *(float *)(a1 + 468) = v110;
}
// 1006B66D: variable 'v13' is possibly undefined
// 1006B6D9: variable 'v19' is possibly undefined
// 1006B789: variable 'v23' is possibly undefined
// 1006B7EF: variable 'v27' is possibly undefined
// 1006B92D: variable 'v36' is possibly undefined
// 1006B947: variable 'v39' is possibly undefined
// 1006B998: variable 'v44' is possibly undefined
// 1006B998: variable 'v45' is possibly undefined
// 1006BABE: variable 'v60' is possibly undefined
// 1006BBBC: variable 'v67' is possibly undefined
// 1006BC45: variable 'v72' is possibly undefined
// 1006BE21: variable 'v83' is possibly undefined
// 1006BE90: variable 'v89' is possibly undefined
// 1006BF94: variable 'v97' is possibly undefined
// 1006C134: variable 'v108' is possibly undefined
// 1006C1BB: variable 'v114' is possibly undefined
// 1006C1BB: variable 'v115' is possibly undefined
// 100B5970: using guessed type int dword_100B5970[];
// 104BBE08: using guessed type int dword_104BBE08;
// 117554A8: using guessed type int dword_117554A8;
// 117554C0: using guessed type int dword_117554C0;
