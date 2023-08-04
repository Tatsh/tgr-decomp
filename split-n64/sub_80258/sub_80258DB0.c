#include "../../types-n64.h"
//----- (80258DB0) --------------------------------------------------------
void __fastcall sub_80258DB0(int a1, int a2)
{
  *(float *)(a1 + 32) = 0.0;
  *(float *)(a1 + 16) = 0.0;
  *(float *)a1 = 0.0;
  *(float *)(a1 + 4) = -*(float *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  *(float *)(a1 + 20) = -*(float *)a2;
  *(float *)(a1 + 24) = -*(float *)(a2 + 4);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)a2;
}
