//----- (10074B70) --------------------------------------------------------
int __cdecl sub_10074B70(float *a1, int a2, int a3)
{
  float *v3; // ebx
  int v4; // edi
  int v5; // edx
  float *v6; // eax
  float *v7; // ecx
  int v8; // esi
  double v9; // st7
  int v11; // [esp+10h] [ebp-10h]
  float v12[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = a1;
  v4 = a2;
  v11 = 3;
  do
  {
    v5 = a3;
    v6 = (float *)v4;
    v7 = v3;
    v8 = 3;
    do
    {
      v9 = *v7;
      v7 += 4;
      v5 += 4;
      *v6++ = v9;
      --v8;
      *(v6 - 1) = *(float *)(v5 - 4) * v9;
    }
    while ( v8 );
    *(_DWORD *)(v4 + 12) = 0;
    ++v3;
    v4 += 16;
    --v11;
  }
  while ( v11 );
  *(_DWORD *)(a2 + 60) = 1065353216;
  v12[0] = -a1[12];
  v12[1] = -a1[13];
  v12[2] = -a1[14];
  return sub_10074770(a2 + 48, a2, v12);
}
// 10074770: using guessed type _DWORD __cdecl sub_10074770(_DWORD, _DWORD, _DWORD);
