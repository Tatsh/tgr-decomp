#include "../../types-win32.h"
//----- (10060F70) --------------------------------------------------------
int __cdecl sub_10060F70(int a1, int a2, int a3)
{
  dword_100B2AD0 = *(&gCarsArray[a1].field_10 + 10 * a2);
  return *((_DWORD *)&gCarsArray[a1].imageData0 + 10 * a2 + a3);
}
// 100B2AD0: using guessed type int dword_100B2AD0;
