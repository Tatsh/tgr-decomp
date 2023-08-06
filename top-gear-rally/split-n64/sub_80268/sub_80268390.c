#include "../../types-n64.h"
//----- (80268390) --------------------------------------------------------
int __fastcall sub_80268390(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, OSMesgQueue *mq, int a8)
{
  __int64 v9; // [sp+18h] [-8h]

  *a1 = 0;
  a1[1] = 0;
  a1[3] = a6;
  a1[2] = a5;
  if ( a3 || a4 )
  {
    a1[4] = a3;
    a1[5] = a4;
  }
  else
  {
    a1[4] = a5;
    a1[5] = a6;
  }
  a1[6] = mq;
  a1[7] = a8;
  v9 = sub_8026BEB8((int)a1);
  if ( a1 == (_DWORD *)1937243352 )
    sub_8026BE44(v9);
  return 0;
}
