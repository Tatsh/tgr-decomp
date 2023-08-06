#include "../../types-n64.h"
//----- (8024D6B8) --------------------------------------------------------
int sub_8024D6B8()
{
  int *v0; // $s0

  sub_80246E10();
  sub_80246E10();
  v0 = (int *)byte_80369B98;
  do
  {
    sub_80246E10();
    v0 += 5;
  }
  while ( v0 != &dword_80369CD8 );
  return sub_80246BCC();
}
// 8028D480: using guessed type int dword_8028D480;
// 8028D490: using guessed type int dword_8028D490;
// 8028DB58: using guessed type char byte_8028DB58;
// 80369BD4: using guessed type int dword_80369BD4;
// 80369CD8: using guessed type int dword_80369CD8;
