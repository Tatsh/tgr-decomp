#include "../../types-n64.h"
//----- (8026B434) --------------------------------------------------------
struct OSThread_s *__fastcall sub_8026B434(OSThread *a1)
{
  struct OSThread_s *result; // $v0

  result = a1->next;
  a1->next = a1->next->next;
  return result;
}
