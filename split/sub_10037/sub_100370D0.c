//----- (100370D0) --------------------------------------------------------
int __cdecl sub_100370D0(char *a1) {
    unsigned __int16 v2; // ax
    char v3;             // cl
    char v4;             // cl
    unsigned __int16 v5; // ax
    char v6;             // cl
    char v7;             // cl
    unsigned __int16 v8; // ax
    char *v9;            // ebx
    int v10;             // eax
    int v11;             // eax
    int v12;             // ecx
    char *v13;           // edi
    int v14;             // ebp
    char v15;            // al
    char v16;            // al
    char v17;            // al
    char v18;            // al
    char v19;            // al
    char v20;            // dl
    char v21;            // cl
    char v22;            // al
    char v23;            // dl
    char v24;            // al
    char v25;            // cl
    char v26;            // al
    char v27;            // dl
    char v28;            // al
    char v29;            // cl
    char v30;            // al
    char v31;            // dl
    char v32;            // al
    char v33;            // cl
    char v34;            // al
    char v35;            // dl
    char v36;            // al
    char v37;            // cl
    char v38;            // al
    char v39;            // dl
    char *v40;           // eax
    int v41;             // edi
    char v42;            // cl
    char v43;            // cl
    char *v44;           // edi
    int v45;             // ebp
    char v46;            // al
    char v47;            // al
    _WORD *v48;          // edi
    int *v49;            // ebp
    int v50;             // ebx
    __int16 v51;         // ax
    __int16 v52;         // cx
    __int16 v53;         // cx
    __int16 v54;         // dx
    char *v55;           // eax
    int v56;             // ebp
    int v57;             // edi
    char v58;            // cl
    char v59;            // cl
    char v60;            // cl
    char v61;            // dl
    char v62;            // cl
    int v64;             // [esp+14h] [ebp+4h]
    int v65;             // [esp+14h] [ebp+4h]

    sub_1002B9A0(-2143518720, (int)(a1 + 0x8000));
    sub_1002B9D0(0);
    dword_106C7C3C = (int)a1;
    *((_DWORD *)a1 + 31) = 0;
    LOBYTE(v2) = a1[32769];
    HIBYTE(v2) = a1[0x8000];
    *((_DWORD *)a1 + 0x2000) =
        (unsigned __int8)a1[32771] | (((unsigned __int8)a1[32770] | (v2 << 8)) << 8);
    v3 = a1[32775];
    a1[32775] = a1[32772];
    a1[32772] = v3;
    v4 = a1[32774];
    a1[32774] = a1[32773];
    a1[32773] = v4;
    sub_1002B970((int *)a1 + 8193);
    LOBYTE(v5) = a1[32777];
    HIBYTE(v5) = a1[32776];
    *((_DWORD *)a1 + 8194) =
        (unsigned __int8)a1[32779] | (((unsigned __int8)a1[32778] | (v5 << 8)) << 8);
    v6 = a1[32783];
    a1[32783] = a1[32780];
    a1[32780] = v6;
    v7 = a1[32782];
    a1[32782] = a1[32781];
    a1[32781] = v7;
    sub_1002B970((int *)a1 + 8195);
    LOBYTE(v8) = a1[32785];
    HIBYTE(v8) = a1[32784];
    v9 = a1 + 32788;
    *((_DWORD *)a1 + 8196) =
        (unsigned __int8)a1[32787] | (((unsigned __int8)a1[32786] | (v8 << 8)) << 8);
    LOBYTE(v8) = a1[32791];
    a1[32791] = a1[32788];
    a1[32788] = v8;
    LOBYTE(v8) = a1[32790];
    a1[32790] = a1[32789];
    a1[32789] = v8;
    sub_1002B970((int *)a1 + 8197);
    sub_1002BA80(*((_DWORD *)a1 + 8197), *((_DWORD *)a1 + 8196));
    v10 = *(_DWORD *)(*((_DWORD *)a1 + 8197) + 36 * (unsigned __int8)a1[33050] + 4);
    if (v10) {
        v11 = v10 + 24;
        v12 = 4;
        do {
            if (dword_106C661C || dword_106C6624)
                *(_WORD *)v11 &= 0xFEFFu;
            else
                *(_BYTE *)(v11 + 1) |= 1u;
            v11 += 2;
            --v12;
        } while (v12);
    }
    sub_10074E00();
    v13 = a1 + 32792;
    v64 = 3;
    do {
        v14 = 10;
        do {
            v15 = v13[3];
            v13[3] = *v13;
            *v13 = v15;
            v16 = v13[2];
            v13[2] = v13[1];
            v13[1] = v16;
            sub_1002B970((int *)v13);
            if (!sub_1002BF40(*(_DWORD *)v13)) {
                sub_1002BF80(*(_DWORD *)v13);
                sub_10074DC0(2);
                dword_118AA0C4(*(_DWORD *)v13);
            }
            v13 += 4;
            --v14;
        } while (v14);
        --v64;
    } while (v64);
    v17 = a1[32915];
    a1[32915] = a1[32912];
    a1[32912] = v17;
    v18 = a1[32914];
    a1[32914] = a1[32913];
    a1[32913] = v18;
    sub_1002B970((int *)a1 + 8229);
    v19 = a1[32923];
    v20 = a1[32921];
    a1[32923] = a1[32920];
    v21 = a1[32924];
    a1[32920] = v19;
    v22 = a1[32922];
    a1[32922] = v20;
    v23 = a1[32925];
    a1[32921] = v22;
    v24 = a1[32927];
    a1[32927] = v21;
    v25 = a1[32928];
    a1[32924] = v24;
    v26 = a1[32926];
    a1[32926] = v23;
    v27 = a1[32929];
    a1[32925] = v26;
    v28 = a1[32931];
    a1[32931] = v25;
    v29 = a1[32932];
    a1[32928] = v28;
    v30 = a1[32930];
    a1[32930] = v27;
    v31 = a1[32933];
    a1[32929] = v30;
    v32 = a1[32935];
    a1[32935] = v29;
    v33 = a1[32936];
    a1[32932] = v32;
    v34 = a1[32934];
    a1[32934] = v31;
    v35 = a1[32937];
    a1[32933] = v34;
    v36 = a1[32939];
    a1[32939] = v33;
    v37 = a1[32940];
    a1[32936] = v36;
    v38 = a1[32938];
    a1[32938] = v35;
    v39 = a1[32941];
    a1[32937] = v38;
    a1[32940] = a1[32943];
    a1[32941] = a1[32942];
    a1[32943] = v37;
    a1[32942] = v39;
    v40 = a1 + 32944;
    v41 = 3;
    do {
        v42 = v40[3];
        v40[3] = *v40;
        *v40 = v42;
        v43 = v40[2];
        v40[2] = v40[1];
        v40[1] = v43;
        v40 += 4;
        --v41;
    } while (v41);
    v44 = a1 + 32956;
    v65 = 3;
    do {
        v45 = 3;
        do {
            v46 = v44[3];
            v44[3] = *v44;
            *v44 = v46;
            v47 = v44[2];
            v44[2] = v44[1];
            v44[1] = v47;
            sub_1002B970((int *)v44);
            if (!sub_1002BF40(*(_DWORD *)v44)) {
                sub_1002BF80(*(_DWORD *)v44);
                sub_10074DC0(2);
                dword_118AA0C4(*(_DWORD *)v44);
            }
            v44 += 4;
            --v45;
        } while (v45);
        --v65;
    } while (v65);
    sub_10074DC0(2);
    dword_118AA0C8(*(_DWORD *)v9 + 216, 0);
    dword_118AA0C8(*(_DWORD *)v9 + 108, 0);
    dword_118AA0C8(*(_DWORD *)v9 + 180, 0);
    v48 = *(_WORD **)(*(_DWORD *)v9 + 36 * (unsigned __int8)a1[33051] + 4);
    v49 = (int *)(*(_DWORD *)v9 + 36 * (unsigned __int8)a1[33051]);
    if (!v48 || dword_100AC300) {
        *((_DWORD *)a1 + 36) = 0;
        *((_DWORD *)a1 + 35) = 0;
        *((_DWORD *)a1 + 34) = 0;
        *((_DWORD *)a1 + 33) = 0;
        *((_DWORD *)a1 + 32) = 0;
    } else {
        v50 = *v49;
        dword_118AA0C8(v49, 1);
        *((_DWORD *)a1 + 32) = *v49;
        if (dword_106C661C || dword_106C6624) {
            v48[15] = 112;
            v48[10] = -32112;
        } else {
            v48[15] = 400;
            v48[10] = 416;
        }
        v51 = v48[15];
        v52 = v48[10];
        v48[14] = 400;
        v48[13] = v51;
        v48[9] = 416;
        v48[8] = v52;
        v48[12] = -32391;
        v48[7] = 16786;
        v48[11] = 27565;
        v48[6] = 12742;
        *((_DWORD *)a1 + 33) = dword_118AA084(*((_DWORD *)a1 + 32), v50, v48);
        v48[14] = 192;
        v48[13] = 192;
        v48[9] = 1273;
        v48[8] = 1273;
        v48[11] = 27565;
        v48[6] = 12742;
        *((_DWORD *)a1 + 34) = dword_118AA084(*((_DWORD *)a1 + 32), v50, v48);
        v53 = v48[15];
        v54 = v48[10];
        v48[14] = 400;
        v48[13] = v53;
        v48[9] = 416;
        v48[8] = v54;
        v48[11] = 14567;
        v48[6] = -257;
        *((_DWORD *)a1 + 35) = dword_118AA084(*((_DWORD *)a1 + 32), v50, v48);
        v48[9] = 1273;
        v48[14] = 192;
        v48[13] = 192;
        v48[8] = 1273;
        v48[11] = 14567;
        v48[6] = -257;
        *((_DWORD *)a1 + 36) = dword_118AA084(*((_DWORD *)a1 + 32), v50, v48);
    }
    v55 = a1 + 32994;
    v56 = 4;
    do {
        v57 = 3;
        do {
            v58 = v55[1];
            v55[1] = *(v55 - 2);
            *(v55 - 2) = v58;
            v59 = *v55;
            *v55 = *(v55 - 1);
            *(v55 - 1) = v59;
            v55 += 4;
            --v57;
        } while (v57);
        --v56;
    } while (v56);
    v60 = a1[33055];
    a1[33055] = a1[33052];
    v61 = a1[33053];
    a1[33052] = v60;
    v62 = a1[33054];
    a1[33054] = v61;
    a1[33053] = v62;
    return sub_1002B970((int *)a1 + 8263);
}
// 100AC300: using guessed type int dword_100AC300;
// 106C661C: using guessed type int dword_106C661C;
// 106C6624: using guessed type int dword_106C6624;
// 106C7C3C: using guessed type int dword_106C7C3C;
// 118AA084: using guessed type int (__cdecl *dword_118AA084)(_DWORD, _DWORD, _DWORD);
// 118AA0C4: using guessed type int (__cdecl *dword_118AA0C4)(_DWORD);
// 118AA0C8: using guessed type int (__cdecl *dword_118AA0C8)(_DWORD, _DWORD);
