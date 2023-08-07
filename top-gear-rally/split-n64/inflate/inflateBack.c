#include "../../types-n64.h"
//----- (8023EF4C) --------------------------------------------------------
int __fastcall inflateBack(z_streamp a1, z_streamp a2, int a3) {
    unsigned int v3;      // $a3
    char *v4;             // $fp
    internal_state *v8;   // $s0
    alloc_func v9;        // $s4
    unsigned int v10;     // $s3
    char *v11;            // $s2
    char *v12;            // $v1
    unsigned int v13;     // $t0
    char *v14;            // $t7
    char *v15;            // $t9
    unsigned int v16;     // $t8
    int result;           // $v0
    int v18;              // $v0
    int v19;              // $t7
    int v20;              // $v1
    char *v21;            // $s0
    char *v22;            // $v0
    char *v23;            // $t7
    unsigned int v24;     // $t6
    char *v25;            // $t9
    unsigned int v26;     // $t6
    unsigned __int16 v27; // $t9^2
    char *v28;            // $t9
    unsigned int v29;     // $t7
    int v30;              // $v0
    int v31;              // $t5
    int v32;              // $v0
    char *v33;            // $t7
    unsigned int v34;     // $t9
    int v35;              // $v1
    char *v36;            // $t8
    unsigned int v37;     // $t6
    unsigned int v38;     // $s1
    char *v39;            // $a0
    free_func v40;        // $v0
    unsigned int v41;     // $a3
    int v42;              // $v1
    int v43;              // $v0
    unsigned int v44;     // $a3
    int v45;              // $s6
    int v46;              // $v1
    char *v47;            // $a0
    free_func v48;        // $v0
    char *v49;            // $t8
    unsigned int v50;     // $t9
    int v51;              // $a2
    unsigned int v52;     // $t7
    int v53;              // $t0
    unsigned int v54;     // $v0
    char *v55;            // $t8
    unsigned int v56;     // $t7
    int v57;              // $v0
    int v58;              // $t5
    char *v59;            // $t5
    unsigned int v60;     // $t6
    unsigned int v61;     // $s1
    char *v62;            // $v0
    char *v63;            // $t6
    unsigned int v64;     // $t5
    unsigned int v65;     // $a3
    char *v66;            // $t6
    unsigned int v67;     // $t9
    int v68;              // $v0
    int v69;              // $t7
    unsigned int v70;     // $t7
    int v71;              // $v0
    char *v72;            // $t6
    unsigned int v73;     // $t5
    unsigned int v74;     // $t0
    unsigned int v75;     // $a3
    int v76;              // $a0
    unsigned int i;       // $s1
    char *v78;            // $t6
    unsigned int v79;     // $t5
    int v80;              // $v0
    int v81;              // $t7
    unsigned int v82;     // $v0
    unsigned int v83;     // $a1
    int v84;              // $s1
    int v85;              // $v1
    unsigned int v86;     // $a2
    int v87;              // $a0
    char *v88;            // $t8
    unsigned int v89;     // $t5
    int v90;              // $v0
    int v91;              // $t6
    unsigned int v92;     // $s4
    int v93;              // $a0
    unsigned int v94;     // $v1
    char *v95;            // $t6
    unsigned int v96;     // $t7
    int v97;              // $a1
    int v98;              // $a2
    int v99;              // $v0
    bool v100;            // dc
    int v101;             // $v0
    int v102;             // $v0
    int v103;             // $v0
    char *v104;           // $t6
    unsigned int v105;    // $t9
    char *v106;           // $s1
    char *v107;           // $t6
    unsigned int v108;    // $t5
    unsigned int v109;    // $t6
    char *v110;           // $t9
    unsigned int v111;    // $t7
    int v112;             // $v0
    unsigned int v113;    // $a3
    char *v114;           // $v1
    int v115;             // $v0
    unsigned int v116;    // $v1
    char *v117;           // $t6
    unsigned int v118;    // $t8
    char *v119;           // $t8
    unsigned int v120;    // $t6
    char *v121;           // $t8
    unsigned int v122;    // $t7
    char *v123;           // $t8
    unsigned int v124;    // $t9
    unsigned int v125;    // [sp+6Ch] [-4Ch] BYREF
    unsigned int v126;    // [sp+70h] [-48h] BYREF
    unsigned int v127;    // [sp+74h] [-44h] BYREF
    unsigned int v128[5]; // [sp+78h] [-40h] BYREF
    int v129;             // [sp+8Ch] [-2Ch] BYREF
    int v130;             // [sp+90h] [-28h] BYREF
    int v131;             // [sp+94h] [-24h] BYREF
    int v132;             // [sp+98h] [-20h] BYREF
    unsigned int v133;    // [sp+9Ch] [-1Ch]

    v3 = a1->data_type;
    v4 = (char *)a1->adler;
    v8 = a1->state;
    v9 = a1->zalloc;
    v10 = a2->avail_in;
    v11 = a2->next_in;
    if ((unsigned int)v4 >= v3)
        v12 = (char *)(a1->opaque - (void *)v4);
    else
        v12 = (char *)(v3 - (_DWORD)v4 - 1);
    v13 = (unsigned int)v12;
    while (2) {
        while (2) {
            v14 = a1->next_in;
        LABEL_6:
            switch ((unsigned int)v14) {
            case 0u:
                if ((unsigned int)v8 >= 3)
                    goto LABEL_11;
                do {
                    if (!v10) {
                        a1->zalloc = v9;
                        a1->state = v8;
                        v15 = a2->next_in;
                        v16 = a2->total_in;
                        a2->next_in = v11;
                        a2->total_in = v16 + v11 - v15;
                        a2->avail_in = 0;
                        a1->adler = (unsigned int)v4;
                        return sub_80242490(a1, a2, a3);
                    }
                    a3 = 0;
                    v18 = (unsigned __int8)*v11;
                    --v10;
                    ++v11;
                    v19 = v18 << (char)v8;
                    v8 = (internal_state *)((char *)v8 + 8);
                    v9 = (alloc_func)((unsigned int)v9 | v19);
                } while ((unsigned int)v8 < 3);
            LABEL_11:
                v20 = (unsigned __int8)((unsigned __int8)v9 & 7) >> 1;
                a1->msg = (char *)((unsigned __int8)v9 & 1);
                switch (v20) {
                case METHOD:
                    v21 = (char *)&v8[-1].blocks + 1;
                    v9 = (alloc_func)((unsigned int)v9 >> 3 >> ((unsigned __int8)v21 & 7));
                    v8 = (internal_state *)&v21[-((unsigned __int8)v21 & 7)];
                    a1->next_in = (char *)1;
                    continue;
                case FLAG:
                    v133 = v13;
                    sub_80241314(&v132, &v131, &v130, &v129);
                    v22 = (char *)sub_80241590(v132, v131, v130, v129, (int)a2);
                    v13 = v133;
                    a1->next_out = v22;
                    if (v22) {
                        a1->avail_in = 0;
                        a1->total_in = 0;
                        v9 = (alloc_func)((unsigned int)v9 >> 3);
                        v8 = (internal_state *)((char *)v8 - 3);
                        a1->next_in = (char *)6;
                        continue;
                    }
                    a1->zalloc = v9;
                    a1->state = v8;
                    v23 = a2->next_in;
                    v24 = a2->total_in;
                    a2->next_in = v11;
                    a2->total_in = v24 + v11 - v23;
                    a2->avail_in = v10;
                    a1->adler = (unsigned int)v4;
                    result = sub_80242490(a1, a2, -4);
                    break;
                case DICT4:
                    v9 = (alloc_func)((unsigned int)v9 >> 3);
                    v8 = (internal_state *)((char *)v8 - 3);
                    a1->next_in = (char *)3;
                    continue;
                case DICT3:
                    a1->next_in = (char *)9;
                    a2->msg = "invalid block type";
                    a1->state = (internal_state *)((char *)v8 - 3);
                    a1->zalloc = (alloc_func)((unsigned int)v9 >> 3);
                    v25 = a2->next_in;
                    v26 = a2->total_in;
                    a2->next_in = v11;
                    a2->total_in = v26 + v11 - v25;
                    a2->avail_in = v10;
                    a1->adler = (unsigned int)v4;
                    result = sub_80242490(a1, a2, -3);
                    break;
                default:
                    v14 = a1->next_in;
                    goto LABEL_6;
                }
                return result;
            case 1u:
                if ((unsigned int)v8 < 0x20) {
                    do {
                        if (!v10) {
                            a1->zalloc = v9;
                            a1->state = v8;
                            v28 = a2->next_in;
                            v29 = a2->total_in;
                            a2->next_in = v11;
                            a2->total_in = v29 + v11 - v28;
                            a2->avail_in = 0;
                            a1->adler = (unsigned int)v4;
                            return sub_80242490(a1, a2, a3);
                        }
                        a3 = 0;
                        v30 = (unsigned __int8)*v11;
                        --v10;
                        ++v11;
                        v31 = v30 << (char)v8;
                        v8 = (internal_state *)((char *)v8 + 8);
                        v9 = (alloc_func)((unsigned int)v9 | v31);
                    } while ((unsigned int)v8 < 0x20);
                    v27 = ~HIWORD(v9);
                } else {
                    v27 = ~HIWORD(v9);
                }
                v32 = (unsigned __int16)v9;
                if ((unsigned __int16)v9 == v27) {
                    a1->avail_in = (unsigned __int16)v9;
                    v8 = 0;
                    v9 = 0;
                    if (v32) {
                        a1->next_in = (char *)2;
                    } else {
                        v35 = 0;
                        if (a1->msg)
                            v35 = 7;
                        a1->next_in = (char *)v35;
                    }
                    continue;
                }
                a1->next_in = (char *)9;
                a2->msg = "invalid stored block lengths";
                a1->state = v8;
                a1->zalloc = v9;
                v33 = a2->next_in;
                v34 = a2->total_in;
                a2->next_in = v11;
                a2->total_in = v34 + v11 - v33;
                a2->avail_in = v10;
                a1->adler = (unsigned int)v4;
                return sub_80242490(a1, a2, -3);
            case 2u:
                if (!v10) {
                    a1->zalloc = v9;
                    a1->state = v8;
                    v36 = a2->next_in;
                    v37 = a2->total_in;
                    a2->next_in = v11;
                    a2->total_in = v37 + v11 - v36;
                    a2->avail_in = 0;
                    a1->adler = (unsigned int)v4;
                    return sub_80242490(a1, a2, a3);
                }
                if (v13) {
                    v38 = a1->avail_in;
                } else {
                    v39 = (char *)a1->opaque;
                    if (v4 == v39) {
                        v40 = a1->zfree;
                        v41 = a1->data_type;
                        if (v40 != (free_func)v41) {
                            v4 = (char *)a1->zfree;
                            if ((unsigned int)v40 >= v41)
                                v42 = v39 - (char *)v40;
                            else
                                v42 = v41 - (_DWORD)v40 - 1;
                            v13 = v42;
                        }
                    }
                    if (v13) {
                        v38 = a1->avail_in;
                    } else {
                        a1->adler = (unsigned int)v4;
                        v43 = sub_80242490(a1, a2, a3);
                        v4 = (char *)a1->adler;
                        v44 = a1->data_type;
                        v45 = v43;
                        if ((unsigned int)v4 >= v44) {
                            v47 = (char *)a1->opaque;
                            v46 = v47 - v4;
                        } else {
                            v46 = v44 - (_DWORD)v4 - 1;
                            v47 = (char *)a1->opaque;
                        }
                        v13 = v46;
                        if (v4 == v47) {
                            v48 = a1->zfree;
                            if (v48 != (free_func)v44) {
                                v4 = (char *)a1->zfree;
                                if ((unsigned int)v48 >= v44)
                                    v46 = v47 - (char *)v48;
                                else
                                    v46 = v44 - (_DWORD)v48 - 1;
                                v13 = v46;
                            }
                        }
                        if (!v46) {
                            a1->zalloc = v9;
                            a1->state = v8;
                            v49 = a2->next_in;
                            v50 = a2->total_in;
                            a2->next_in = v11;
                            a2->total_in = v50 + v11 - v49;
                            a2->avail_in = v10;
                            a1->adler = (unsigned int)v4;
                            return sub_80242490(a1, a2, v45);
                        }
                        v38 = a1->avail_in;
                    }
                }
                a3 = 0;
                if (v10 < v38)
                    v38 = v10;
                if (v13 < v38) {
                    v38 = v13;
                    v51 = v13;
                } else {
                    v51 = v38;
                }
                v133 = v13;
                sub_80260B20(v4, v11, v51);
                v52 = a1->avail_in;
                v53 = v133;
                v11 += v38;
                v10 -= v38;
                v4 += v38;
                a1->avail_in = v52 - v38;
                v13 = v53 - v38;
                if (v52 == v38) {
                    if (a1->msg)
                        a1->next_in = (char *)7;
                    else
                        a1->next_in = 0;
                }
                continue;
            case 3u:
                if ((unsigned int)v8 < 0xE) {
                    do {
                        if (!v10) {
                            a1->zalloc = v9;
                            a1->state = v8;
                            v55 = a2->next_in;
                            v56 = a2->total_in;
                            a2->next_in = v11;
                            a2->total_in = v56 + v11 - v55;
                            a2->avail_in = 0;
                            a1->adler = (unsigned int)v4;
                            return sub_80242490(a1, a2, a3);
                        }
                        a3 = 0;
                        v57 = (unsigned __int8)*v11;
                        --v10;
                        ++v11;
                        v58 = v57 << (char)v8;
                        v8 = (internal_state *)((char *)v8 + 8);
                        v9 = (alloc_func)((unsigned int)v9 | v58);
                    } while ((unsigned int)v8 < 0xE);
                    v54 = (unsigned __int16)v9 & 0x3FFF;
                } else {
                    v54 = (unsigned __int16)v9 & 0x3FFF;
                }
                a1->avail_in = v54;
                if ((v54 & 0x1F) >= 0x1E || ((v54 >> 5) & 0x1F) >= 0x1E) {
                    a1->next_in = (char *)9;
                    a2->msg = "too many length or distance symbols";
                    a1->state = v8;
                    a1->zalloc = v9;
                    v59 = a2->next_in;
                    v60 = a2->total_in;
                    a2->next_in = v11;
                    a2->total_in = v60 + v11 - v59;
                    a2->avail_in = v10;
                    a1->adler = (unsigned int)v4;
                    return sub_80242490(a1, a2, -3);
                }
                v61 = (v54 & 0x1F) + ((v54 >> 5) & 0x1F) + 258;
                if (v61 < 0x13)
                    v62 = (char *)((int(__fastcall *)(void *, int, int))a2->zalloc)(
                        a2->opaque, 19, 4);
                else
                    v62 = (char *)((int(__fastcall *)(void *, unsigned int, int))a2->zalloc)(
                        a2->opaque, v61, 4);
                a1->next_out = v62;
                if (!v62) {
                    a1->zalloc = v9;
                    a1->state = v8;
                    v63 = a2->next_in;
                    v64 = a2->total_in;
                    a2->next_in = v11;
                    a2->total_in = v64 + v11 - v63;
                    a2->avail_in = v10;
                    a1->adler = (unsigned int)v4;
                    return sub_80242490(a1, a2, -4);
                }
                v9 = (alloc_func)((unsigned int)v9 >> 14);
                v8 = (internal_state *)((char *)v8 - 14);
                a1->total_in = 0;
                a1->next_in = (char *)4;
            LABEL_83:
                v65 = a1->total_in;
                if (v65 >= (a1->avail_in >> 10) + 4)
                    goto LABEL_91;
                break;
            case 4u:
                goto LABEL_83;
            case 5u:
                goto LABEL_98;
            case 6u:
                goto LABEL_143;
            case 7u:
                goto LABEL_153;
            case 8u:
                goto LABEL_156;
            case 9u:
                a1->zalloc = v9;
                a1->state = v8;
                v121 = a2->next_in;
                v122 = a2->total_in;
                a2->next_in = v11;
                a2->total_in = v122 + v11 - v121;
                a2->avail_in = v10;
                a1->adler = (unsigned int)v4;
                return sub_80242490(a1, a2, -3);
            default:
                a1->zalloc = v9;
                a1->state = v8;
                v123 = a2->next_in;
                v124 = a2->total_in;
                a2->next_in = v11;
                a2->total_in = v124 + v11 - v123;
                a2->avail_in = v10;
                a1->adler = (unsigned int)v4;
                return sub_80242490(a1, a2, -2);
            }
            break;
        }
        do {
            if ((unsigned int)v8 < 3) {
                while (v10) {
                    a3 = 0;
                    v68 = (unsigned __int8)*v11;
                    --v10;
                    ++v11;
                    v69 = v68 << (char)v8;
                    v8 = (internal_state *)((char *)v8 + 8);
                    v9 = (alloc_func)((unsigned int)v9 | v69);
                    if ((unsigned int)v8 >= 3)
                        goto LABEL_90;
                }
                a1->zalloc = v9;
                a1->state = v8;
                v66 = a2->next_in;
                v67 = a2->total_in;
                a2->next_in = v11;
                a2->total_in = v67 + v11 - v66;
                a2->avail_in = 0;
                a1->adler = (unsigned int)v4;
                return sub_80242490(a1, a2, a3);
            }
        LABEL_90:
            *(_DWORD *)&a1->next_out[4 * dword_8028C850[v65]] = (unsigned __int8)v9 & 7;
            v65 = a1->total_in + 1;
            v70 = (a1->avail_in >> 10) + 4;
            a1->total_in = v65;
            v9 = (alloc_func)((unsigned int)v9 >> 3);
            v8 = (internal_state *)((char *)v8 - 3);
        } while (v65 < v70);
    LABEL_91:
        while (v65 < 0x13) {
            *(_DWORD *)&a1->next_out[4 * dword_8028C850[v65]] = 0;
            v65 = a1->total_in + 1;
            a1->total_in = v65;
        }
        a1->avail_out = 7;
        v71 = sub_802410E0((int *)a1->next_out, &a1->avail_out, (int *)&a1->total_out, (int)a2);
        if (v71) {
            if (v71 == -3)
                a1->next_in = (char *)9;
            a1->zalloc = v9;
            a1->state = v8;
            v72 = a2->next_in;
            v73 = a2->total_in;
            a2->next_in = v11;
            a2->total_in = v73 + v11 - v72;
            a2->avail_in = v10;
            a1->adler = (unsigned int)v4;
            result = sub_80242490(a1, a2, v71);
        } else {
            a1->total_in = 0;
            a1->next_in = (char *)5;
        LABEL_98:
            v74 = a1->avail_in;
            v75 = a1->total_in;
            if (v75 < (v74 & 0x1F) + ((v74 >> 5) & 0x1F) + 258) {
                for (i = a1->avail_out; (unsigned int)v8 >= i; i = a1->avail_out) {
                LABEL_105:
                    v82 = 8 * (dword_8028CAC0[i] & (unsigned int)v9) + a1->total_out;
                    v83 = *(_DWORD *)(v82 + 4);
                    v84 = *(unsigned __int8 *)(v82 + 1);
                    if (v83 >= 0x10) {
                        v85 = v83 - 14;
                        if (v83 == 18)
                            v85 = 7;
                        v86 = v84 + v85;
                        if (v83 == 18)
                            v87 = 11;
                        else
                            v87 = 3;
                        if ((unsigned int)v8 < v86) {
                            while (v10) {
                                a3 = 0;
                                v90 = (unsigned __int8)*v11;
                                --v10;
                                ++v11;
                                v91 = v90 << (char)v8;
                                v8 = (internal_state *)((char *)v8 + 8);
                                v9 = (alloc_func)((unsigned int)v9 | v91);
                                if ((unsigned int)v8 >= v86)
                                    goto LABEL_116;
                            }
                            a1->zalloc = v9;
                            a1->state = v8;
                            v88 = a2->next_in;
                            v89 = a2->total_in;
                            a2->next_in = v11;
                            a2->total_in = v89 + v11 - v88;
                            a2->avail_in = 0;
                            a1->adler = (unsigned int)v4;
                            return sub_80242490(a1, a2, a3);
                        }
                    LABEL_116:
                        v92 = (unsigned int)v9 >> v84;
                        v93 = v87 + (v92 & dword_8028CAC0[v85]);
                        v8 = (internal_state *)((char *)v8 - v84 - v85);
                        v9 = (alloc_func)(v92 >> v85);
                        v94 = v75;
                        if ((v74 & 0x1F) + ((v74 >> 5) & 0x1F) + 258 < v75 + v93 ||
                            v83 == 16 && !v75) {
                            a1->next_in = (char *)9;
                            a2->msg = "invalid bit length repeat";
                            a1->state = v8;
                            a1->zalloc = v9;
                            v95 = a2->next_in;
                            v96 = a2->total_in;
                            a2->next_in = v11;
                            a2->total_in = v96 + v11 - v95;
                            a2->avail_in = v10;
                            a1->adler = (unsigned int)v4;
                            return sub_80242490(a1, a2, -3);
                        }
                        if (v83 == 16)
                            v97 = *(_DWORD *)&a1->next_out[4 * v75 - 4];
                        else
                            v97 = 0;
                        v98 = v93 - (v93 & 3);
                        if ((v93 & 3) != 0) {
                            v99 = 4 * v75;
                            do {
                                --v93;
                                ++v94;
                                *(_DWORD *)&a1->next_out[v99] = v97;
                                v99 += 4;
                            } while (v98 != v93);
                            v100 = v93 == 0;
                        } else {
                            v100 = 0;
                        }
                        v101 = 4 * v94;
                        if (!v100) {
                            do {
                                v93 -= 4;
                                v94 += 4;
                                *(_DWORD *)&a1->next_out[v101] = v97;
                                v102 = v101 + 4;
                                *(_DWORD *)&a1->next_out[v102] = v97;
                                v102 += 4;
                                *(_DWORD *)&a1->next_out[v102] = v97;
                                v102 += 4;
                                *(_DWORD *)&a1->next_out[v102] = v97;
                                v101 = v102 + 4;
                            } while (v93);
                        }
                        a1->total_in = v94;
                    } else {
                        v9 = (alloc_func)((unsigned int)v9 >> v84);
                        *(_DWORD *)&a1->next_out[4 * v75] = v83;
                        v8 = (internal_state *)((char *)v8 - v84);
                        ++a1->total_in;
                    }
                    v74 = a1->avail_in;
                    v75 = a1->total_in;
                    if (v75 >= (v74 & 0x1F) + ((v74 >> 5) & 0x1F) + 258) {
                        v76 = a1->total_out;
                        goto LABEL_136;
                    }
                }
                while (v10) {
                    a3 = 0;
                    v80 = (unsigned __int8)*v11;
                    --v10;
                    ++v11;
                    v81 = v80 << (char)v8;
                    v8 = (internal_state *)((char *)v8 + 8);
                    v9 = (alloc_func)((unsigned int)v9 | v81);
                    if ((unsigned int)v8 >= i)
                        goto LABEL_105;
                }
                a1->zalloc = v9;
                a1->state = v8;
                v78 = a2->next_in;
                v79 = a2->total_in;
                a2->next_in = v11;
                a2->total_in = v79 + v11 - v78;
                a2->avail_in = 0;
                a1->adler = (unsigned int)v4;
                result = sub_80242490(a1, a2, a3);
            } else {
                v76 = a1->total_out;
            LABEL_136:
                sub_8024150C(v76, (int)a2);
                a1->total_out = 0;
                v128[0] = 9;
                v127 = 6;
                v103 = sub_80241180((a1->avail_in & 0x1F) + 257,
                                    ((a1->avail_in >> 5) & 0x1F) + 1,
                                    (int *)a1->next_out,
                                    v128,
                                    &v127,
                                    (int *)&v126,
                                    (int *)&v125,
                                    (int)a2);
                if (v103) {
                    if (v103 == -3)
                        a1->next_in = (char *)9;
                    a1->zalloc = v9;
                    a1->state = v8;
                    v104 = a2->next_in;
                    v105 = a2->total_in;
                    a2->next_in = v11;
                    a2->total_in = v105 + v11 - v104;
                    a2->avail_in = v10;
                    a1->adler = (unsigned int)v4;
                    result = sub_80242490(a1, a2, v103);
                } else {
                    v106 = (char *)sub_80241590(v128[0], v127, v126, v125, (int)a2);
                    if (!v106) {
                        sub_8024150C(v125, (int)a2);
                        sub_8024150C(v126, (int)a2);
                        a1->zalloc = v9;
                        a1->state = v8;
                        v107 = a2->next_in;
                        v108 = a2->total_in;
                        a2->next_in = v11;
                        a2->total_in = v108 + v11 - v107;
                        a2->avail_in = v10;
                        a1->adler = (unsigned int)v4;
                        return sub_80242490(a1, a2, -4);
                    }
                    ((void(__fastcall *)(void *, char *))a2->zfree)(a2->opaque, a1->next_out);
                    a1->next_out = v106;
                    a1->avail_in = v126;
                    v109 = v125;
                    a1->next_in = (char *)6;
                    a1->total_in = v109;
                LABEL_143:
                    a1->zalloc = v9;
                    a1->state = v8;
                    v110 = a2->next_in;
                    v111 = a2->total_in;
                    a2->next_in = v11;
                    a2->total_in = v111 + v11 - v110;
                    a2->avail_in = v10;
                    a1->adler = (unsigned int)v4;
                    v112 = sub_80241600(a1, (int)a2, a3);
                    a3 = 0;
                    if (v112 != 1)
                        return sub_80242490(a1, a2, v112);
                    sub_80241F88((int)a1->next_out, (int)a2);
                    sub_8024150C(a1->total_in, (int)a2);
                    sub_8024150C(a1->avail_in, (int)a2);
                    v4 = (char *)a1->adler;
                    v113 = a1->data_type;
                    v11 = a2->next_in;
                    v10 = a2->avail_in;
                    v9 = a1->zalloc;
                    v8 = a1->state;
                    if ((unsigned int)v4 >= v113)
                        v114 = (char *)(a1->opaque - (void *)v4);
                    else
                        v114 = (char *)(v113 - (_DWORD)v4 - 1);
                    v13 = (unsigned int)v114;
                    if (!a1->msg) {
                        a1->next_in = 0;
                        continue;
                    }
                    if ((unsigned int)v8 >= 8) {
                        v8 = (internal_state *)((char *)v8 - 8);
                        ++v10;
                        --v11;
                    }
                    a1->next_in = (char *)7;
                LABEL_153:
                    a1->adler = (unsigned int)v4;
                    v115 = sub_80242490(a1, a2, a3);
                    v116 = a1->adler;
                    v4 = (char *)v116;
                    if (v116 == a1->data_type) {
                        a1->next_in = (char *)8;
                    LABEL_156:
                        a1->zalloc = v9;
                        a1->state = v8;
                        v119 = a2->next_in;
                        v120 = a2->total_in;
                        a2->next_in = v11;
                        a2->total_in = v120 + v11 - v119;
                        a2->avail_in = v10;
                        a1->adler = (unsigned int)v4;
                        result = sub_80242490(a1, a2, 1);
                    } else {
                        a1->zalloc = v9;
                        a1->state = v8;
                        v117 = a2->next_in;
                        v118 = a2->total_in;
                        a2->next_in = v11;
                        a2->total_in = v118 + v11 - v117;
                        a2->avail_in = v10;
                        a1->adler = v116;
                        result = sub_80242490(a1, a2, v115);
                    }
                }
            }
        }
        return result;
    }
}
// 8028C850: using guessed type int dword_8028C850[4];
// 8028CAC0: using guessed type int dword_8028CAC0[];
