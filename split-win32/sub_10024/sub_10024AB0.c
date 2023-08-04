#include "../../types-win32.h"
//----- (10024AB0) --------------------------------------------------------
void *__cdecl sub_10024AB0(int a1, int a2)
{
  void *result; // eax

  result = dword_1057543C;
  *((_DWORD *)dword_1057543C + 174 * a1) = *((_DWORD *)dword_1057543C + 174 * a2);
  return result;
}
