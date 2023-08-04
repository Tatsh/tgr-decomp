#include "../../types-n64.h"
//----- (80260DD4) --------------------------------------------------------
int sub_80260DD4(char *buffer, const char *format, ...)
{
  int result; // $v0
  va_list va; // [sp+28h] [+8h] BYREF

  va_start(va, format);
  result = sub_80268DC0((char *(__fastcall *)(char *, char *, int))sub_80260DB0, buffer, (char *)format, va);
  if ( result >= 0 )
    buffer[result] = 0;
  return result;
}
