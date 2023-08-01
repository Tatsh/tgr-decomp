//----- (100743A0) --------------------------------------------------------
int __cdecl sub_100743A0(int a1, int a2, float a3)
{
  int result; // eax
  double v4; // st7
  double v5; // rt1
  double v6; // st6
  double v7; // rtt
  double v8; // rt0
  float v9; // [esp+8h] [ebp-4h]

  v9 = *(float *)(a2 + 260) * a3;
  result = a1;
  v4 = v9 + *(float *)(a1 + 20);
  v5 = *(float *)(a2 + 264) * a3 + *(float *)(a1 + 40);
  v6 = *(float *)(a2 + 268) * a3 + *(float *)(a1 + 44);
  v7 = *(float *)(a2 + 272) * a3 + *(float *)(a1 + 48);
  v8 = *(float *)(a2 + 252) * a3 + *(float *)(a1 + 12);
  *(float *)(a1 + 16) = *(float *)(a2 + 256) * a3 + *(float *)(a1 + 16);
  *(float *)(a1 + 20) = v4;
  *(float *)(a1 + 40) = v5;
  *(float *)(a1 + 12) = v8;
  *(float *)(a1 + 44) = v6;
  *(float *)(a1 + 48) = v7;
  return result;
}
