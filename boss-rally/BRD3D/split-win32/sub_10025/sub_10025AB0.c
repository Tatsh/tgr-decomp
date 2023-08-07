#include "../../types-win32.h"
//----- (10025AB0) --------------------------------------------------------
char __cdecl sub_10025AB0(_DWORD *a1,
                          int a2,
                          int a3,
                          int a4,
                          int a5,
                          int a6,
                          int a7,
                          int a8,
                          int a9,
                          int a10,
                          _DWORD *a11,
                          char a12,
                          int a13,
                          unsigned __int8 a14,
                          unsigned __int8 a15,
                          unsigned __int8 a16,
                          char a17,
                          unsigned __int8 a18,
                          unsigned __int8 a19,
                          unsigned __int8 a20,
                          char a21,
                          int a22) {
    unsigned __int64 v22;   // rax
    int v23;                // edi
    int v25;                // eax
    _BYTE *v26;             // ecx
    int v27;                // ebx
    _BYTE *v28;             // ecx
    int v29;                // edi
    _DWORD *v30;            // esi
    bool v31;               // cc
    _BYTE *v32;             // ecx
    int v33;                // edx
    int v34;                // edi
    _DWORD *v35;            // esi
    int v36;                // ebx
    int v37;                // edi
    _DWORD *v38;            // esi
    int v39;                // ecx
    int v40;                // edi
    _DWORD *v41;            // esi
    _DWORD *v42;            // ebx
    int v43;                // ecx
    int v44;                // edi
    _DWORD *v45;            // esi
    int v46;                // ebx
    int v47;                // ecx
    char v48;               // bl
    int v49;                // edi
    _DWORD *v50;            // esi
    unsigned __int8 v51;    // bl
    int v52;                // edi
    _DWORD *v53;            // esi
    char v54;               // bl
    int v55;                // edi
    _DWORD *v56;            // esi
    int v57;                // ecx
    int v58;                // edi
    _DWORD *v59;            // esi
    int v60;                // ecx
    int v61;                // edi
    _DWORD *v62;            // esi
    int v63;                // ecx
    int v64;                // ebx
    int v65;                // eax
    int v66;                // ecx
    unsigned __int8 *v67;   // eax
    int v68;                // edx
    _BYTE *v69;             // eax
    int v70;                // ecx
    int v71;                // ebx
    int v72;                // edi
    _DWORD *v73;            // esi
    int v74;                // ecx
    unsigned __int16 v75;   // bx
    _BYTE *v76;             // eax
    int v77;                // ebx
    int v78;                // edi
    _DWORD *v79;            // esi
    unsigned __int16 v80;   // bx
    int v81;                // edx
    int v82;                // edi
    _DWORD *v83;            // esi
    int v84;                // ecx
    int v85;                // edx
    unsigned __int16 v86;   // bx
    unsigned __int16 v87;   // bx
    int v88;                // ecx
    int v89;                // edi
    _DWORD *v90;            // esi
    int v91;                // ecx
    int v92;                // edi
    _DWORD *v93;            // esi
    int v94;                // ebx
    int v95;                // ecx
    int v96;                // ecx
    char v97;               // cl
    int v98;                // edi
    _DWORD *v99;            // esi
    int v100;               // edi
    _DWORD *v101;           // esi
    char v102;              // cl
    char v103;              // cl
    int v104;               // edi
    _DWORD *v105;           // esi
    int v106;               // ecx
    int v107;               // edi
    _DWORD *v108;           // esi
    int v109;               // ecx
    int v110;               // edi
    _DWORD *v111;           // esi
    unsigned __int8 *v112;  // ebx
    int v113;               // ecx
    unsigned __int8 *v114;  // ebx
    unsigned __int8 *v115;  // ebx
    int v116;               // ecx
    int v117;               // ebx
    int v118;               // ecx
    int v119;               // ebx
    int v120;               // eax
    int v121;               // ecx
    unsigned __int8 *v122;  // eax
    int v123;               // edx
    _BYTE *v124;            // eax
    int v125;               // ecx
    _BYTE *v126;            // eax
    int v127;               // ecx
    int m;                  // ebx
    int v129;               // ecx
    int v130;               // ecx
    int v131;               // ecx
    int v132;               // ecx
    _DWORD *v133;           // ecx
    _DWORD *v134;           // ebx
    int v135;               // ecx
    int v136;               // edx
    _DWORD *v137;           // ecx
    int v138;               // ebx
    int v139;               // eax
    int v140;               // ecx
    int kk;                 // ecx
    int ll;                 // ecx
    int v143;               // ecx
    int v144;               // ecx
    unsigned __int16 *v145; // ebx
    unsigned __int16 *v146; // ebx
    unsigned __int16 *v147; // ebx
    unsigned __int16 *v148; // ebx
    int v149;               // ecx
    int v150;               // ebx
    int v151;               // ecx
    int v153;               // [esp+10h] [ebp-8Ch]
    int i3;                 // [esp+10h] [ebp-8Ch]
    int nn;                 // [esp+10h] [ebp-8Ch]
    int v156;               // [esp+10h] [ebp-8Ch]
    int i1;                 // [esp+10h] [ebp-8Ch]
    int v158;               // [esp+10h] [ebp-8Ch]
    int i;                  // [esp+10h] [ebp-8Ch]
    int j;                  // [esp+10h] [ebp-8Ch]
    int l;                  // [esp+10h] [ebp-8Ch]
    int v162;               // [esp+10h] [ebp-8Ch]
    int n;                  // [esp+10h] [ebp-8Ch]
    int v164;               // [esp+10h] [ebp-8Ch]
    int v165;               // [esp+10h] [ebp-8Ch]
    int v166;               // [esp+10h] [ebp-8Ch]
    int v167;               // [esp+14h] [ebp-88h]
    int k;                  // [esp+14h] [ebp-88h]
    int v169;               // [esp+14h] [ebp-88h]
    int jj;                 // [esp+14h] [ebp-88h]
    int v171;               // [esp+14h] [ebp-88h]
    int v172;               // [esp+18h] [ebp-84h]
    int v173;               // [esp+18h] [ebp-84h]
    int v174;               // [esp+18h] [ebp-84h]
    int v175;               // [esp+18h] [ebp-84h]
    char *v176;             // [esp+1Ch] [ebp-80h]
    char *v177;             // [esp+1Ch] [ebp-80h]
    unsigned __int8 *v178;  // [esp+1Ch] [ebp-80h]
    int v179;               // [esp+1Ch] [ebp-80h]
    int v180;               // [esp+1Ch] [ebp-80h]
    int v181;               // [esp+1Ch] [ebp-80h]
    int v182;               // [esp+1Ch] [ebp-80h]
    int v183;               // [esp+1Ch] [ebp-80h]
    int v184;               // [esp+1Ch] [ebp-80h]
    int v185;               // [esp+1Ch] [ebp-80h]
    int v186;               // [esp+20h] [ebp-7Ch]
    int v187;               // [esp+20h] [ebp-7Ch]
    int v188;               // [esp+20h] [ebp-7Ch]
    int v189;               // [esp+20h] [ebp-7Ch]
    int v190;               // [esp+20h] [ebp-7Ch]
    int v191;               // [esp+24h] [ebp-78h]
    int v192;               // [esp+24h] [ebp-78h]
    int mm;                 // [esp+24h] [ebp-78h]
    int v194;               // [esp+24h] [ebp-78h]
    int v195;               // [esp+24h] [ebp-78h]
    int v196;               // [esp+24h] [ebp-78h]
    int v197;               // [esp+28h] [ebp-74h]
    int v198;               // [esp+28h] [ebp-74h]
    char v199;              // [esp+28h] [ebp-74h]
    int v200;               // [esp+28h] [ebp-74h]
    int v201;               // [esp+28h] [ebp-74h]
    int v202;               // [esp+28h] [ebp-74h]
    int ii;                 // [esp+28h] [ebp-74h]
    int v204;               // [esp+28h] [ebp-74h]
    int v205;               // [esp+28h] [ebp-74h]
    int v206;               // [esp+2Ch] [ebp-70h]
    int v207;               // [esp+2Ch] [ebp-70h]
    int v208;               // [esp+2Ch] [ebp-70h]
    int v209;               // [esp+2Ch] [ebp-70h]
    int v210;               // [esp+2Ch] [ebp-70h]
    int v211;               // [esp+2Ch] [ebp-70h]
    int v212;               // [esp+2Ch] [ebp-70h]
    int v213;               // [esp+2Ch] [ebp-70h]
    int v214;               // [esp+2Ch] [ebp-70h]
    int v215;               // [esp+2Ch] [ebp-70h]
    int v216;               // [esp+30h] [ebp-6Ch]
    int v217;               // [esp+30h] [ebp-6Ch]
    signed int v218;        // [esp+30h] [ebp-6Ch]
    unsigned __int8 v219;   // [esp+37h] [ebp-65h]
    unsigned __int8 v220;   // [esp+37h] [ebp-65h]
    unsigned __int8 v221;   // [esp+37h] [ebp-65h]
    int v222;               // [esp+38h] [ebp-64h]
    int v223;               // [esp+38h] [ebp-64h]
    int v224;               // [esp+3Ch] [ebp-60h]
    int v225;               // [esp+3Ch] [ebp-60h]
    int v226;               // [esp+3Ch] [ebp-60h]
    int i2;                 // [esp+3Ch] [ebp-60h]
    int v228;               // [esp+3Ch] [ebp-60h]
    int v229;               // [esp+40h] [ebp-5Ch]
    _BYTE *v230;            // [esp+40h] [ebp-5Ch]
    _BYTE *v231;            // [esp+40h] [ebp-5Ch]
    int v232;               // [esp+40h] [ebp-5Ch]
    _BYTE *v233;            // [esp+40h] [ebp-5Ch]
    _BYTE *v234;            // [esp+40h] [ebp-5Ch]
    int v235;               // [esp+44h] [ebp-58h]
    int v236;               // [esp+4Ch] [ebp-50h]
    unsigned __int8 v237;   // [esp+50h] [ebp-4Ch]
    unsigned __int8 v238;   // [esp+68h] [ebp-34h]
    unsigned __int8 v239;   // [esp+70h] [ebp-2Ch]
    unsigned __int8 v240;   // [esp+78h] [ebp-24h]
    unsigned __int8 v241;   // [esp+88h] [ebp-14h]
    unsigned __int8 v242;   // [esp+90h] [ebp-Ch]
    unsigned __int8 v244;   // [esp+98h] [ebp-4h]
    int v245;               // [esp+ACh] [ebp+10h]

    LODWORD(v22) = a9;
    v23 = 0;
    v236 = a9;
    if (a9 >= a10)
        return v22;
    while (1) {
        HIDWORD(v22) = &a11[16 * (_DWORD)v22];
        v222 = HIDWORD(v22);
        v245 = a4 + 8 * *(_DWORD *)(HIDWORD(v22) + 12);
        if (a3) {
            if (a3 == 1) {
                switch (a6) {
                case 2:
                    v189 = 0;
                    v174 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                    v195 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    if (v195 > 0) {
                        do {
                            v112 = (unsigned __int8 *)v245;
                            if ((v189 & a22) != 0) {
                                v113 = 0;
                                for (i = 0; v113 < v174; v112 = v115 + 4) {
                                    v114 = v112 + 4;
                                    v210 = 0;
                                    do {
                                        if (v113 >= v174)
                                            break;
                                        LODWORD(v22) = sub_10027B10(*(_WORD *)(a5 + 2 * *v114));
                                        *a1 = v22;
                                        v23 += 4;
                                        ++a1;
                                        if (v23 >= a2)
                                            return v22;
                                        ++v114;
                                        v113 = ++i;
                                        ++v210;
                                    } while (v210 < 4);
                                    v115 = v114 - 8;
                                    v211 = 0;
                                    do {
                                        if (v113 >= v174)
                                            break;
                                        LODWORD(v22) = sub_10027B10(*(_WORD *)(a5 + 2 * *v115));
                                        *a1 = v22;
                                        v23 += 4;
                                        ++a1;
                                        if (v23 >= a2)
                                            return v22;
                                        ++v115;
                                        v113 = ++i;
                                        ++v211;
                                    } while (v211 < 4);
                                }
                            } else {
                                for (j = 0; j < v174; ++j) {
                                    LODWORD(v22) = sub_10027B10(*(_WORD *)(a5 + 2 * *v112));
                                    *a1 = v22;
                                    v23 += 4;
                                    ++a1;
                                    if (v23 >= a2)
                                        return v22;
                                    ++v112;
                                }
                            }
                            if (a7) {
                                v116 = 0;
                                for (LODWORD(v22) = a1 - 1; v116 < v174; ++v116) {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 - 4;
                                    if (v23 >= a2)
                                        return v22;
                                }
                            }
                            v31 = v189 + 1 < v195;
                            v245 += *(_DWORD *)(v222 + 8);
                            ++v189;
                        } while (v31);
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        v190 = 0;
                        if (v195 > 0) {
                            v117 = v174;
                            do {
                                LODWORD(v22) = 2 * v117;
                                if (!a7)
                                    LODWORD(v22) = v117;
                                HIDWORD(v22) -= 4 * v22;
                                v118 = 2 * v117;
                                LODWORD(v22) = HIDWORD(v22);
                                if (!a7)
                                    v118 = v117;
                                if (v118 > 0) {
                                    do {
                                        v23 += 4;
                                        *a1++ = *(_DWORD *)v22;
                                        LODWORD(v22) = v22 + 4;
                                        if (v23 >= a2)
                                            return v22;
                                        --v118;
                                    } while (v118 > 0);
                                    v117 = v174;
                                }
                                ++v190;
                            } while (v190 < v195);
                        }
                    }
                    break;
                case 3:
                    if (a13 == 1) {
                        v119 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                        v120 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                        v121 = 0;
                        v228 = v119;
                        v200 = 0;
                        for (k = v120; v200 < k; ++v200) {
                            v122 = (unsigned __int8 *)v245;
                            v232 = v245;
                            if ((a22 & v121) != 0) {
                                v123 = 0;
                                for (l = 0; v123 < v119; v122 = v126 + 4) {
                                    v124 = v122 + 4;
                                    v212 = 0;
                                    v233 = v124;
                                    do {
                                        if (v123 >= v119)
                                            break;
                                        v238 = *v124;
                                        v23 += 4;
                                        ++a1;
                                        v125 = v238 & 0xF0 | (v238 >> 4);
                                        LODWORD(v22) = *v124 & 0xF;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | (16 * (v238 & 0xF))) << 24) |
                                            ((a20 + v125 * (a16 - (unsigned int)a20) / 0xFF)
                                             << 16) |
                                            ((a19 + v125 * (a15 - (unsigned int)a19) / 0xFF) << 8) |
                                            (a18 + v125 * (a14 - (unsigned int)a18) / 0xFF);
                                        if (v23 >= a2)
                                            return v22;
                                        v119 = v228;
                                        v124 = v233 + 1;
                                        v123 = l + 1;
                                        ++v233;
                                        v31 = v212 + 1 < 4;
                                        ++l;
                                        ++v212;
                                    } while (v31);
                                    v126 = v124 - 8;
                                    v213 = 0;
                                    v234 = v126;
                                    do {
                                        if (v123 >= v119)
                                            break;
                                        v239 = *v126;
                                        v23 += 4;
                                        ++a1;
                                        v127 = v239 & 0xF0 | (v239 >> 4);
                                        LODWORD(v22) = *v126 & 0xF;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | (16 * (v239 & 0xF))) << 24) |
                                            ((a20 + v127 * (a16 - (unsigned int)a20) / 0xFF)
                                             << 16) |
                                            (a18 + v127 * (a14 - (unsigned int)a18) / 0xFF) |
                                            ((a19 + v127 * (a15 - (unsigned int)a19) / 0xFF) << 8);
                                        if (v23 >= a2)
                                            return v22;
                                        v119 = v228;
                                        v126 = v234 + 1;
                                        v123 = l + 1;
                                        ++v234;
                                        v31 = v213 + 1 < 4;
                                        ++l;
                                        ++v213;
                                    } while (v31);
                                }
                            } else {
                                v162 = 0;
                                if (v119 > 0) {
                                    for (m = a15 - a19;; m = a15 - a19) {
                                        v23 += 4;
                                        v240 = *v122;
                                        ++a1;
                                        LODWORD(v22) = *v122 & 0xF;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | (16 * (v240 & 0xF))) << 24) |
                                            ((a20 +
                                              (a16 - a20) * (v240 & 0xF0 | (v240 >> 4)) / 0xFFu)
                                             << 16) |
                                            ((a19 + m * (v240 & 0xF0 | (v240 >> 4)) / 0xFFu) << 8) |
                                            (a18 +
                                             (a14 - a18) * (v240 & 0xF0 | (v240 >> 4)) / 0xFFu);
                                        if (v23 >= a2)
                                            return v22;
                                        v119 = v228;
                                        v122 = (unsigned __int8 *)++v232;
                                        if (++v162 >= v228)
                                            break;
                                    }
                                }
                            }
                            if (a7) {
                                v129 = 0;
                                for (LODWORD(v22) = a1 - 1; v129 < v119; ++v129) {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 - 4;
                                    if (v23 >= a2)
                                        return v22;
                                }
                            }
                            v245 += *(_DWORD *)(v222 + 8);
                            v120 = k;
                            v121 = v200 + 1;
                        }
                        if (a8) {
                            HIDWORD(v22) = a1;
                            v201 = 0;
                            if (v120 > 0) {
                                do {
                                    LODWORD(v22) = 2 * v119;
                                    if (!a7)
                                        LODWORD(v22) = v119;
                                    HIDWORD(v22) -= 4 * v22;
                                    v130 = 2 * v119;
                                    LODWORD(v22) = HIDWORD(v22);
                                    if (!a7)
                                        v130 = v119;
                                    for (; v130 > 0; --v130) {
                                        v23 += 4;
                                        *a1++ = *(_DWORD *)v22;
                                        LODWORD(v22) = v22 + 4;
                                        if (v23 >= a2)
                                            return v22;
                                    }
                                    ++v201;
                                } while (v201 < k);
                            }
                        }
                    } else {
                        LODWORD(v22) = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                        v131 = 0;
                        v218 = v22;
                        v202 = 0;
                        v169 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                        if (v169 > 0) {
                            do {
                                HIDWORD(v22) = v245;
                                if ((a22 & v131) != 0) {
                                    v132 = 0;
                                    for (n = 0; v132 < (int)v22; HIDWORD(v22) += 4) {
                                        HIDWORD(v22) += 4;
                                        v214 = 0;
                                        do {
                                            if (v132 >= (int)v22)
                                                break;
                                            v23 += 4;
                                            ++a1;
                                            v241 = *(_BYTE *)HIDWORD(v22) & 0xF0 |
                                                   (*(_BYTE *)HIDWORD(v22) >> 4);
                                            LODWORD(v22) =
                                                (unsigned __int8)(16 * *(_BYTE *)HIDWORD(v22));
                                            *(a1 - 1) =
                                                v241 |
                                                ((v241 | ((v241 | (((unsigned int)v22 |
                                                                    *(_BYTE *)HIDWORD(v22) & 0xF)
                                                                   << 8))
                                                          << 8))
                                                 << 8);
                                            if (v23 >= a2)
                                                return v22;
                                            ++HIDWORD(v22);
                                            v132 = ++n;
                                            ++v214;
                                            LODWORD(v22) = v218;
                                        } while (v214 < 4);
                                        HIDWORD(v22) -= 8;
                                        v215 = 0;
                                        do {
                                            if (v132 >= (int)v22)
                                                break;
                                            v23 += 4;
                                            ++a1;
                                            v242 = *(_BYTE *)HIDWORD(v22) & 0xF0 |
                                                   (*(_BYTE *)HIDWORD(v22) >> 4);
                                            LODWORD(v22) = *(_BYTE *)HIDWORD(v22) & 0xF;
                                            *(a1 - 1) =
                                                v242 |
                                                ((v242 |
                                                  ((v242 |
                                                    (((unsigned int)v22 |
                                                      (unsigned __int8)(16 *
                                                                        *(_BYTE *)HIDWORD(v22)))
                                                     << 8))
                                                   << 8))
                                                 << 8);
                                            if (v23 >= a2)
                                                return v22;
                                            ++HIDWORD(v22);
                                            v132 = ++n;
                                            ++v215;
                                            LODWORD(v22) = v218;
                                        } while (v215 < 4);
                                    }
                                } else {
                                    v164 = 0;
                                    if ((int)v22 > 0) {
                                        do {
                                            v23 += 4;
                                            ++a1;
                                            v244 = *(_BYTE *)HIDWORD(v22) & 0xF0 |
                                                   (*(_BYTE *)HIDWORD(v22) >> 4);
                                            LODWORD(v22) =
                                                (unsigned __int8)(16 * *(_BYTE *)HIDWORD(v22));
                                            *(a1 - 1) =
                                                v244 |
                                                ((v244 | ((v244 | (((unsigned int)v22 |
                                                                    *(_BYTE *)HIDWORD(v22) & 0xF)
                                                                   << 8))
                                                          << 8))
                                                 << 8);
                                            if (v23 >= a2)
                                                return v22;
                                            v22 = __PAIR64__(HIDWORD(v22), v218) + 0x100000000i64;
                                            ++v164;
                                        } while (v164 < v218);
                                    }
                                }
                                if (a7) {
                                    HIDWORD(v22) = 0;
                                    v133 = a1 - 1;
                                    if ((int)v22 > 0) {
                                        do {
                                            v23 += 4;
                                            *a1++ = *v133--;
                                            if (v23 >= a2)
                                                return v22;
                                            ++HIDWORD(v22);
                                        } while (SHIDWORD(v22) < (int)v22);
                                    }
                                }
                                v245 += *(_DWORD *)(v222 + 8);
                                v131 = ++v202;
                            } while (v202 < v169);
                        }
                        if (a8) {
                            v134 = a1;
                            for (ii = 0; ii < v169; ++ii) {
                                v135 = 2 * v22;
                                if (!a7)
                                    v135 = v22;
                                v134 -= v135;
                                v136 = 2 * v22;
                                v137 = v134;
                                if (!a7)
                                    v136 = v22;
                                for (; v136 > 0; --v136) {
                                    v23 += 4;
                                    *a1++ = *v137++;
                                    if (v23 >= a2)
                                        return v22;
                                }
                            }
                        }
                    }
                    break;
                case 4:
                    v138 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
                    v139 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    v140 = 0;
                    v196 = v138;
                    v204 = 0;
                    for (jj = v139; v204 < jj; ++v204) {
                        LODWORD(v22) = v245;
                        if ((a22 & v140) != 0) {
                            for (kk = 0; kk < v138; LODWORD(v22) = v22 + 4) {
                                v22 = (unsigned int)(v22 + 4);
                                do {
                                    if (kk >= v138)
                                        break;
                                    v23 += 4;
                                    *a1++ = (*(unsigned __int8 *)v22 << 24) | 0xFFFFFF;
                                    if (v23 >= a2)
                                        return v22;
                                    v138 = v196;
                                    LODWORD(v22) = v22 + 1;
                                    ++kk;
                                    ++HIDWORD(v22);
                                } while (SHIDWORD(v22) < 4);
                                v22 = (unsigned int)(v22 - 8);
                                do {
                                    if (kk >= v138)
                                        break;
                                    v23 += 4;
                                    *a1++ = (*(unsigned __int8 *)v22 << 24) | 0xFFFFFF;
                                    if (v23 >= a2)
                                        return v22;
                                    v138 = v196;
                                    LODWORD(v22) = v22 + 1;
                                    ++kk;
                                    ++HIDWORD(v22);
                                } while (SHIDWORD(v22) < 4);
                            }
                        } else {
                            for (ll = 0; ll < v138; ++ll) {
                                v23 += 4;
                                *a1++ = (*(unsigned __int8 *)v22 << 24) | 0xFFFFFF;
                                if (v23 >= a2)
                                    return v22;
                                LODWORD(v22) = v22 + 1;
                            }
                        }
                        if (a7) {
                            v143 = 0;
                            for (LODWORD(v22) = a1 - 1; v143 < v138; ++v143) {
                                v23 += 4;
                                *a1++ = *(_DWORD *)v22;
                                LODWORD(v22) = v22 - 4;
                                if (v23 >= a2)
                                    return v22;
                            }
                        }
                        v245 += *(_DWORD *)(v222 + 8);
                        v139 = jj;
                        v140 = v204 + 1;
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        v205 = 0;
                        if (v139 > 0) {
                            do {
                                LODWORD(v22) = 2 * v138;
                                if (!a7)
                                    LODWORD(v22) = v138;
                                HIDWORD(v22) -= 4 * v22;
                                v144 = 2 * v138;
                                LODWORD(v22) = HIDWORD(v22);
                                if (!a7)
                                    v144 = v138;
                                for (; v144 > 0; --v144) {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 + 4;
                                    if (v23 >= a2)
                                        return v22;
                                }
                                ++v205;
                            } while (v205 < jj);
                        }
                    }
                    break;
                }
                goto LABEL_336;
            }
            if (a3 != 2 || a6)
                goto LABEL_336;
            v165 = 0;
            v175 = 1 << *(_DWORD *)(HIDWORD(v22) + 32);
            v171 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
            if (v171 <= 0) {
            LABEL_324:
                if (a8) {
                    HIDWORD(v22) = a1;
                    v166 = 0;
                    if (v171 > 0) {
                        v150 = v175;
                        do {
                            LODWORD(v22) = 2 * v150;
                            if (!a7)
                                LODWORD(v22) = v150;
                            HIDWORD(v22) -= 4 * v22;
                            v151 = 2 * v150;
                            LODWORD(v22) = HIDWORD(v22);
                            if (!a7)
                                v151 = v150;
                            if (v151 > 0) {
                                do {
                                    v23 += 4;
                                    *a1++ = *(_DWORD *)v22;
                                    LODWORD(v22) = v22 + 4;
                                    if (v23 >= a2)
                                        return v22;
                                    --v151;
                                } while (v151 > 0);
                                v150 = v175;
                            }
                            ++v166;
                        } while (v166 < v171);
                    }
                }
                goto LABEL_336;
            }
            while (1) {
                v145 = (unsigned __int16 *)v245;
                HIDWORD(v22) = v175;
                v182 = 0;
                if ((v165 & a22) != 0) {
                    if (v175 <= 0)
                        goto LABEL_319;
                    while (1) {
                        *a1++ = sub_10027B10(v145[2]);
                        v146 = v145 + 1;
                        v23 += 4;
                        LOBYTE(v22) = v182 + 1;
                        v183 = v182 + 1;
                        if (v183 >= v175)
                            break;
                        if (v23 >= a2)
                            return v22;
                        *a1++ = sub_10027B10(v146[2]);
                        v147 = v146 + 1;
                        v23 += 4;
                        LOBYTE(v22) = v183 + 1;
                        v184 = v183 + 1;
                        if (v184 >= v175)
                            break;
                        if (v23 >= a2)
                            return v22;
                        *a1++ = sub_10027B10(*(v147 - 2));
                        v148 = v147 + 1;
                        v23 += 4;
                        LOBYTE(v22) = v184 + 1;
                        v185 = v184 + 1;
                        if (v185 >= v175)
                            break;
                        if (v23 >= a2)
                            return v22;
                        *a1++ = sub_10027B10(*(v148 - 2));
                        v145 = v148 + 1;
                        v23 += 4;
                        LOBYTE(v22) = v185 + 1;
                        v182 = v185 + 1;
                        if (v182 >= v175)
                            break;
                        if (v23 >= a2)
                            return v22;
                    }
                } else {
                    if (v175 <= 0)
                        goto LABEL_319;
                    do {
                        LODWORD(v22) = sub_10027B10(*v145);
                        *a1 = v22;
                        v23 += 4;
                        ++a1;
                        ++v145;
                        if (v23 >= a2)
                            return v22;
                        ++v182;
                    } while (v182 < v175);
                }
                HIDWORD(v22) = v175;
            LABEL_319:
                if (a7) {
                    v149 = 0;
                    for (LODWORD(v22) = a1 - 1; v149 < SHIDWORD(v22); ++v149) {
                        v23 += 4;
                        *a1++ = *(_DWORD *)v22;
                        LODWORD(v22) = v22 - 4;
                        if (v23 >= a2)
                            return v22;
                    }
                }
                v31 = v165 + 1 < v171;
                v245 += *(_DWORD *)(v222 + 8);
                ++v165;
                if (!v31)
                    goto LABEL_324;
            }
        }
        if (a6 != 2) {
            if (a6 == 4) {
                v63 = *(_DWORD *)(HIDWORD(v22) + 32);
                if (a13 == 1) {
                    v64 = 1 << (v63 - 1);
                    v65 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    v66 = 0;
                    v216 = v64;
                    v206 = 0;
                    for (mm = v65; v206 < mm; ++v206) {
                        v67 = (unsigned __int8 *)v245;
                        v229 = v245;
                        if ((v66 & a22) != 0) {
                            v68 = 0;
                            for (nn = 0; v68 < v64; v67 = v76 + 4) {
                                v69 = v67 + 4;
                                v224 = 0;
                                v230 = v69;
                                do {
                                    if (v68 >= v64)
                                        break;
                                    v219 = *v69;
                                    v179 = a14 - a18;
                                    v70 = (v219 >> 4) | v219 & 0xF0;
                                    v71 = (unsigned __int8)(a20 - v70 * (a16 - a20));
                                    BYTE1(v71) = a21 - v70 * (a17 - a21);
                                    v72 = v23 + 4;
                                    v22 = 2155905153i64 * v179 * v70;
                                    LOBYTE(v22) = a18;
                                    v73 = a1 + 1;
                                    *(v73 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - v70 * (a15 - a19)) | (v71 << 8))
                                         << 8);
                                    if (v72 >= a2)
                                        return v22;
                                    v23 = v72 + 4;
                                    a1 = v73 + 1;
                                    v74 = v219 & 0xF | (unsigned __int8)(16 * v219);
                                    LOBYTE(v75) = a20 - v74 * (a16 - a20);
                                    HIBYTE(v75) = a21 - v74 * (a17 - a21);
                                    v22 = 2155905153i64 * v179 * v74;
                                    LOBYTE(v22) = a18;
                                    *(a1 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - v74 * (a15 - a19)) | (v75 << 8))
                                         << 8);
                                    if (v23 >= a2)
                                        return v22;
                                    v64 = v216;
                                    v69 = v230 + 1;
                                    v68 = nn + 1;
                                    ++v230;
                                    v31 = v224 + 1 < 4;
                                    ++nn;
                                    ++v224;
                                } while (v31);
                                v76 = v69 - 8;
                                v225 = 0;
                                v231 = v76;
                                do {
                                    if (v68 >= v64)
                                        break;
                                    v220 = *v76;
                                    v237 = (v220 >> 4) | v220 & 0xF0;
                                    v180 = a14 - a18;
                                    v77 = (unsigned __int8)(a20 - (a16 - a20) * v237);
                                    BYTE1(v77) = a21 - (a17 - a21) * v237;
                                    v78 = v23 + 4;
                                    v22 = 2155905153i64 * v180 * v237;
                                    LOBYTE(v22) = a18;
                                    v79 = a1 + 1;
                                    *(v79 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - (a15 - a19) * v237) | (v77 << 8))
                                         << 8);
                                    if (v78 >= a2)
                                        return v22;
                                    v23 = v78 + 4;
                                    a1 = v79 + 1;
                                    LOBYTE(v80) = a20 - (a16 - a20) * (v220 & 0xF | (16 * v220));
                                    HIBYTE(v80) = a21 - (a17 - a21) * (v220 & 0xF | (16 * v220));
                                    v22 = 2155905153i64 * v180 *
                                          (v220 & 0xFu | (unsigned __int8)(16 * v220));
                                    LOBYTE(v22) = a18;
                                    *(a1 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 - (a15 - a19) *
                                                                      (v220 & 0xF | (16 * v220))) |
                                          (v80 << 8))
                                         << 8);
                                    if (v23 >= a2)
                                        return v22;
                                    v64 = v216;
                                    v76 = v231 + 1;
                                    v68 = nn + 1;
                                    ++v231;
                                    v31 = v225 + 1 < 4;
                                    ++nn;
                                    ++v225;
                                } while (v31);
                            }
                        } else {
                            v156 = 0;
                            if (v64 > 0) {
                                v181 = a14 - a18;
                                v173 = a15 - a19;
                                v81 = a16 - a20;
                                v199 = a17 - a21;
                                while (1) {
                                    v82 = v23 + 4;
                                    v221 = *v67;
                                    v83 = a1 + 1;
                                    v84 = (v221 >> 4) | v221 & 0xF0;
                                    v85 = (int)((unsigned __int64)(2155905153i64 * v81 * v84) >>
                                                32) >>
                                          7;
                                    LOBYTE(v86) = a20 + (v85 < 0) + v85;
                                    HIBYTE(v86) = a21 - v199 * v84;
                                    v22 = 2155905153i64 * v181 * v84;
                                    LOBYTE(v22) = a18;
                                    *(v83 - 1) =
                                        (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                          (SHIDWORD(v22) >> 7)) |
                                        (((unsigned __int8)(a19 +
                                                            ((int)((unsigned __int64)(2155905153i64 *
                                                                                      v173 * v84) >>
                                                                   32) >>
                                                             7 < 0) +
                                                            ((int)((unsigned __int64)(2155905153i64 *
                                                                                      v173 * v84) >>
                                                                   32) >>
                                                             7)) |
                                          (v86 << 8))
                                         << 8);
                                    if (v82 >= a2)
                                        return v22;
                                    v23 = v82 + 4;
                                    a1 = v83 + 1;
                                    LOBYTE(v87) = a20 - (a16 - a20) * (v221 & 0xF | (16 * v221));
                                    HIBYTE(v87) = a21 - v199 * (v221 & 0xF | (16 * v221));
                                    v22 = 2155905153i64 * v181 *
                                          (v221 & 0xFu | (unsigned __int8)(16 * v221));
                                    LOBYTE(v22) = a18;
                                    *(a1 - 1) = (unsigned __int8)(a18 + (SHIDWORD(v22) >> 7 < 0) +
                                                                  (SHIDWORD(v22) >> 7)) |
                                                (((unsigned __int8)(a19 - v173 * (v221 & 0xF |
                                                                                  (16 * v221))) |
                                                  (v87 << 8))
                                                 << 8);
                                    if (v23 >= a2)
                                        return v22;
                                    v64 = v216;
                                    v67 = (unsigned __int8 *)++v229;
                                    if (++v156 >= v216)
                                        break;
                                    v81 = a16 - a20;
                                }
                            }
                        }
                        if (a7) {
                            v88 = 0;
                            for (LODWORD(v22) = a1 - 1; v88 < v64; ++v88) {
                                v89 = v23 + 4;
                                *a1 = *(_DWORD *)v22;
                                v90 = a1 + 1;
                                LODWORD(v22) = v22 - 4;
                                if (v89 < a2) {
                                    v23 = v89 + 4;
                                    *v90 = *(_DWORD *)v22;
                                    a1 = v90 + 1;
                                    LODWORD(v22) = v22 - 4;
                                    if (v23 < a2)
                                        continue;
                                }
                                return v22;
                            }
                        }
                        v245 += *(_DWORD *)(v222 + 8);
                        v65 = mm;
                        v66 = v206 + 1;
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        v207 = 0;
                        if (v65 > 0) {
                            do {
                                LODWORD(v22) = 2 * v64;
                                if (!a7)
                                    LODWORD(v22) = v64;
                                HIDWORD(v22) -= 8 * v22;
                                v91 = 2 * v64;
                                LODWORD(v22) = HIDWORD(v22);
                                if (!a7)
                                    v91 = v64;
                                for (; v91 > 0; --v91) {
                                    v92 = v23 + 4;
                                    *a1 = *(_DWORD *)v22;
                                    v93 = a1 + 1;
                                    LODWORD(v22) = v22 + 4;
                                    if (v92 < a2) {
                                        v23 = v92 + 4;
                                        *v93 = *(_DWORD *)v22;
                                        a1 = v93 + 1;
                                        LODWORD(v22) = v22 + 4;
                                        if (v23 < a2)
                                            continue;
                                    }
                                    return v22;
                                }
                                ++v207;
                            } while (v207 < mm);
                        }
                    }
                } else {
                    v94 = 1 << (v63 - 1);
                    v95 = 0;
                    v217 = v94;
                    v226 = 0;
                    v194 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
                    if (v194 > 0) {
                        do {
                            HIDWORD(v22) = v245;
                            if ((a22 & v95) != 0) {
                                v96 = 0;
                                for (i1 = 0; v96 < v94; HIDWORD(v22) += 4) {
                                    HIDWORD(v22) += 4;
                                    v208 = 0;
                                    do {
                                        if (v96 >= v94)
                                            break;
                                        v97 = *(_BYTE *)HIDWORD(v22);
                                        v98 = v23 + 4;
                                        v99 = a1 + 1;
                                        LODWORD(v22) = (unsigned __int8)*(_BYTE *)HIDWORD(v22) >> 4;
                                        *(v99 - 1) =
                                            (((unsigned int)v22 | *(_BYTE *)HIDWORD(v22) & 0xF0)
                                             << 24) |
                                            0xFFFFFF;
                                        if (v98 >= a2)
                                            return v22;
                                        v23 = v98 + 4;
                                        a1 = v99 + 1;
                                        LODWORD(v22) =
                                            ((v97 & 0xF | (unsigned __int8)(16 * v97)) << 24) |
                                            0xFFFFFF;
                                        *(a1 - 1) = v22;
                                        if (v23 >= a2)
                                            return v22;
                                        v94 = v217;
                                        ++HIDWORD(v22);
                                        v96 = i1 + 1;
                                        v31 = v208 + 1 < 4;
                                        ++i1;
                                        ++v208;
                                    } while (v31);
                                    HIDWORD(v22) -= 8;
                                    v209 = 0;
                                    do {
                                        if (v96 >= v94)
                                            break;
                                        LOBYTE(v22) = *(_BYTE *)HIDWORD(v22);
                                        v100 = v23 + 4;
                                        v101 = a1 + 1;
                                        *(v101 - 1) =
                                            ((((unsigned __int8)*(_BYTE *)HIDWORD(v22) >> 4) |
                                              *(_BYTE *)HIDWORD(v22) & 0xF0)
                                             << 24) |
                                            0xFFFFFF;
                                        if (v100 >= a2)
                                            return v22;
                                        v102 = v22;
                                        v23 = v100 + 4;
                                        LODWORD(v22) = (unsigned __int8)(16 * v22);
                                        a1 = v101 + 1;
                                        *(a1 - 1) =
                                            (((unsigned int)v22 | v102 & 0xF) << 24) | 0xFFFFFF;
                                        if (v23 >= a2)
                                            return v22;
                                        v94 = v217;
                                        ++HIDWORD(v22);
                                        v96 = i1 + 1;
                                        v31 = v209 + 1 < 4;
                                        ++i1;
                                        ++v209;
                                    } while (v31);
                                }
                            } else {
                                v158 = 0;
                                if (v94 > 0) {
                                    do {
                                        v103 = *(_BYTE *)HIDWORD(v22);
                                        v104 = v23 + 4;
                                        v105 = a1 + 1;
                                        LODWORD(v22) = *(_BYTE *)HIDWORD(v22) & 0xF0;
                                        *(v105 - 1) =
                                            (((unsigned int)v22 |
                                              ((unsigned __int8)*(_BYTE *)HIDWORD(v22) >> 4))
                                             << 24) |
                                            0xFFFFFF;
                                        if (v104 >= a2)
                                            return v22;
                                        v23 = v104 + 4;
                                        a1 = v105 + 1;
                                        LODWORD(v22) =
                                            ((v103 & 0xF | (unsigned __int8)(16 * v103)) << 24) |
                                            0xFFFFFF;
                                        *(a1 - 1) = v22;
                                        if (v23 >= a2)
                                            return v22;
                                        v94 = v217;
                                        ++HIDWORD(v22);
                                        ++v158;
                                    } while (v158 < v217);
                                }
                            }
                            if (a7) {
                                v106 = 0;
                                for (LODWORD(v22) = a1 - 1; v106 < v94; ++v106) {
                                    v107 = v23 + 4;
                                    *a1 = *(_DWORD *)v22;
                                    v108 = a1 + 1;
                                    LODWORD(v22) = v22 - 4;
                                    if (v107 < a2) {
                                        v23 = v107 + 4;
                                        *v108 = *(_DWORD *)v22;
                                        a1 = v108 + 1;
                                        LODWORD(v22) = v22 - 4;
                                        if (v23 < a2)
                                            continue;
                                    }
                                    return v22;
                                }
                            }
                            v245 += *(_DWORD *)(v222 + 8);
                            v95 = ++v226;
                        } while (v226 < v194);
                    }
                    if (a8) {
                        HIDWORD(v22) = a1;
                        for (i2 = 0; i2 < v194; ++i2) {
                            LODWORD(v22) = 2 * v94;
                            if (!a7)
                                LODWORD(v22) = v94;
                            HIDWORD(v22) -= 8 * v22;
                            v109 = 2 * v94;
                            LODWORD(v22) = HIDWORD(v22);
                            if (!a7)
                                v109 = v94;
                            for (; v109 > 0; --v109) {
                                v110 = v23 + 4;
                                *a1 = *(_DWORD *)v22;
                                v111 = a1 + 1;
                                LODWORD(v22) = v22 + 4;
                                if (v110 < a2) {
                                    v23 = v110 + 4;
                                    *v111 = *(_DWORD *)v22;
                                    a1 = v111 + 1;
                                    LODWORD(v22) = v22 + 4;
                                    if (v23 < a2)
                                        continue;
                                }
                                return v22;
                            }
                        }
                    }
                }
            }
            goto LABEL_336;
        }
        if ((a12 & 2) == 0 || v236 != 1) {
            v46 = 1 << (*(_DWORD *)(HIDWORD(v22) + 32) - 1);
            v47 = 0;
            v188 = v46;
            v153 = 0;
            v192 = 1 << *(_DWORD *)(HIDWORD(v22) + 36);
            if (v192 <= 0) {
            LABEL_73:
                if (a8) {
                    HIDWORD(v22) = a1;
                    for (i3 = 0; i3 < v192; ++i3) {
                        LODWORD(v22) = 2 * v46;
                        if (!a7)
                            LODWORD(v22) = v46;
                        HIDWORD(v22) -= 8 * v22;
                        v60 = 2 * v46;
                        LODWORD(v22) = HIDWORD(v22);
                        if (!a7)
                            v60 = v46;
                        if (v60 > 0) {
                            do {
                                v61 = v23 + 4;
                                *a1 = *(_DWORD *)v22;
                                v62 = a1 + 1;
                                LODWORD(v22) = v22 + 4;
                                if (v61 >= a2)
                                    return v22;
                                v23 = v61 + 4;
                                *v62 = *(_DWORD *)v22;
                                a1 = v62 + 1;
                                LODWORD(v22) = v22 + 4;
                                if (v23 >= a2)
                                    return v22;
                                --v60;
                            } while (v60 > 0);
                            v46 = v188;
                        }
                    }
                }
                goto LABEL_336;
            }
            while (2) {
                v176 = (char *)v245;
                v172 = 0;
                if ((a22 & v47) != 0) {
                    if (v46 > 0) {
                        do {
                            v197 = 0;
                            v177 = v176 + 4;
                            do {
                                if (v172 >= v188)
                                    break;
                                v48 = *v177;
                                LODWORD(v22) = sub_10027B10(
                                    *(_WORD *)(a5 + 2 * ((unsigned __int8)*v177 >> 4)));
                                *a1 = v22;
                                v49 = v23 + 4;
                                v50 = a1 + 1;
                                if (v49 >= a2)
                                    return v22;
                                LODWORD(v22) = sub_10027B10(*(_WORD *)(a5 + 2 * (v48 & 0xF)));
                                *v50 = v22;
                                v23 = v49 + 4;
                                a1 = v50 + 1;
                                if (v23 >= a2)
                                    return v22;
                                ++v177;
                                ++v172;
                                ++v197;
                            } while (v197 < 4);
                            v198 = 0;
                            v178 = (unsigned __int8 *)(v177 - 8);
                            do {
                                if (v172 >= v188)
                                    break;
                                v51 = *v178;
                                LODWORD(v22) = sub_10027B10(*(_WORD *)(a5 + 2 * (*v178 >> 4)));
                                *a1 = v22;
                                v52 = v23 + 4;
                                v53 = a1 + 1;
                                if (v52 >= a2)
                                    return v22;
                                LODWORD(v22) = sub_10027B10(*(_WORD *)(a5 + 2 * (v51 & 0xF)));
                                *v53 = v22;
                                v23 = v52 + 4;
                                a1 = v53 + 1;
                                if (v23 >= a2)
                                    return v22;
                                ++v178;
                                ++v172;
                                ++v198;
                            } while (v198 < 4);
                            v176 = (char *)(v178 + 4);
                        } while (v172 < v188);
                        goto LABEL_66;
                    }
                } else if (v46 > 0) {
                    do {
                        v54 = *v176;
                        LODWORD(v22) =
                            sub_10027B10(*(_WORD *)(a5 + 2 * ((unsigned __int8)*v176 >> 4)));
                        *a1 = v22;
                        v55 = v23 + 4;
                        v56 = a1 + 1;
                        if (v55 >= a2)
                            return v22;
                        LODWORD(v22) = sub_10027B10(*(_WORD *)(a5 + 2 * (v54 & 0xF)));
                        *v56 = v22;
                        v23 = v55 + 4;
                        a1 = v56 + 1;
                        if (v23 >= a2)
                            return v22;
                        ++v176;
                        ++v172;
                    } while (v172 < v188);
                LABEL_66:
                    v46 = v188;
                }
                if (a7) {
                    v57 = 0;
                    for (LODWORD(v22) = a1 - 1; v57 < v46; ++v57) {
                        v58 = v23 + 4;
                        *a1 = *(_DWORD *)v22;
                        v59 = a1 + 1;
                        LODWORD(v22) = v22 - 4;
                        if (v58 < a2) {
                            v23 = v58 + 4;
                            *v59 = *(_DWORD *)v22;
                            a1 = v59 + 1;
                            LODWORD(v22) = v22 - 4;
                            if (v23 < a2)
                                continue;
                        }
                        return v22;
                    }
                }
                v245 += *(_DWORD *)(v222 + 8);
                v47 = ++v153;
                if (v153 >= v192)
                    goto LABEL_73;
                continue;
            }
        }
        v25 = 1 << (a11[24] - 1);
        v186 = 0;
        v223 = v25;
        v235 = 1 << a11[25];
        if (v235 > 0)
            break;
    LABEL_33:
        if (a8) {
            v42 = a1;
            v187 = 0;
            if (v235 > 0) {
                HIDWORD(v22) = v223;
                while (1) {
                    LODWORD(v22) = 2 * HIDWORD(v22);
                    if (!a7)
                        LODWORD(v22) = HIDWORD(v22);
                    v42 -= 2 * v22;
                    v43 = 2 * HIDWORD(v22);
                    LODWORD(v22) = v42;
                    if (!a7)
                        v43 = HIDWORD(v22);
                    if (v43 > 0)
                        break;
                LABEL_45:
                    if (++v187 >= v235)
                        goto LABEL_336;
                }
                while (1) {
                    v44 = v23 + 4;
                    *a1 = *(_DWORD *)v22;
                    v45 = a1 + 1;
                    LODWORD(v22) = v22 + 4;
                    if (v44 >= a2)
                        return v22;
                    v23 = v44 + 4;
                    *v45 = *(_DWORD *)v22;
                    a1 = v45 + 1;
                    LODWORD(v22) = v22 + 4;
                    if (v23 >= a2)
                        return v22;
                    if (--v43 <= 0) {
                        HIDWORD(v22) = v223;
                        goto LABEL_45;
                    }
                }
            }
        }
    LABEL_336:
        LODWORD(v22) = ++v236;
        if (v236 >= a10)
            return v22;
    }
    while (1) {
        v26 = (_BYTE *)v245;
        if ((a22 & v186) == 0)
            break;
        v27 = 0;
        v191 = 0;
        if (v25 > 0) {
            do {
                v28 = v26 + 4;
                v167 = 0;
                do {
                    if (v27 >= v223)
                        break;
                    v29 = v23 + 4;
                    v30 = a1 + 1;
                    LOBYTE(v22) = *v28;
                    *(v30 - 1) = (unsigned __int8)*v28 >> 4;
                    if (v29 >= a2)
                        return v22;
                    LODWORD(v22) = v22 & 0xF;
                    v23 = v29 + 4;
                    *v30 = v22;
                    a1 = v30 + 1;
                    if (v23 >= a2)
                        return v22;
                    ++v28;
                    ++v27;
                    v31 = v167 + 1 < 4;
                    v191 = v27;
                    ++v167;
                } while (v31);
                v32 = v28 - 8;
                v33 = 0;
                do {
                    if (v27 >= v223)
                        break;
                    v34 = v23 + 4;
                    v35 = a1 + 1;
                    LOBYTE(v22) = *v32;
                    *(v35 - 1) = (unsigned __int8)*v32 >> 4;
                    if (v34 >= a2)
                        return v22;
                    LODWORD(v22) = v22 & 0xF;
                    v23 = v34 + 4;
                    *v35 = v22;
                    a1 = v35 + 1;
                    if (v23 >= a2)
                        return v22;
                    ++v32;
                    v27 = v191 + 1;
                    ++v33;
                    ++v191;
                } while (v33 < 4);
                v26 = v32 + 4;
            } while (v27 < v223);
        }
    LABEL_27:
        if (a7) {
            v39 = 0;
            LODWORD(v22) = a1 - 1;
            if (v223 > 0) {
                do {
                    v40 = v23 + 4;
                    *a1 = *(_DWORD *)v22;
                    v41 = a1 + 1;
                    LODWORD(v22) = v22 - 4;
                    if (v40 >= a2)
                        return v22;
                    v23 = v40 + 4;
                    *v41 = *(_DWORD *)v22;
                    a1 = v41 + 1;
                    LODWORD(v22) = v22 - 4;
                    if (v23 >= a2)
                        return v22;
                } while (++v39 < v223);
            }
        }
        v245 += a11[18];
        if (++v186 >= v235)
            goto LABEL_33;
        v25 = v223;
    }
    v36 = 0;
    if (v25 <= 0)
        goto LABEL_27;
    while (1) {
        v37 = v23 + 4;
        v38 = a1 + 1;
        LOBYTE(v22) = *v26;
        *(v38 - 1) = (unsigned __int8)*v26 >> 4;
        if (v37 >= a2)
            return v22;
        LODWORD(v22) = v22 & 0xF;
        v23 = v37 + 4;
        *v38 = v22;
        a1 = v38 + 1;
        if (v23 >= a2)
            return v22;
        ++v26;
        if (++v36 >= v223)
            goto LABEL_27;
    }
}
