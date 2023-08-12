#include "types-win32.h"
//----- (10037990) --------------------------------------------------------
int __cdecl ParseHNDFile(char *hndFilepath) {
  CHK_File *v1;      // esi
  char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  dword_10A99778 = 0;
  dword_11829848 = 3145728;
  if (CHK_FileExists(hndFilepath)) {
    v1 = CHK_FReadOpen(hndFilepath);
    if (CHK_ReadLine(Buffer, 1024, &v1->pfil)) {
      sscanf(Buffer, "%u", &dword_11829848);
      if (CHK_ReadLine(Buffer, 1024, &v1->pfil)) {
        do {
          sscanf(Buffer,
                 "%u %x %d %d",
                 (char *)&MEMORY[0x106C7E78] + 16 * dword_10A99778,
                 (char *)&MEMORY[0x106C7E7C] + 16 * dword_10A99778,
                 &MEMORY[0x106C7E80][4 * dword_10A99778],
                 &MEMORY[0x106C7E84][4 * dword_10A99778]);
          ++dword_10A99778;
        } while (dword_10A99778 < 256 && CHK_ReadLine(Buffer, 1024, &v1->pfil));
      }
    }
    CHK_FClose(v1);
  }
  return sub_1002A5A0();
}
// 106C7E80: using guessed type int dword_106C7E80[];
// 10A99778: using guessed type int dword_10A99778;
// 11829848: using guessed type int dword_11829848;
