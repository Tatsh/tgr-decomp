#include "../../types-win32.h"
//----- (100087B0) --------------------------------------------------------
size_t __thiscall ReadPod(#674 *this, unsigned int argList, void *buffer)
{
  unsigned int *offsetAndElementCount; // edi

  if ( argList >= *((_DWORD *)this + 4) )
    writeToRandomBufferAndExit("ReadPod: %i >= cNumPods", argList);
  offsetAndElementCount = (unsigned int *)(*((_DWORD *)this + 6) + 76 * argList);
  fseek(*((FILE **)this + 7), *offsetAndElementCount, SEEK_SET);
  return freadLockHandleError(*((FILE **)this + 7), buffer, offsetAndElementCount[1]);
}
