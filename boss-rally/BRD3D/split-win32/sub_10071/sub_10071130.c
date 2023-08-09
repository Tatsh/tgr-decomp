#include "types-win32.h"
//----- (10071130) --------------------------------------------------------
char __cdecl sub_10071130(enum MACRO_UNK10071130 a1, FILE *Stream) {
    char result;            // al
    char *filename;         // eax
    size_t size;            // esi
    FILE *fp0;              // eax
    FILE *fp;               // ebx
    BOOL bufferSizeMatches; // eax
    _DWORD *v8;             // ecx
    int v9[5];              // [esp+Ch] [ebp-14h] BYREF

    switch (a1) {
    case UNK10071130_4:
        return sub_10070610(UNK10071130_4, Stream);
    case UNK10071130_0:
        return sub_10070610(UNK10071130_0, Stream);
    case UNK10071130_1:
        return sub_10070E60((int)Stream);
    case UNK10071130_2:
    case UNK10071130_3:
        filename = aCRallyconfigDa;
        size = 256;
        break;
    default:
        filename = (char *)Stream;
        size = (size_t)Stream;
        break;
    }
    fp0 = fopen(filename, kFileModeReadBinary);
    fp = fp0;
    if (!fp0)
        return (_BYTE)Stream != NULL;
    if (a1 == UNK10071130_2)
        bufferSizeMatches = freadLock(gBuffer, 1u, 0x80u, fp0) == 0x80;
    else
        bufferSizeMatches = freadLock(gBuffer, 1u, size, fp0) == size;
    if (!bufferSizeMatches)
        goto LABEL_17;
    if (a1 == UNK10071130_2) {
        dword_100ADF58 = *(_DWORD *)gBuffer;
        dword_100ADF5C = (int)dword_11782E2C;
        dword_100ADF60 = dword_11782E30;
        meth_DebugPrint(dword_11782E2C);
        if (freadLock(gBuffer, 1u, 0x80u, fp) != 128) {
        LABEL_17:
            fclose(fp);
            return 0;
        }
        qmemcpy(v9, gBuffer, sizeof(v9));
        *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 62) = v9[0];
        *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 63) = v9[1];
        *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 64) = v9[2];
        *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 65) = v9[3];
        v8 = *(&dword_10ACED34 + 2778 * dword_10690A18);
        v8[66] = v9[4];
        meth_DebugPrint(v8);
        fclose(fp);
        result = 1;
    } else {
        fclose(fp);
        result = 1;
    }
    return result;
}
// 100ADF58: using guessed type int dword_100ADF58;
// 100ADF5C: using guessed type int dword_100ADF5C;
// 100ADF60: using guessed type int dword_100ADF60;
// 10690A18: using guessed type int dword_10690A18;
// 11782E30: using guessed type int dword_11782E30;
