#include "../../types-n64.h"
//----- (80242890) --------------------------------------------------------
int __fastcall inflateWrapper(char *next_out, int *total_out, char *next_in, unsigned int avail_in)
{
  int result; // $v0
  int inflateRet; // $v0
  int inflateRet_1; // [sp+1Ch] [-3Ch]
  z_stream zs; // [sp+20h] [-38h] BYREF

  zs.next_in = next_in;
  zs.avail_in = avail_in;
  zs.next_out = next_out;
  zs.avail_out = *total_out;
  if ( zs.avail_out != *total_out )
    return -5;
  zs.zalloc = 0;
  zs.zfree = 0;
  result = inflateInit_(&zs, "1.0.4", 56);
  if ( !result )
  {
    inflateRet = inflate(&zs, 4);
    if ( inflateRet == 1 )
    {
      *total_out = zs.total_out;
      result = inflateEnd(&zs);
    }
    else
    {
      inflateRet_1 = inflateRet;
      inflateEnd(&zs);
      result = inflateRet_1;
    }
  }
  return result;
}
