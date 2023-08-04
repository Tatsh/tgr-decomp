#include "../../types-win32.h"
//----- (10008970) --------------------------------------------------------
int __thiscall cleanUpPod(Pod *this)
{
  int result; // eax

  if ( this->fp )
    fclose(this->fp);
  if ( this->unkInstance )
    free(this->unkInstance);
  result = 0;
  this->unkInstance = 0;
  this->fp = 0;
  this->elementCount = 0;
  *(_DWORD *)this->header.magic = 0;
  this->header.field_4 = 0;
  this->header.m_cNumPods = 0;
  this->header.last = 0;
  memset(this->filename, 0, 0x400u);
  return result;
}
