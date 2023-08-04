#include "../../types-win32.h"
//----- (10008750) --------------------------------------------------------
int __thiscall GetNumForNameWrapper(Pod *this, char *ArgList)
{
  int result; // eax

  result = this->lpVtbl->GetNumForName(this, ArgList);
  if ( result == -1 )
    writeToRandomBufferAndExit("GetNumForName: %s not found!", ArgList);
  return result;
}
