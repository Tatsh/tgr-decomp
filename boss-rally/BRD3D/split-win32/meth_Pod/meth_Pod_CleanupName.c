#include "types-win32.h"
//----- (100085F0) --------------------------------------------------------
char __thiscall meth_Pod_CleanupName(Pod *this, const char *a1, char *buff) {
  unsigned int i; // esi
  char result;    // al

  basename(a1, buff);
  if (strlen(buff) > 0x40)
      s_noreturn_writeToBufferExit(kErrorMessageCleanupNameNameTooLong);
  for (i = 0; i < 0x40; ++i) // uppercase every letter
  {
      result = buff[i];
      if (!result)
          break;
      result = toupper(result);
      buff[i] = result;
  }
  if (i < 0x40) // set the rest of the array to 0
  {
      result = 0;
      memset(&buff[i], 0, 0x40 - i);
  }
  return result;
}
