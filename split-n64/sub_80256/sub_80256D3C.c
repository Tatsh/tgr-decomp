#include "../../types-n64.h"
//----- (80256D3C) --------------------------------------------------------
int sub_80256D3C()
{
  int *v0; // $a1
  int v1; // $a0
  int result; // $v0
  int v3; // $a2
  __int64 *v4; // $a3
  unsigned int v5; // $t0
  BOOL v6; // $at

  v0 = dword_80378DD0;
  v1 = 0;
  do
  {
    result = *((unsigned __int8 *)v0 + 13);
    v0 += 6;
    if ( result )
    {
      v3 = dword_803787D0[result - 1];
      v4 = &qword_802A4798[v1];
      v5 = HIDWORD(qword_802A4798[v1]);
      if ( *(_DWORD *)v3 + v3 + 40 >= v5 )
      {
        v6 = v0 < dword_80378F50;
        goto LABEL_9;
      }
      if ( *(_BYTE *)(v3 + 14) )
      {
        *(_DWORD *)v4 = v5 - *(_DWORD *)(v3 + 8);
      }
      else
      {
        *((_DWORD *)v4 + 2) = 0;
        *((_DWORD *)v4 + 3) = 0;
      }
    }
    v6 = v0 < dword_80378F50;
LABEL_9:
    v1 += 3;
  }
  while ( v6 );
  return result;
}
// 802A4798: using guessed type __int64 qword_802A4798[];
// 803787D0: using guessed type int dword_803787D0[128];
// 80378DD0: using guessed type int dword_80378DD0[96];
// 80378F50: using guessed type int dword_80378F50[18];
