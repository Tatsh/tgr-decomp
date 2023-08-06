#include "../../types-win32.h"
//----- (10069490) --------------------------------------------------------
char *sub_10069490()
{
  if ( dword_10B01C40 < 256 )
    return (char *)&unk_10AF9BC0 + 64 * ((dword_106C65EC << 8) + dword_10B01C40++ + dword_106C65EC);
  ++dword_10B01C40;
  return (char *)&unk_10AFDBC0 + 16448 * dword_106C65EC;
}
// 106C65EC: using guessed type int dword_106C65EC;
// 10B01C40: using guessed type int dword_10B01C40;
