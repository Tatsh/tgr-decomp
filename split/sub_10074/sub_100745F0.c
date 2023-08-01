//----- (100745F0) --------------------------------------------------------
int __cdecl sub_100745F0(int a1, int a2, float a3)
{
  double v3; // st6
  double v4; // st7
  double v5; // st7
  double v6; // st5
  int result; // eax
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+8h] [ebp-8h]
  float v10; // [esp+Ch] [ebp-4h]

  v3 = a3 * *(float *)(a2 + 16);
  v4 = a3 * *(float *)(a2 + 20);
  *(float *)a1 = a3 * *(float *)(a2 + 12) + *(float *)a2;
  v9 = v4;
  *(float *)(a1 + 4) = *(float *)(a2 + 4) + v3;
  *(float *)(a1 + 8) = *(float *)(a2 + 8) + v9;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  v5 = a3 * *(float *)(a2 + 60);
  v8 = a3 * *(float *)(a2 + 56);
  v6 = a3 * *(float *)(a2 + 64);
  *(float *)(a1 + 24) = a3 * *(float *)(a2 + 52) + *(float *)(a2 + 24);
  v10 = v6;
  *(float *)(a1 + 28) = *(float *)(a2 + 28) + v8;
  *(float *)(a1 + 32) = *(float *)(a2 + 32) + v5;
  *(float *)(a1 + 36) = *(float *)(a2 + 36) + v10;
  sub_100741B0((float *)(a1 + 24));
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  result = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
