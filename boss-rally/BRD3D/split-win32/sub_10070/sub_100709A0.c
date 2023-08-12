#include "types-win32.h"
//----- (100709A0) --------------------------------------------------------
char sub_100709A0() {
  unsigned int v0;     // eax
  FILE *v1;            // eax
  FILE *v2;            // esi
  char result;         // al
  size_t v4;           // eax
  size_t v5;           // eax
  size_t v6;           // eax
  FILE *v7;            // [esp-4h] [ebp-Ch]
  unsigned int Buffer; // [esp+4h] [ebp-4h] BYREF

  v0 = CalculateChecksum(0, 0, 0);
  Buffer = CalculateChecksum(v0, (unsigned __int8 *)dword_10ACED34, 0x200u);
  v1 = fopen(aCRallyseasonDatFilepath_ptr, kFileModeWriteBinary);
  v2 = v1;
  if (!v1)
    return 0;
  if (filesystem_fwriteLock(aRsea, 1u, 4u, v1) == 4) {
    v4 = filesystem_fwriteLock(&Buffer, 1u, 4u, v2);
    v7 = v2;
    if (v4 != 4)
      goto LABEL_9;
    v5 = filesystem_fwriteLock(dword_10ACED34, 1u, 0x200u, v2);
    v7 = v2;
    if (v5 != 512)
      goto LABEL_9;
    filesystem_fwriteLock(&dword_10AA2A08, 4u, 1u, v2);
    filesystem_fwriteLock(&dword_100AC64C, 4u, 1u, v2);
    filesystem_fwriteLock(&dword_100AC650, 4u, 1u, v2);
    filesystem_fwriteLock(&dword_100AC654, 4u, 1u, v2);
    filesystem_fwriteLock(&dword_100AC65C, 4u, 1u, v2);
    v6 = filesystem_fwriteLock(gBuffer1, 1u, 0x80u, v2);
    v7 = v2;
    if (v6 == 128) {
      fclose(v2);
      result = 1;
    } else {
    LABEL_9:
      fclose(v7);
      result = 0;
    }
  } else {
    fclose(v2);
    result = 0;
  }
  return result;
}
// 100AC64C: using guessed type int dword_100AC64C;
// 100AC650: using guessed type int dword_100AC650;
// 100AC654: using guessed type int dword_100AC654;
// 100AC65C: using guessed type int dword_100AC65C;
// 10AA2A08: using guessed type int dword_10AA2A08;
