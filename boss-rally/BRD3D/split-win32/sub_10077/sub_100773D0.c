#include "types-win32.h"
//----- (100773D0) --------------------------------------------------------
BOOL sub_100773D0() {
  BOOL result; // eax

  if (gDirectInputDevice2A)
    result = gDirectInputDevice2A->lpVtbl->Acquire(gDirectInputDevice2A) >= 0;
  else
    result = 0;
  return result;
}
