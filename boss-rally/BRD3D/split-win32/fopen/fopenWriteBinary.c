#include "types-win32.h"
//----- (10008BE0) --------------------------------------------------------
FILE *__stdcall fopenWriteBinary(char *FileName) {
  FILE *result; // eax
  int *v2;      // eax
  char *v3;     // eax

  result = fopen(FileName, kFileModeWriteBinary);
  if (!result) {
      v2 = _errno();
      v3 = strerror(*v2);
      s_noreturn_writeToBufferExit("Error opening %s: %s", FileName, v3);
  }
  return result;
}
