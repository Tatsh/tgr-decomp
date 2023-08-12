#include "types-win32.h"
//----- (10008C60) --------------------------------------------------------
size_t __stdcall freadLockHandleError(FILE *fp, void *buffer, size_t elementCount) {
  size_t result; // eax

  result = filesystem_freadLock(buffer, 1u, elementCount, fp);
  if (result != elementCount)
      s_noreturn_writeToBufferExit(aFileReadFailur);
  return result;
}
