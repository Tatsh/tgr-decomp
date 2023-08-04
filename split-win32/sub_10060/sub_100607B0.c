#include "../../types-win32.h"
//----- (100607B0) --------------------------------------------------------
int __cdecl sub_100607B0(int a1, int a2)
{
  double v2; // st7
  double v3; // st7
  int result; // eax

  sub_100695A0(a1, a2 + 544);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 488);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 492);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 496);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 516);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 520);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 524);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 824);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 1852);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 1348);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 2396);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 1872);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 2920);
  *(float *)(a1 + 76) = (float)*(int *)(a2 + 1316);
  *(float *)(a1 + 80) = (float)*(int *)(a2 + 2364);
  *(float *)(a1 + 84) = (float)*(int *)(a2 + 1840);
  *(float *)(a1 + 88) = (float)*(int *)(a2 + 2888);
  *(float *)(a1 + 92) = (float)*(char *)(a2 + 1296);
  *(float *)(a1 + 96) = (float)*(char *)(a2 + 2344);
  *(float *)(a1 + 100) = (float)*(char *)(a2 + 1820);
  *(float *)(a1 + 104) = (float)*(char *)(a2 + 2868);
  *(float *)(a1 + 108) = (float)*(unsigned __int8 *)(a2 + 877);
  if ( (**(_DWORD **)(a2 + 10688) & 0xC0000) != 0 )
    v2 = 1.0;
  else
    v2 = 0.0;
  *(float *)(a1 + 112) = v2;
  *(float *)(a1 + 116) = (float)(*(float *)(a2 + 3688) < 0.0);
  if ( *(_DWORD *)(a2 + 4008) == dword_100BD3E0 )
    v3 = 4188888.0;
  else
    v3 = *(float *)(a2 + 4084);
  *(float *)(a1 + 120) = v3;
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 3620);
  *(float *)(a1 + 128) = (float)*(unsigned __int8 *)(a2 + 866);
  *(float *)(a1 + 132) = (float)*(unsigned __int8 *)(a2 + 867);
  *(float *)(a1 + 136) = (float)*(unsigned __int8 *)(a2 + 876);
  *(float *)(a1 + 140) = (float)*(unsigned __int8 *)(a2 + 870);
  *(float *)(a1 + 144) = (float)*(unsigned __int8 *)(a2 + 871);
  *(float *)(a1 + 148) = (float)*(unsigned __int8 *)(a2 + 872);
  result = *(unsigned __int8 *)(a2 + 873);
  *(float *)(a1 + 152) = (float)result;
  *(float *)(a1 + 156) = (float)*(unsigned __int8 *)(a2 + 874);
  return result;
}
