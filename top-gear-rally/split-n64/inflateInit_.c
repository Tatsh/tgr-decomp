#include "../types-n64.h"
//----- (80240240) --------------------------------------------------------
int __fastcall inflateInit_(z_streamp a1, const char *version, int size_size)
{
  return inflateInit2_(a1, 0xF, version, size_size);// 0xF = DEF_WBITS
}
