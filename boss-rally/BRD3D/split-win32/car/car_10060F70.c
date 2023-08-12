#include "types-win32.h"
//----- (10060F70) --------------------------------------------------------
int __cdecl car_10060F70(int a1, int a2, int a3) {
    dword_100B2AD0 = gCarPartArray[0x1E * a1 + a2].field_10;
    return *((_DWORD *)&gCarPartArray[0x1E * a1 + a2].imageData + a3);
}
// 100B2AD0: using guessed type int dword_100B2AD0;
