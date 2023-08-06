#include "../../types-n64.h"
//----- (802642E0) --------------------------------------------------------
int __fastcall sub_802642E0(OSMesgQueue *a1, _DWORD *a2, int a3)
{
  int v3; // $s0
  int result; // $v0
  s32 v5; // $t4
  int v6; // $t2
  OSThread *v7; // $v0

  v3 = sub_80268540();
  if ( a1->validCount )
  {
LABEL_5:
    if ( a2 )
      *a2 = a1->msg[a1->first];
    v5 = a1->msgCount;
    v6 = a1->first + 1;
    a1->first = v6 % v5;
    if ( !v5 )
      __break(7u, 0);
    if ( v5 == -1 && v6 == 0x80000000 )
      __break(6u, 0);
    --a1->validCount;
    if ( a1->fullqueue->next )
    {
      v7 = sub_8026B434((OSThread *)&a1->fullqueue);
      osStartThread(v7);
    }
    sub_80268560(v3);
    result = 0;
  }
  else
  {
    while ( a3 )
    {
      MEMORY[0x10] = 8;
      sub_8026B2EC(a1);
      if ( a1->validCount )
        goto LABEL_5;
    }
    sub_80268560(v3);
    result = -1;
  }
  return result;
}
