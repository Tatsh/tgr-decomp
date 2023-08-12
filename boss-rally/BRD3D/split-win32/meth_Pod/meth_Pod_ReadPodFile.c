#include "types-win32.h"
//----- (100088D0) --------------------------------------------------------
size_t __thiscall meth_Pod_ReadPodFile(Pod *this) {
  char *v2;         // ebp
  FILE *fp;         // eax
  void *v4;         // eax
  int v5;           // edx
  int elementCount; // [esp-4h] [ebp-14h]

  v2 = this->filename;
  fp = fopenReadBinary(this->filename);
  this->fp = fp;
  freadLockHandleError(fp, &this->header, 0x10u);
  if (strncmp(this->header.magic, aPod, 3u))
      s_noreturn_writeToBufferExit("%s is not a valid POD file", v2);
  elementCount = 76 * this->header.m_cNumPods;
  this->elementCount = elementCount;
  v4 = (void *)malloc(elementCount);
  v5 = this->header.last;
  this->unkInstance = v4;
  fseek(this->fp, v5, 0);
  return freadLockHandleError(this->fp, this->unkInstance, this->elementCount);
}
