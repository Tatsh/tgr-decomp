#include "types-win32.h"
//----- (10070AF0) --------------------------------------------------------
bool __cdecl sub_10070AF0(char *filename, BOOL b) {
    FILE *fp0;            // eax
    FILE *fp1;            // ebx
    int strcmpResult;     // eax
    size_t size;          // eax
    void *v6;             // eax
    char *v7;             // eax
    unsigned int seed0;   // eax
    unsigned int seed1;   // eax
    unsigned int seed2;   // esi
    unsigned __int8 *v11; // eax
    unsigned int v12;     // eax
    unsigned int v14;     // eax
    int v15;              // eax
    int v16;              // eax
    char *v17;            // [esp-8h] [ebp-1Ch]
    FILE *fp2;            // [esp-4h] [ebp-18h]
    char *filename0;      // [esp-4h] [ebp-18h]
    char *buffer;         // [esp+Ch] [ebp-8h] BYREF
    int v21;              // [esp+10h] [ebp-4h] BYREF

    fp0 = fopen(filename, kFileModeReadBinary);
    fp1 = fp0;
    if (!fp0)
        goto LABEL_20;
    if (filesystem_freadLock(gBuffer0, 1u, 4u, fp0) != 4)
        goto LABEL_18;
    strcmpResult = strncmp(gBuffer0, aRgho, 4u);
    fp2 = fp1;
    if (strcmpResult)
        goto LABEL_19;
    if (filesystem_freadLock(&buffer, 4u, 1u, fp1) != 1)
        goto LABEL_18;
    if ((unsigned int)buffer < 0xC) {
        fp2 = fp1;
        if (!buffer) {
            if (filesystem_freadLock(&filename, 1u, 4u, fp1) == 4)
                goto LABEL_9;
        LABEL_18:
            fp2 = fp1;
        }
    LABEL_19:
        fclose(fp2);
    LABEL_20:
        *(_DWORD *)&dword_10AA28C8 = 0;
        dword_10680738[0] = (int *)-1;
        *(_DWORD *)&dword_10AA28CC = 0;
        dword_1068073C = -1;
        dword_10680740 = -1;
        dword_10680744 = -1;
        return b;
    }
    filename = buffer;
LABEL_9:
    filename -= 4;
    if (filesystem_freadLock(&v21, 1u, 4u, fp1) != 4)
        goto LABEL_18;
    if ((unsigned int)buffer < 0xC) {
        filename -= 4;
        if (filesystem_freadLock(&dword_10AA28CC, 1u, 4u, fp1) != 4)
            goto LABEL_18;
        filename -= 4;
        if (filesystem_freadLock(&dword_10AA28C8, 1u, 4u, fp1) != 4)
            goto LABEL_18;
    }
    filename -= 16;
    size = filesystem_freadLock(dword_10680738, 1u, 0x10u, fp1);
    fp2 = fp1;
    if (size != 16)
        goto LABEL_19;
    v17 = filename;
    v6 = sub_1006ADF0();
    v7 = (char *)filesystem_freadLock(v6, 1u, (size_t)v17, fp1);
    if (v7 != filename)
        goto LABEL_18;
    seed0 = CalculateChecksum(0, 0, 0);
    if ((unsigned int)buffer < 0xC) {
        seed1 = CalculateChecksum(seed0, &dword_10AA28CC, 4u);
        seed0 = CalculateChecksum(seed1, &dword_10AA28C8, 4u);
    }
    seed2 = CalculateChecksum(seed0, (unsigned __int8 *)dword_10680738, 0x10u);
    filename0 = filename;
    v11 = (unsigned __int8 *)sub_1006ADF0();
    v12 = CalculateChecksum(seed2, v11, (unsigned int)filename0);
    if (v21 != v12)
        goto LABEL_18;
    ElementCount = 16;
    v14 = sub_1006AE00((unsigned int)filename);
    if ((unsigned int)buffer >= 0xC) {
        *(_DWORD *)&dword_10AA28CC = 0;
        b = v14 - 204;
        *(float *)&dword_10AA28C8 = (double)(int)(v14 - 204) * 0.033333335;
    }
    *((_WORD *)dword_10ACED34 + 121) |= 1 << SLOBYTE(dword_10680738[0]);
    *((_WORD *)dword_10ACED34 + 120) |= 1 << SBYTE1(dword_10680738[0]);
    fseek(fp1, 0, 2);
    v15 = ftell(fp1);
    fseek(fp1, v15 - 152, 0);
    filesystem_freadLock(&dword_10AD0978, 4u, 1u, fp1);
    filesystem_freadLock(&dword_10AD097C, 4u, 1u, fp1);
    filesystem_freadLock(&dword_10AD0980, 4u, 1u, fp1);
    filesystem_freadLock(&dword_10AD0984, 4u, 1u, fp1);
    filesystem_freadLock(&dword_10AD0988, 4u, 1u, fp1);
    filesystem_freadLock(&dword_10AD098C, 4u, 1u, fp1);
    fseek(fp1, 0, 2);
    v16 = ftell(fp1);
    fseek(fp1, v16 - 128, 0);
    filesystem_freadLock(gBuffer1, 1u, 0x80u, fp1);
    qmemcpy(byte_10AD34F8, gBuffer1, sizeof(byte_10AD34F8));
    fclose(fp1);
    return 1;
}
// 1068073C: using guessed type int dword_1068073C;
// 10680740: using guessed type int dword_10680740;
// 10680744: using guessed type int dword_10680744;
// 10AD0978: using guessed type int dword_10AD0978;
// 10AD097C: using guessed type int dword_10AD097C;
// 10AD0980: using guessed type int dword_10AD0980;
// 10AD0984: using guessed type int dword_10AD0984;
// 10AD0988: using guessed type int dword_10AD0988;
// 10AD098C: using guessed type int dword_10AD098C;
