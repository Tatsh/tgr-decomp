#include "types-win32.h"
//----- (100030E0) --------------------------------------------------------
size_t __cdecl CHK_FRead0(void *buffer, size_t elementSize, size_t elementCount, CHK_File *fp) {
  size_t result;           // eax
  CHAR debugMessage[1024]; // [esp+Ch] [ebp-400h] BYREF

  if (elementSize * elementCount) {
      result = filesystem_freadLock(buffer, elementSize, elementCount, fp->pfil);
      if (!result)
          return result;
      if (result != elementCount) {
          sprintf(debugMessage,
                  "FCHK_FRead(): trying to read %d bytes, but got only %d bytes.\n",
                  elementSize * elementCount,
                  elementSize * result);
          OutputDebugStringA(debugMessage);
          exit(1);
      }
  }
  return 1;
}
