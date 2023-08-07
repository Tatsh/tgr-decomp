#include "../../types-win32.h"
//----- (10041BD0) --------------------------------------------------------
FILE *sub_10041BD0() {
    FILE *result;        // eax
    int v1;              // esi
    int v2;              // ecx
    int v3;              // edx
    int *v4;             // edi
    int *v5;             // eax
    unsigned __int16 v6; // bp
    int v7;              // edx
    int v8;              // ecx
    int v9;              // eax
    int v10;             // ecx
    int v11;             // [esp+Ch] [ebp-108h]
    char FileName[260];  // [esp+10h] [ebp-104h] BYREF

    g_GameMode = 0;
    sub_1003E680();
    dword_10690A18 = 0;
    strcpy(byte_10AA2518, String2);
    strcpy(byte_10A9D618, String2);
    strcpy(FileName, aAutosaveBrf);
    result = fopen(FileName, aR);
    if (result) {
        fclose(result);
        strcpy(aCRallyseasonDatFilepath_ptr, FileName);
        if (!sub_10071130(4, (FILE *)1))
            sub_1003E260(7);
        qmemcpy(&dword_10AA26F0, dword_10ACED34, 0x14Cu);
        dword_10AA28E0 = 1;
        v11 = *(_DWORD *)dword_10ACED34;
        dword_10AA28A0 = *(_DWORD *)dword_10ACED34;
        v1 = *((unsigned __int8 *)dword_10ACED34 + 5);
        dword_10AA28AC = v1;
        dword_10AA28A4 = v1;
        LOBYTE(dword_10AA28B8) = *((_BYTE *)dword_10ACED34 + 4);
        dword_10AA2A08 = dword_10AD0978;
        dword_100AC64C = dword_10AD097C;
        dword_100AC650 = dword_10AD0980;
        dword_100AC654 = dword_10AD0984;
        dword_100AC65C = dword_10AD0988;
        dword_10AA289C = 1;
        sub_1003E310();
        sub_1003E510();
        v2 = 0;
        v3 = 4;
        v4 = (int *)&word_10AA270E[4 * (char)dword_10AA28B8];
        v5 = v4;
        do {
            v6 = *(_WORD *)v5;
            v5 = (int *)((char *)v5 + 2);
            v2 += v6;
            --v3;
        } while (v3);
        v7 = *(int *)((char *)&dword_10AA26F4[(char)dword_10AA28B8] + 2);
        dword_10AA28C4 = v2;
        v8 = dword_10AA28A4;
        v9 = 0;
        for (dword_10AA26E8 = v7; v9 < v8; ++v9)
            ++*((_BYTE *)&dword_10AA26E8 + v9);
        v10 = v4[1];
        dword_10A9D068 = *v4;
        dword_10A9D06C = v10;
        sprintf(byte_10AA2518, "%d", v11 + 1);
        result = (FILE *)sprintf(byte_10A9D618, "%d", v1 + 1);
    }
    return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100AC64C: using guessed type int dword_100AC64C;
// 100AC650: using guessed type int dword_100AC650;
// 100AC654: using guessed type int dword_100AC654;
// 100AC65C: using guessed type int dword_100AC65C;
// 10690A18: using guessed type int dword_10690A18;
// 10A9D068: using guessed type int dword_10A9D068;
// 10A9D06C: using guessed type int dword_10A9D06C;
// 10AA26E8: using guessed type int dword_10AA26E8;
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA270E: using guessed type __int16 word_10AA270E[];
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28A0: using guessed type int dword_10AA28A0;
// 10AA28A4: using guessed type int dword_10AA28A4;
// 10AA28AC: using guessed type int dword_10AA28AC;
// 10AA28B8: using guessed type int dword_10AA28B8;
// 10AA28E0: using guessed type int dword_10AA28E0;
// 10AA2A08: using guessed type int dword_10AA2A08;
// 10AD0978: using guessed type int dword_10AD0978;
// 10AD097C: using guessed type int dword_10AD097C;
// 10AD0980: using guessed type int dword_10AD0980;
// 10AD0984: using guessed type int dword_10AD0984;
// 10AD0988: using guessed type int dword_10AD0988;
