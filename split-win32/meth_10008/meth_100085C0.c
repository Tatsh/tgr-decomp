#include "../../types-win32.h"
//----- (100085C0) --------------------------------------------------------
Pod *__thiscall meth_100085C0(Pod *this, char a2)
{
  setPodVtbl(this);
  if ( (a2 & 1) != 0 )
    free(this);
  return this;
}
