#include "../../types-win32.h"
//----- (1002BDD0) --------------------------------------------------------
void __cdecl sub_1002BDD0(_BYTE *a1, int a2)
{
  int v2; // ecx
  __int16 v4; // dx

  v2 = a2;
  if ( a2 > 0 )
  {
    do
    {
      HIBYTE(v4) = *a1;
      LOBYTE(v4) = a1[1];
      *(_WORD *)a1 = v4;
      HIBYTE(v4) = a1[2];
      LOBYTE(v4) = a1[3];
      *((_WORD *)a1 + 1) = v4;
      LOBYTE(v4) = a1[5];
      HIBYTE(v4) = a1[4];
      *((_WORD *)a1 + 2) = v4;
      LOBYTE(v4) = a1[7];
      HIBYTE(v4) = a1[6];
      *((_WORD *)a1 + 3) = v4;
      LOBYTE(v4) = a1[9];
      HIBYTE(v4) = a1[8];
      *((_WORD *)a1 + 4) = v4;
      LOBYTE(v4) = a1[11];
      HIBYTE(v4) = a1[10];
      *((_WORD *)a1 + 5) = v4;
      a1 += 16;
      --v2;
    }
    while ( v2 );
  }
}
