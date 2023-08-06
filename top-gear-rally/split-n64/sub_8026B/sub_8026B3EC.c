#include "../../types-n64.h"
//----- (8026B3EC) --------------------------------------------------------
void __fastcall sub_8026B3EC(OSThread *a1, OSThread *a2)
{
  struct OSThread_s *v2; // $t8
  OSPri v3; // $t7
  OSThread *v4; // $t9

  v2 = a1->next;
  v3 = a2->priority;
  v4 = a1;
  if ( a1->next->priority >= v3 )
  {
    do
    {
      v4 = v2;
      v2 = v2->next;
    }
    while ( v2->priority >= v3 );
  }
  a2->next = v4->next;
  v4->next = a2;
  a2->queue = &a1->next;
}
