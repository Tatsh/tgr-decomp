#include "../../types-n64.h"
//----- (8026B5D0) --------------------------------------------------------
int __fastcall sub_8026B5D0(OSThread *a1, int a2, int a3)
{
  int v3; // $s0
  int result; // $v0
  int v5; // $t7
  int v6; // $t9
  OSThread *thread; // $v0

  v3 = sub_80268540();
  if ( (int)a1->queue < *(_DWORD *)&a1->state )
  {
LABEL_6:
    v5 = *(_DWORD *)&a1->state;
    v6 = (int)a1->tlnext + v5 - 1;
    a1->tlnext = (struct OSThread_s *)(v6 % v5);
    if ( !v5 )
      __break(7u, 0);
    if ( v5 == -1 && v6 == 0x80000000 )
      __break(6u, 0);
    *(_DWORD *)(a1->id + 4 * (int)a1->tlnext) = a2;
    ++a1->queue;
    if ( a1->next->next )
    {
      thread = sub_8026B434(a1);
      osStartThread(thread);
    }
    sub_80268560(v3);
    result = 0;
  }
  else
  {
    while ( a3 == 1 )
    {
      MEMORY[0x10] = 8;
      sub_8026B2EC((OSMesgQueue *)&a1->priority);
      if ( (int)a1->queue < *(_DWORD *)&a1->state )
        goto LABEL_6;
    }
    sub_80268560(v3);
    result = -1;
  }
  return result;
}
