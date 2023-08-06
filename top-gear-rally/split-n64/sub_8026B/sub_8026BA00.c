#include "../../types-n64.h"
//----- (8026BA00) --------------------------------------------------------
int sub_8026BA00()
{
  int result; // $v0

  __asm { mfc0    $v0, SR # Status register }
  return result;
}
