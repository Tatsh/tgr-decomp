#include "../../types-win32.h"
//----- (10017C80) --------------------------------------------------------
char *__cdecl sub_10017C80(int a1, float a2)
{
  double v2; // st7
  float v4; // [esp+8h] [ebp+8h]

  v2 = sub_10017CD0(a1, SLODWORD(a2));
  if ( v2 <= 0.0 )
  {
    byte_104AFF20 = 0;
  }
  else
  {
    byte_104AFF20 = 43;
    v4 = v2;
    CreateMinuteSecondsString(byte_104AFF21, v4);
  }
  return &byte_104AFF20;
}
// 104AFF20: using guessed type char byte_104AFF20;
