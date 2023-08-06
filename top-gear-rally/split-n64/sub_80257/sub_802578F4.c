#include "../../types-n64.h"
//----- (802578F4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int64 *sub_802578F4()
{
  int *v0; // $a1
  __int64 *result; // $v0

  dword_80378F98 = 0;
  v0 = dword_80378DD0;
  result = qword_802A4798;
  do
  {
    v0 += 6;
    result += 3;
    *((_DWORD *)result - 6) = &dword_802A4A08;
    *((_DWORD *)result - 3) = 0;
    *((_DWORD *)result - 4) = 0;
    *((_DWORD *)result - 1) = 0;
    *((_BYTE *)v0 - 11) = 0;
  }
  while ( v0 < dword_80378F50 );
  return result;
}
// 802578FC: write access to const memory at 80378F98 has been detected
// 802A4798: using guessed type __int64 qword_802A4798[];
// 802A4A08: using guessed type int dword_802A4A08;
// 80378DD0: using guessed type int dword_80378DD0[96];
// 80378F50: using guessed type int dword_80378F50[18];
// 80378F98: using guessed type int dword_80378F98;
