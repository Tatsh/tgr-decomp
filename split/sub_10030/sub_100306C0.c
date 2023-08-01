//----- (100306C0) --------------------------------------------------------
float *__cdecl sub_100306C0(float *a1, float *a2, float *a3)
{
  float *result; // eax
  float *v4; // edx
  float *v5; // ecx
  int v6; // edi
  int v7; // esi
  double v8; // st6
  double v9; // st7
  char *v10; // edx
  float *v11; // ecx
  int v12; // ebx
  int v13; // esi
  double v14; // st6
  double v15; // st7
  char v16[64]; // [esp+10h] [ebp-40h] BYREF

  result = a1;
  if ( a1 && a2 )
  {
    if ( a1 == a3 || a2 == a3 )
    {
      v10 = v16;
      v11 = a1 + 2;
      v12 = 4;
      do
      {
        result = a2 + 8;
        v13 = 4;
        do
        {
          v14 = *v11 * *result;
          v15 = result[4] * v11[1] + *(result - 4) * *(v11 - 1) + *(result - 8) * *(v11 - 2);
          ++result;
          v10 += 4;
          --v13;
          *((float *)v10 - 1) = v15 + v14;
        }
        while ( v13 );
        v11 += 4;
        --v12;
      }
      while ( v12 );
      qmemcpy(a3, v16, 0x40u);
    }
    else
    {
      v4 = a3;
      v5 = a1 + 2;
      v6 = 4;
      do
      {
        result = a2 + 8;
        v7 = 4;
        do
        {
          v8 = *(result - 4) * *(v5 - 1);
          v9 = *v5 * *result + result[4] * v5[1] + *(result - 8) * *(v5 - 2);
          ++result;
          ++v4;
          --v7;
          *(v4 - 1) = v9 + v8;
        }
        while ( v7 );
        v5 += 4;
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
