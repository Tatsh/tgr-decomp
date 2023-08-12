#include "types-win32.h"
//----- (10060FB0) --------------------------------------------------------
int *__cdecl car_10060FB0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int *a6) {
  int v6;      // eax
  int v7;      // edx
  int *result; // eax

  v6 = a2 + 30 * a1;
  *a3 = gCarPartArray[v6].field_14;
  *a4 = gCarPartArray[v6].field_18;
  *a5 = gCarPartArray[v6].field_1C;
  v7 = gCarPartArray[v6].field_20;
  result = a6;
  *a6 = v7;
  return result;
}
