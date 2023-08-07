#include "../../types-n64.h"
//----- (80259D14) --------------------------------------------------------
void __fastcall sub_80259D14(int a1, float a2, float *a3, float *a4, _BYTE *a5, _BYTE *a6) {
    int v6;               // $a1
    int v7;               // $v1
    int v8;               // $v1
    int v9;               // $v1
    float *v10;           // $v1
    float *v11;           // $a1
    float v12;            // $f0
    float v13;            // $f12
    float v14;            // $f0
    double v15;           // $f0
    float v16;            // $f8
    float v17;            // $f2
    float v18;            // $f12
    float v19;            // $f0
    double v20;           // $f0
    float v21;            // $f4
    float v22;            // $f2
    float v23;            // $f10
    float v24;            // $f6
    float v25;            // $f18
    float v26;            // $f0
    float v27;            // $f12
    float v28;            // $f4
    double v29;           // $f6
    double v30;           // $f0
    float v31;            // $f8
    float v32;            // $f12
    float v33;            // $f6
    double v34;           // $f8
    double v35;           // $f0
    int v36;              // $a3
    int v37;              // $a1
    int v38;              // $a0
    int v39;              // $a2
    float v40;            // $f18
    _BYTE *v41;           // $v1
    float v42;            // $f16
    float v43;            // $f2
    float v44;            // $f0
    int v45;              // $t4
    float v46;            // $f12
    float v47;            // $f16
    float v48;            // $f12
    float v49;            // $f12
    float v50;            // $f8
    float v51;            // $f16
    float v52;            // $f12
    float v53;            // $f4
    float v54;            // $f12
    float v55;            // $f14
    float v56;            // $f2
    float v57;            // $f0
    float v58;            // $f6
    float v59;            // $f2
    float v60;            // $f0
    float v61;            // $f12
    float v62;            // $f14
    float v63;            // $f0
    float v64;            // $f2
    float v65;            // $f8
    float v66;            // $f6
    float v67;            // $f2
    float v68;            // $f12
    float v69;            // $f0
    float v70;            // $f12
    float v71;            // $f14
    float v72;            // $f12
    float v73;            // $f2
    float v74;            // $f12
    int v75;              // $t9
    double v76;           // $f12
    bool v77;             // $fcc0
    double v78;           // $f0
    int v79;              // $t0
    int v80;              // $v1
    int v81;              // $t3
    int v82;              // $t8
    float v83;            // $f0
    float v84;            // $f8
    float v85;            // $f2
    float v86;            // $f6
    float v87;            // $f0
    float v88;            // $f2
    float v89;            // $f12
    float v90;            // $f2
    float v91;            // $f14
    float v92;            // $f12
    float v93;            // $f4
    float v94;            // $f14
    int v95;              // $t5
    float v96;            // $f12
    float v97;            // $f16
    float v98;            // $f2
    float v99;            // $f6
    float v100;           // $f2
    float v101;           // $f12
    float v102;           // $f0
    float v103;           // $f2
    float v104;           // $f12
    float v105;           // $f12
    float v106;           // $f16
    double v107;          // $f8
    double v108;          // $f0
    float v109;           // $f0
    float v110;           // $f16
    float v111;           // $f12
    float *v112;          // [sp+24h] [-134h]
    float *v113;          // [sp+2Ch] [-12Ch]
    float v114;           // [sp+7Ch] [-DCh]
    float v115;           // [sp+80h] [-D8h]
    float v116;           // [sp+84h] [-D4h]
    float v117;           // [sp+88h] [-D0h]
    float v118;           // [sp+8Ch] [-CCh]
    float v119;           // [sp+90h] [-C8h]
    float v120;           // [sp+B8h] [-A0h]
    float v121;           // [sp+C4h] [-94h]
    float v122;           // [sp+C4h] [-94h]
    float v123;           // [sp+C8h] [-90h]
    float v124;           // [sp+CCh] [-8Ch]
    unsigned __int8 v125; // [sp+D4h] [-84h]
    unsigned __int8 v126; // [sp+D5h] [-83h]
    int v127;             // [sp+D8h] [-80h]
    float v128;           // [sp+DCh] [-7Ch]
    float v129;           // [sp+E0h] [-78h]
    float v130;           // [sp+E4h] [-74h]
    float v131;           // [sp+E8h] [-70h]
    float v132[3];        // [sp+110h] [-48h] BYREF
    float v133;           // [sp+11Ch] [-3Ch] BYREF
    float v134;           // [sp+120h] [-38h]
    float v135;           // [sp+128h] [-30h] BYREF
    float v136;           // [sp+12Ch] [-2Ch]
    float v137;           // [sp+130h] [-28h]
    float v138;           // [sp+134h] [-24h] BYREF
    float v139;           // [sp+138h] [-20h]
    float v140;           // [sp+13Ch] [-1Ch]
    float v141[3];        // [sp+140h] [-18h] BYREF
    float v142[3];        // [sp+14Ch] [-Ch] BYREF

    v127 = 0;
    v128 = 0.0;
    v6 = *(_DWORD *)(a1 + 4);
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
    v11 = *(float **)(a1 + 4);
    v12 = v10[116];
    if (v12 < 0.0)
        v13 = -v12;
    else
        v13 = v12;
    v14 = v10[113];
    if (0.0 == v14) {
        v15 = 0.0;
    } else if (v14 > 0.0) {
        v15 = 1.0;
    } else {
        v15 = -1.0;
    }
    v16 = v15 * (float)-v13 * 2.0;
    v17 = v11[116];
    if (v17 < 0.0)
        v18 = -v17;
    else
        v18 = v17;
    v19 = v11[113];
    if (0.0 == v19) {
        v20 = 0.0;
    } else if (v19 > 0.0) {
        v20 = 1.0;
    } else {
        v20 = -1.0;
    }
    v21 = v20 * (float)-v18 * 2.0;
    v22 = *(float *)(a1 + 44) / 4.0;
    v23 = a2;
    v24 = (float)((float)(v16 / v10[114]) / v22) * (float)(v23 * v23);
    v124 = v24;
    v25 = (float)((float)(v21 / v11[114]) / v22) * (float)(v23 * v23);
    v26 = v24;
    if (v24 < 0.0)
        v27 = -v24;
    else
        v27 = v24;
    if (v27 > 1.0) {
        *((float *)&v29 + 1) = 0.0;
        if (v26 == 0.0) {
            v30 = 0.0;
        } else if (v26 > 0.0) {
            v30 = 1.0;
        } else {
            v30 = -1.0;
        }
        *(float *)&v29 = 1.9375;
        v31 = v30 * v29;
        v124 = v31;
        v28 = 0.0;
    } else {
        v28 = 0.0;
    }
    if (v25 < v28)
        v32 = -v25;
    else
        v32 = v25;
    if (v32 > 1.0) {
        *((float *)&v34 + 1) = 0.0;
        if (v25 == 0.0) {
            v35 = 0.0;
        } else if (v25 > 0.0) {
            v35 = 1.0;
        } else {
            v35 = -1.0;
        }
        *(float *)&v34 = 1.9375;
        v25 = v35 * v34;
        v33 = 0.0;
    } else {
        v33 = 0.0;
    }
    v140 = v33;
    v139 = v33;
    v123 = v25;
    v138 = *(float *)(*(_DWORD *)(a1 + 4) + 120);
    sub_80259C18(v141, (float *)a1, &v138);
    v112 = (float *)(a1 + 188);
    sub_802586C0(&v133, (float *)(a1 + 188), v141);
    v36 = a1;
    v37 = *(_DWORD *)(a1 + 4);
    v38 = *(unsigned __int8 *)(v37 + 416);
    v39 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 416);
    v126 = *(_BYTE *)(*(_DWORD *)(a1 + 12) + 416);
    v40 = v123;
    v125 = *(_BYTE *)(*(_DWORD *)(a1 + 16) + 416);
    *(_BYTE *)(a1 + 516) = 0;
    if (!*(_DWORD *)(v37 + 436) && !*(_DWORD *)(*(_DWORD *)(a1 + 8) + 436)) {
        v41 = a5;
    LABEL_139:
        *v41 = 0;
        goto LABEL_140;
    }
    if (*(_DWORD *)(*(_DWORD *)(a1 + 12) + 436)) {
        v42 = 0.0;
    } else {
        if (!*(_DWORD *)(*(_DWORD *)(a1 + 16) + 436)) {
            v41 = a5;
            goto LABEL_139;
        }
        v42 = 0.0;
    }
    if (v134 < v42)
        v43 = -v134;
    else
        v43 = v134;
    v44 = *a3;
    v45 = 4 * ((v38 + v39 + 1) >> 1);
    if (*a3 < v42)
        v46 = -v44;
    else
        v46 = v44;
    v127 = 1;
    v120 = 8000.0;
    v47 = v46 + (float)((float)(v43 * *(float *)(a1 + 44)) / a2);
    if (v124 >= 0.0)
        v48 = v124;
    else
        v48 = -v124;
    if (v48 <= 0.0001) {
        if (v123 < 0.0)
            v52 = -v123;
        else
            v52 = v123;
        if (v52 > 0.0001)
            v53 = COERCE_FLOAT(1);
        else
            v53 = 0.0;
        v51 = v47 + (float)(100000.0 * (float)SLODWORD(v53));
    } else {
        if (v123 < 0.0)
            v49 = -v123;
        else
            v49 = v123;
        if (v49 > 0.0001)
            v50 = COERCE_FLOAT(1);
        else
            v50 = 0.0;
        v51 = v47 + (float)(10000.0 * (float)SLODWORD(v50));
    }
    if (*a5)
        v120 = 5600.0;
    *a5 = 0;
    v54 = *(float *)(v45 - 2144711944);
    v55 = *(float *)(v45 - 2144712040);
    v56 = v51;
    if (v55 < v51)
        v56 = v55;
    if (v56 < v54)
        v58 = v54 / v54;
    else
        v58 = v54 / v56;
    v57 =
        *(float *)(v45 - 2144731136 + 19000) - 0.002 * (double)(*(unsigned __int8 *)(a1 + 509) - 1);
    v59 = (float)(v58 * 20.0) * v57;
    if (0.0 == *(float *)(*(_DWORD *)(a1 + 12) + 448))
        v59 = v59 * 1.5;
    v60 = 1.0;
    if (v59 < 0.0)
        v61 = -v59;
    else
        v61 = v59;
    if (v61 > 1.0)
        v59 = 1.0;
    if (v51 < v120) {
        v62 = 0.0;
        v128 = 0.0;
    } else {
        v121 = v59;
        v63 = sub_80261140((float)(*(float *)(a1 + 140) * *(float *)(a1 + 140)) +
                           (float)((float)(*(float *)(a1 + 132) * *(float *)(a1 + 132)) +
                                   (float)(*(float *)(a1 + 136) * *(float *)(a1 + 136))));
        v64 = v121;
        v40 = v123;
        if (v63 < 27.0) {
            v66 = (float)(27.0 - v63) * 0.1;
            if (v121 < (float)(v66 / 27.0))
                v64 = v66 / 27.0;
            v65 = v134;
        } else {
            v65 = v134;
        }
        v60 = 1.0;
        v134 = v65 - (float)(v65 * v64);
        v128 = v134 * v64;
        *a5 = 1;
        v36 = a1;
        v62 = v134;
    }
    v67 = v133;
    if (v133 >= 0.0)
        v68 = v133;
    else
        v68 = -v133;
    if (v60 >= v68) {
        if (v62 < 0.0)
            v72 = -v62;
        else
            v72 = v62;
        v134 = v62;
        if (v60 < v72)
            *(_BYTE *)(v36 + 516) = 0x80;
        else
            *(_BYTE *)(v36 + 516) = 0;
        v67 = v133;
        goto LABEL_119;
    }
    v69 = v62 / v133;
    v134 = v62;
    if ((float)(v62 / v133) < 0.0)
        v70 = -v69;
    else
        v70 = v69;
    if (v70 > 0.25) {
        *(_BYTE *)(v36 + 516) = 0x80;
        v67 = v133;
    LABEL_119:
        v71 = v67;
        goto LABEL_120;
    }
    v71 = v133;
