#include "../../types-win32.h"
//----- (1005B200) --------------------------------------------------------
double __thiscall sub_1005B200(int this)
{
  double result; // st7

  result = ((double)(*(_DWORD *)(this + 1068) - *(_DWORD *)(this + 1060)) - (double)*(__int16 *)(this + 1034)) * 0.5
         + (double)*(int *)(this + 1060);
  *(float *)(this + 1040) = result;
  return result;
}
