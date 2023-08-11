#include "types-win32.h"
//----- (10070610) --------------------------------------------------------
char __cdecl sub_10070610(enum MACRO_UNK10071130 a1, FILE *Stream) {
  enum MACRO_UNK10071130 v2; // ebp
  FILE *v3;                  // ebx
  int v5;                    // eax
  int v6;                    // eax
  _DWORD *v7;                // eax
  int v8;                    // edx
  int v9;                    // ebp
  int v10;                   // ecx
  int v11;                   // eax
  FILE *v12;                 // eax
  int v13;                   // eax
  size_t v14;                // eax
  unsigned int v15;          // eax
  unsigned int v16;          // eax
  FILE *v17;                 // [esp-4h] [ebp-2Ch]
  int Buffer[3];             // [esp+10h] [ebp-18h] BYREF
  int v19;                   // [esp+1Ch] [ebp-Ch]
  int v20;                   // [esp+20h] [ebp-8h]
  int v21;                   // [esp+24h] [ebp-4h]

  v2 = a1;
  if (a1) {
    v12 = fopen(aCRallyseasonDatFilepath_ptr, kFileModeReadBinary);
    v3 = v12;
    if (!v12)
        return (_BYTE)Stream != 0;
    if (freadLock(gBuffer0, 1u, 4u, v12) == 4) {
        v13 = strncmp(gBuffer0, aRsea, 4u);
        v17 = v3;
        if (v13)
            goto LABEL_22;
        v14 = freadLock(Buffer, 1u, 4u, v3);
        v17 = v3;
        if (v14 != 4)
            goto LABEL_22;
        if (freadLock(gBuffer0, 1u, 0x200u, v3) == 512) {
            v15 = CalculateChecksum(0, 0, 0);
            v16 = CalculateChecksum(v15, (unsigned __int8 *)gBuffer0, 0x200u);
            if (Buffer[0] == v16)
                goto LABEL_3;
        }
    }
    v17 = v3;
  LABEL_22:
    fclose(v17);
    return (_BYTE)Stream != 0;
  }
  v3 = Stream;
  qmemcpy(gBuffer0, &dword_10AA26F0, 0x14Cu);
LABEL_3:
  if (a1 == UNK10071130_4) {
    if (!sub_1003E1D0())
        return 0;
    if (!dword_10ACED34 || !dword_10AD189C)
        return 0;
    qmemcpy(dword_10ACED34, gBuffer0, 0x14Cu);
    qmemcpy((void *)dword_10AD189C, gBuffer0, 0x14Cu);
    fseek(v3, 0, 2);
    v5 = ftell(v3);
    fseek(v3, v5 - 148, 0);
    freadLock(&dword_10AD0978, 4u, 1u, v3);
    freadLock(&dword_10AD097C, 4u, 1u, v3);
    freadLock(&dword_10AD0980, 4u, 1u, v3);
    freadLock(&dword_10AD0984, 4u, 1u, v3);
    freadLock(&dword_10AD0988, 4u, 1u, v3);
    fseek(v3, 0, 2);
    v6 = ftell(v3);
    fseek(v3, v6 - 128, 0);
    freadLock(gBuffer1, 1u, 0x80u, v3);
    qmemcpy(byte_10AD34F8, gBuffer1, sizeof(byte_10AD34F8));
  } else {
    v7 = *(&dword_10ACED34 + 2778 * (dword_10690A18 ^ 1));
    v8 = v7[62];
    v9 = v7[63];
    v19 = v7[64];
    v10 = v7[65];
    v11 = v7[66];
    v20 = v10;
    qmemcpy(dword_10ACED34, gBuffer0, 0x14Cu);
    v21 = v11;
    qmemcpy((void *)dword_10AD189C, gBuffer0, 0x14Cu);
    *((_DWORD *)*(&dword_10ACED34 + 2778 * (dword_10690A18 ^ 1)) + 62) = v8;
    *((_DWORD *)*(&dword_10ACED34 + 2778 * (dword_10690A18 ^ 1)) + 63) = v9;
    *((_DWORD *)*(&dword_10ACED34 + 2778 * (dword_10690A18 ^ 1)) + 64) = v19;
    *((_DWORD *)*(&dword_10ACED34 + 2778 * (dword_10690A18 ^ 1)) + 65) = v20;
    v2 = a1;
    *((_DWORD *)*(&dword_10ACED34 + 2778 * (dword_10690A18 ^ 1)) + 66) = v21;
  }
  if (v2)
    fclose(v3);
  return 1;
}
// 10690A18: using guessed type int dword_10690A18;
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AD0978: using guessed type int dword_10AD0978;
// 10AD097C: using guessed type int dword_10AD097C;
// 10AD0980: using guessed type int dword_10AD0980;
// 10AD0984: using guessed type int dword_10AD0984;
// 10AD0988: using guessed type int dword_10AD0988;
// 10AD189C: using guessed type int dword_10AD189C;
