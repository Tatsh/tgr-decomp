//----- (1006EF80) --------------------------------------------------------
void __cdecl sub_1006EF80(int a1, float *a2)
{
  int v4; // ebp
  int v5; // ecx
  int v6; // ebx
  double v7; // st7
  double v8; // rt0
  float v9; // [esp+0h] [ebp-20h]
  int v10; // [esp+24h] [ebp+4h]
  int v11; // [esp+28h] [ebp+8h]

  a2[2] = *(float *)(a1 + 132) * -110.0;
  a2[3] = *(float *)(a1 + 136) * -110.0;
  a2[4] = *(float *)(a1 + 140) * -110.0;
  v4 = *(char *)(*(_DWORD *)(a1 + 8) + 416);
  v9 = *(float *)(a1 + 132) * *(float *)(a1 + 132)
     + *(float *)(a1 + 136) * *(float *)(a1 + 136)
     + *(float *)(a1 + 140) * *(float *)(a1 + 140);
  v5 = *(char *)(*(_DWORD *)(a1 + 16) + 416);
  v6 = *(char *)(*(_DWORD *)(a1 + 4) + 416);
  v10 = *(char *)(*(_DWORD *)(a1 + 12) + 416);
  v11 = v5;
  if ( sqrt_(v9) > 4.0 && dword_104BBE08 != 3 && (v6 == 4 || v4 == 4 || v10 == 4 || v11 == 4) )
  {
    v7 = *(float *)(a1 + 140) * -220.0 + a2[4];
    v8 = *(float *)(a1 + 132) * -220.0 + a2[2];
    a2[3] = *(float *)(a1 + 136) * -220.0 + a2[3];
    a2[4] = v7;
    a2[2] = v8;
  }
}
// 104BBE08: using guessed type int dword_104BBE08;
