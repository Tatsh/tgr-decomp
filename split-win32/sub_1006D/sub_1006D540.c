#include "../../types-win32.h"
//----- (1006D540) --------------------------------------------------------
int __cdecl sub_1006D540(float *a1, char a2)
{
  int v2; // esi
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  int result; // eax

  v2 = 0;
  if ( (a2 & 3) != 0 )
  {
    v3 = a1[1] + a1[2] + *a1;
    if ( (a2 & 1) != 0 && v3 > 1.5 )
    {
      v2 = 1;
    }
    else if ( (a2 & 2) != 0 && v3 < -1.5 )
    {
      v2 = 2;
    }
  }
  if ( (a2 & 0xC) != 0 )
  {
    v4 = a1[1] + *a1 - a1[2];
    if ( (a2 & 4) != 0 && v4 > 1.5 )
    {
      v2 |= 4u;
    }
    else if ( (a2 & 8) != 0 && v4 < -1.5 )
    {
      v2 |= 8u;
    }
  }
  if ( (a2 & 0x30) != 0 )
  {
    v5 = *a1 - a1[1] + a1[2];
    if ( (a2 & 0x10) != 0 && v5 > 1.5 )
    {
      v2 |= 0x10u;
    }
    else if ( (a2 & 0x20) != 0 && v5 < -1.5 )
    {
      v2 |= 0x20u;
    }
  }
  if ( (a2 & 0xC0) == 0 )
    goto LABEL_29;
  v6 = *a1 - a1[1] - a1[2];
  if ( (a2 & 0x40) != 0 && v6 > 1.5 )
    return v2 | 0x40;
  if ( a2 < 0 && v6 < -1.5 )
    result = v2 | 0x80;
  else
LABEL_29:
    result = v2;
  return result;
}
