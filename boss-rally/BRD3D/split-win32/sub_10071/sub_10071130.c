#include "types-win32.h"
//----- (10071130) --------------------------------------------------------
char __cdecl sub_10071130(enum MACRO_UNK10071130 a1, FILE *Stream) {
  int v2;                 // eax
  char *filename;         // eax
  size_t size;            // esi
  FILE *fp0;              // eax
  FILE *fp;               // ebx
  BOOL bufferSizeMatches; // eax
  _DWORD *v8;             // ecx
  int v10[5];             // [esp+Ch] [ebp-14h] BYREF

  if (a1 == UNK10071130_4) {
    LOBYTE(v2) = sub_10070610(UNK10071130_4, Stream);
  } else if (a1) {
    if (a1 == UNK10071130_1) {
        LOBYTE(v2) = sub_10070E60((int)Stream);
    } else {
        if (a1 == UNK10071130_2 || a1 == UNK10071130_3) {
            filename = aCRallyconfigDa;
            size = 256;
        } else {
            filename = (char *)Stream;
            size = (size_t)Stream;
        }
        fp0 = fopen(filename, kFileModeReadBinary);
        fp = fp0;
        if (fp0) {
            if (a1 == UNK10071130_2)
                bufferSizeMatches = freadLock(gBuffer0, 1u, 0x80u, fp0) == 0x80;
            else
                bufferSizeMatches = freadLock(gBuffer0, 1u, size, fp0) == size;
            if (!bufferSizeMatches)
                goto LABEL_17;
            if (a1 != UNK10071130_2) {
                fclose(fp);
                LOBYTE(v2) = 1;
                return v2;
            }
            dword_100ADF58 = *(_DWORD *)gBuffer0;
            dword_100ADF5C = (int)dword_11782E2C;
            dword_100ADF60 = dword_11782E30;
            meth_DebugPrint(dword_11782E2C);
            if (freadLock(gBuffer0, 1u, 0x80u, fp) == 128) {
                qmemcpy(v10, gBuffer0, sizeof(v10));
                *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 62) = v10[0];
                *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 63) = v10[1];
                *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 64) = v10[2];
                *((_DWORD *)*(&dword_10ACED34 + 2778 * dword_10690A18) + 65) = v10[3];
                v8 = *(&dword_10ACED34 + 2778 * dword_10690A18);
                v8[66] = v10[4];
                meth_DebugPrint(v8);
                fclose(fp);
                LOBYTE(v2) = 1;
            } else {
            LABEL_17:
                fclose(fp);
                LOBYTE(v2) = 0;
            }
        } else {
            v2 = (_BYTE)Stream != NULL;
        }
    }
  } else {
    LOBYTE(v2) = sub_10070610(UNK10071130_0, Stream);
  }
  return v2;
}
// 100ADF58: using guessed type int dword_100ADF58;
// 100ADF5C: using guessed type int dword_100ADF5C;
// 100ADF60: using guessed type int dword_100ADF60;
// 10690A18: using guessed type int dword_10690A18;
// 11782E30: using guessed type int dword_11782E30;
