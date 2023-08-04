#include "../../types-win32.h"
//----- (100079E0) --------------------------------------------------------
int __cdecl sub_100079E0(int a1, float a2, int a3, int a4)
{
  int v4; // ebp
  int v5; // ecx
  float *v6; // eax
  int v7; // edx
  int v8; // edi
  double v9; // st7
  float *v10; // eax
  int v11; // edi
  double v12; // st7
  float *v13; // eax
  int v14; // esi
  double v15; // st7
  int result; // eax

  if ( a2 > 0.0 )
  {
    if ( a2 >= 10.0 )
      a2 = 10.0;
  }
  else
  {
    a2 = 0.0;
  }
  if ( (*(float *)a3 < 0.0 || *(float *)a4 >= 0.0 || *(float *)a3 - *(float *)a4 < 1.0)
    && (*(float *)a4 < 0.0 || *(float *)a3 >= 0.0 || *(float *)a4 - *(float *)a3 < 1.0) )
  {
    v4 = a1;
    v5 = a4 - a3;
    v10 = (float *)a3;
    v7 = a1 - a3;
    v11 = 4;
    do
    {
      v12 = (*(float *)((char *)v10 + v5) - *v10) * a2;
      ++v10;
      --v11;
      *(float *)((char *)v10 + v7 - 4) = v12 + *(v10 - 1);
    }
    while ( v11 );
  }
  else
  {
    v4 = a1;
    v5 = a4 - a3;
    v6 = (float *)a3;
    v7 = a1 - a3;
    v8 = 4;
    do
    {
      v9 = (-*(float *)((char *)v6 + v5) - *v6) * a2;
      ++v6;
      --v8;
      *(float *)((char *)v6 + v7 - 4) = v9 + *(v6 - 1);
    }
    while ( v8 );
  }
  v13 = (float *)(a3 + 16);
  v14 = 36;
  do
  {
    v15 = (*(float *)((char *)v13 + v5) - *v13) * a2;
    ++v13;
    --v14;
    *(float *)((char *)v13 + v7 - 4) = v15 + *(v13 - 1);
  }
  while ( v14 );
  result = *(_DWORD *)(a4 + 156);
  *(_DWORD *)(v4 + 156) = result;
  return result;
}
