#include "../types-n64.h"
//----- (80240070) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall inflateInit2_(z_streamp z, int w, const char *version, int stream_size)
{
  int result; // $v0
  alloc_func v6; // $t8
  struct internal_state *v7; // $v0
  int v8; // $a3
  int (__fastcall *v9)(int, unsigned __int8 *, unsigned int); // $a1
  int *v10; // $v0

  if ( !version || *version != 49 || stream_size != 56 )
    return -6;
  if ( !z )
    return -2;
  v6 = z->zalloc;
  z->msg = 0;
  if ( !v6 )
  {
    dword_80368AC8 = -312269456;
    dword_80368ACC = 278786289;
    z->opaque = &dword_80368AC8;
    z->zalloc = (alloc_func)sub_8024281C;
  }
  if ( !z->zfree )
    z->zfree = (free_func)sub_80242880;
  v7 = (struct internal_state *)((int (__fastcall *)(void *, int, int))z->zalloc)(z->opaque, 1, 24);
  v8 = w;
  z->state = v7;
  if ( !v7 )
    return -4;
  z->state->blocks = 0;
  z->state->nowrap = 0;
  if ( w < 0 )
  {
    v8 = -w;
    z->state->nowrap = 1;
  }
  if ( v8 >= 8 && v8 < 16 )
  {
    v9 = CalculateChecksum;
    z->state->wbits = v8;
    if ( z->state->nowrap )
      v9 = 0;
    v10 = sub_8023EE84((int)z, (int)v9, 1 << v8);
    z->state->blocks = v10;
    if ( v10 )
    {
      sub_8023FF80(z);
      result = 0;
    }
    else
    {
      inflateEnd(z);
      result = -4;
    }
  }
  else
  {
    inflateEnd(z);
    result = -2;
  }
  return result;
}
// 80240124: write access to const memory at 8028A888 has been detected
// 80240130: write access to const memory at 80368AC8 has been detected
// 80240134: write access to const memory at 80368ACC has been detected
// 802400E8: write access to const memory at 80368AC8 has been detected
// 802400F4: write access to const memory at 80368ACC has been detected
// 8028A888: using guessed type int dword_8028A888;
// 80368AC0: using guessed type int dword_80368AC0;
// 80368AC4: using guessed type int dword_80368AC4;
// 80368AC8: using guessed type int dword_80368AC8;
// 80368ACC: using guessed type int dword_80368ACC;
