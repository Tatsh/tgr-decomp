#include "../../types-n64.h"
//----- (80214A88) --------------------------------------------------------
int __fastcall sub_80214A88(int a1)
{
  int v2; // $v0
  int *v3; // $a0

  sub_8022F4F8();
  sub_8022F514();
  sub_8022F5D0(12);
  sub_8022F530(255, 255, 255, 255, 245, 0);
  sub_80246F90(115, 180, 410, 152, 3, 0, 0);
  formatter("IF THE RUMBLE PAK IS TO BE USED,", 65, 106);
  formatter("REMOVE THE CONTROLLER PAK AND", 65, 119);
  formatter("INSERT THE RUMBLE PAK INTO THE", 65, 132);
  formatter("CONTROLLER.  PRESS THE A BUTTON", 65, 145);
  formatter("TO CONTINUE.", 65, 158);
  v2 = 0;
  do
  {
    if ( a1 || !v2 )
    {
      v3 = &dword_8036A8E0[87 * v2];
      if ( (*v3 & 0x8030) != 0 )
      {
        sub_80255910(v3, 32816);
        return 1;
      }
      ++v2;
    }
    else
    {
      ++v2;
    }
  }
  while ( v2 != 2 );
  return 0;
}
// 8036A8E0: using guessed type int dword_8036A8E0[];
