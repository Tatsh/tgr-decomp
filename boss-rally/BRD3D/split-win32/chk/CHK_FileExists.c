#include "types-win32.h"
//----- (10003320) --------------------------------------------------------
BOOL __cdecl CHK_FileExists(char *filename) {
  BOOL fp;                 // eax
  CHAR debugMessage[1024]; // [esp+4h] [ebp-400h] BYREF

  if (debugOutput) {
      sprintf(debugMessage, "CHK_FileExists(%s)\n", filename);
      OutputDebugStringA(debugMessage);
  }
  fp = (BOOL)fopen(filename, kFileModeReadBinary);
  if (fp) {
      fclose((FILE *)fp);
      fp = 1;
  }
  return fp;
}
// 10220CE0: using guessed type int debugOutput;