LABEL_120:
    v73 = v67 - v40;
    if (v73 < 0.0)
        v74 = -v73;
    else
        v74 = v73;
    v133 = v73;
    if (v74 <= 0.0000099999997) {
        v75 = *(_DWORD *)(v36 + 12);
        goto LABEL_141;
    }
    if (0.0 == v73) {
        v76 = 0.0;
        v133 = v73;
    } else {
        v133 = v73;
        if (v73 > 0.0)
            v76 = 1.0;
        else
            v76 = -1.0;
    }
    if (v71 == 0.0) {
        v77 = 0.0 == v76;
    } else {
        if (v71 > 0.0)
            v78 = 1.0;
        else
            v78 = -1.0;
        v77 = v78 == v76;
    }
    if (v77) {
        v75 = *(_DWORD *)(v36 + 12);
        goto LABEL_141;
    }
    v133 = 0.0;
LABEL_140:
    v75 = *(_DWORD *)(v36 + 12);
LABEL_141:
    v138 = *(float *)(v75 + 120);
    sub_80259C18(v142, (float *)v36, &v138);
    sub_802586C0(&v135, v112, v142);
    v79 = a1;
    v80 = *(_DWORD *)(a1 + 12);
    if (*(_DWORD *)(v80 + 436)) {
        v81 = *(_DWORD *)(a1 + 4);
    } else {
        if (!*(_DWORD *)(*(_DWORD *)(a1 + 16) + 436)) {
            v82 = v127;
            goto LABEL_178;
        }
        v81 = *(_DWORD *)(a1 + 4);
    }
    if (*(_DWORD *)(v81 + 436) || *(_DWORD *)(*(_DWORD *)(a1 + 8) + 436)) {
        v138 = sub_802617D0(*(float *)(v80 + 448));
        v83 = sub_80261610(*(float *)(*(_DWORD *)(a1 + 12) + 448));
        v117 = v135;
        v118 = v136;
        v84 = v135;
        v119 = v137;
        v139 = v83;
        v140 = 0.0;
        v85 = (float)(v137 * 0.0) + (float)((float)(v138 * v135) + (float)(v83 * v136));
        v135 = v138 * v85;
        v136 = v83 * v85;
        v114 = v84 - v135;
        v86 = v137;
        v137 = 0.0 * v85;
        v115 = v118 - v136;
        v116 = v86 - v137;
        v87 = sub_80261140((float)(v116 * v116) +
                           (float)((float)(v114 * v114) + (float)(v115 * v115)));
        v79 = a1;
        v88 = *a4;
        if (*a4 < 0.0)
            v89 = -v88;
        else
            v89 = v88;
        v90 = 8000.0;
        v91 = v89 + (float)((float)(v87 * *(float *)(a1 + 44)) / a2);
        if (v124 >= 0.0)
            v92 = v124;
        else
            v92 = -v124;
        if (v92 > 0.0001)
            v93 = COERCE_FLOAT(1);
        else
            v93 = 0.0;
        v94 = v91 + (float)(10000.0 * (float)SLODWORD(v93));
        if (*a6)
            v90 = 8000.0 * 0.7;
        *a6 = 0;
        if (v90 < v94) {
            v95 = 4 * ((v126 + v125 + 1) >> 1);
            v96 = *(float *)(v95 - 2144711944);
            v97 = *(float *)(v95 - 2144712040);
            v98 = v94;
            if (v97 < v94)
                v98 = v97;
            if (v98 < v96)
                v99 = v96 / v96;
            else
                v99 = v96 / v98;
            v100 = (float)(v99 * 20.0) *
                   (float)(*(float *)(v95 - 2144731136 + 19000) -
                           (float)(0.0020000001 * (float)(*(unsigned __int8 *)(a1 + 509) - 1)));
            if (0.0 == *(float *)(*(_DWORD *)(a1 + 12) + 448))
                v100 = v100 * 1.5;
            if (v100 < 0.0)
                v101 = -v100;
            else
                v101 = v100;
            if (v101 > 1.0)
                v100 = 1.0;
            v122 = v100;
            v102 = sub_80261140((float)(*(float *)(a1 + 140) * *(float *)(a1 + 140)) +
                                (float)((float)(*(float *)(a1 + 132) * *(float *)(a1 + 132)) +
                                        (float)(*(float *)(a1 + 136) * *(float *)(a1 + 136))));
            v79 = a1;
            v103 = v122;
            if (v102 < 27.0) {
                v104 = (float)((float)(27.0 - v102) * 0.1) / 27.0;
                if (v122 < v104)
                    v103 = v104;
            }
            v135 = v117 - (float)(v114 * v103);
            v136 = v118 - (float)(v115 * v103);
            v137 = v119 - (float)(v116 * v103);
            *a6 = 1;
        }
        v82 = 1;
    } else {
        v82 = v127;
    }
