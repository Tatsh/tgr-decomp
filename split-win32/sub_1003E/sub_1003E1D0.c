#include "../../types-win32.h"
//----- (1003E1D0) --------------------------------------------------------
int sub_1003E1D0()
{
  #505 *v0; // edi
  void *v1; // edi

  v0 = dword_10ACED34;
  if ( !dword_10ACED34 )
  {
    v0 = (#505 *)&unk_10AF9890;
    dword_10ACED34 = (#505 *)&unk_10AF9890;
  }
  memset(v0, 0, 0x14Cu);
  v1 = (void *)dword_10AD189C;
  if ( !dword_10AD189C )
  {
    v1 = &unk_10AF99DC;
    dword_10AD189C = (int)&unk_10AF99DC;
  }
  memset(v1, 0, 0x14Cu);
  return 1;
}
// 10AD189C: using guessed type int dword_10AD189C;
