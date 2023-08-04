#include "../../types-n64.h"
//----- (80257C44) --------------------------------------------------------
int sub_80257C44()
{
  __int64 *v0; // $v1
  int result; // $v0
  int v2; // $t8
  int *v3; // $a1
  int v4; // $a2
  unsigned int v5; // $a0
  int *v6; // $a1
  int v7; // $a2

  v0 = qword_802A4920;
  result = 0;
  do
  {
    if ( *((_DWORD *)v0 + 2) || *((_DWORD *)v0 + 3) )
    {
      v3 = &dword_80378F50[3 * result];
      if ( *(_DWORD *)v0 >= (unsigned int)(v3[1] + *v3) )
      {
        v4 = v3[2];
        if ( v4 )
        {
          *(_DWORD *)v0 -= v4;
        }
        else
        {
          *((_DWORD *)v0 + 2) = 0;
          *((_DWORD *)v0 + 3) = 0;
        }
        v2 = *((_DWORD *)v0 + 8);
      }
      else
      {
        v2 = *((_DWORD *)v0 + 8);
      }
    }
    else
    {
      v2 = *((_DWORD *)v0 + 8);
    }
    if ( v2 || *((_DWORD *)v0 + 9) )
    {
      v5 = *((_DWORD *)v0 + 6);
      v6 = &dword_80378F50[3 * result];
      if ( v5 >= v6[4] + v6[3] )
      {
        v7 = v6[5];
        if ( v7 )
        {
          *((_DWORD *)v0 + 6) = v5 - v7;
        }
        else
        {
          *((_DWORD *)v0 + 8) = 0;
          *((_DWORD *)v0 + 9) = 0;
        }
        result += 2;
      }
      else
      {
        result += 2;
      }
    }
    else
    {
      result += 2;
    }
    v0 += 6;
  }
  while ( result != 6 );
  return result;
}
// 802A4920: using guessed type __int64 qword_802A4920[];
// 80378F50: using guessed type int dword_80378F50[18];