LABEL_178:
    if (v82) {
        v129 = (float)(v133 + v135) / 2.0;
        v131 = (float)(v134 - v136) / (float)(*(float *)(*(_DWORD *)(v79 + 4) + 120) -
                                              *(float *)(*(_DWORD *)(v79 + 12) + 120));
        v113 = (float *)(v79 + 160);
        v130 = v134 - (float)(v131 * *(float *)(*(_DWORD *)(v79 + 4) + 120));
        sub_802586C0(v132, v112, (float *)(v79 + 160));
        v132[2] = v131;
        sub_80258758(v113, (int)v112, v132);
        sub_802586C0(v132, v112, (float *)(a1 + 132));
        v132[0] = v129;
        v132[1] = v130;
        sub_80258758((float *)(a1 + 132), (int)v112, v132);
        v79 = a1;
    }
    v105 = v128;
    if (v128 < 0.0)
        v105 = -v128;
    if (v105 > 0.5) {
        *((float *)&v107 + 1) = 0.0;
        if (v128 == 0.0) {
            v108 = 0.0;
        } else if (v128 > 0.0) {
            v108 = 1.0;
        } else {
            v108 = -1.0;
        }
        *(float *)&v107 = 1.75;
        v106 = v108 * v107;
    } else {
        v106 = v128;
    }
    v109 = *(float *)(v79 + 468);
    v110 = (float)(v106 / 0.5) * -4.0;
    if (v109 < v110)
        v111 = -(float)(v109 - v110);
    else
        v111 = v109 - v110;
    if (v111 >= 0.26666668) {
        if (v109 < v110)
            *(float *)(v79 + 468) = v109 + 0.26666668;
        else
            *(float *)(v79 + 468) = v109 - 0.26666668;
    } else {
        *(float *)(v79 + 468) = v110;
    }
}
// 8028C800: using guessed type int dword_8028C800;
