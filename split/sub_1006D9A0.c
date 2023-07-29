//----- (1006D9A0) --------------------------------------------------------
int __cdecl sub_1006D9A0(float *a1, float *a2)
{
  float *v2; // ebx
  int v3; // esi
  float *v4; // edi
  int *v6; // ecx
  int v7; // edx
  int v8; // eax
  double v9; // st7
  double v10; // st6
  float v12; // [esp+Ch] [ebp-1Ch]
  int v13[3]; // [esp+10h] [ebp-18h] BYREF
  float v14[3]; // [esp+1Ch] [ebp-Ch] BYREF
  float v15; // [esp+2Ch] [ebp+4h]
  float v16; // [esp+30h] [ebp+8h]

  v2 = a1;
  v3 = 0;
  v4 = a1;
  do
  {
    if ( sub_1006D850(v4, &a1[3 * (++v3 % 3)]) )
      return 1;
    v4 += 3;
  }
  while ( v3 < 3 );
  v6 = v13;
  v7 = 3;
  do
  {
    if ( *(float *)((char *)v6 + (char *)a2 - (char *)v13) >= 0.0 )
      v8 = 1;
    else
      v8 = -1;
    *v6++ = v8;
    --v7;
  }
  while ( v7 );
  v9 = (double)v13[0];
  v16 = (float)v13[1];
  v12 = (float)v13[2];
  v10 = (a1[2] * a2[2] + a1[1] * a2[1] + *a2 * *a1) / (*a2 * v9 + a2[1] * v16 + a2[2] * v12);
  v15 = v10;
  if ( (v10 - -0.5) * (v15 - 0.5) > 0.0 )
    return 0;
  v14[0] = v15 * v9;
  v14[1] = v15 * v16;
  v14[2] = v15 * v12;
  return sub_1006D660((int)v2, a2, (int)v14);
}
