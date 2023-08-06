#include "../../types-win32.h"
//----- (1006B170) --------------------------------------------------------
float *__cdecl sub_1006B170(int a1)
{
  float v1; // ecx
  float v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ebp
  float v8; // [esp+10h] [ebp-24h] BYREF
  float v9; // [esp+14h] [ebp-20h]
  float v10; // [esp+18h] [ebp-1Ch]
  float v11[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v12[3]; // [esp+28h] [ebp-Ch] BYREF

  sub_10074720(&v8, (float *)(a1 + 188), (float *)(a1 + 252));
  v1 = v8;
  v2 = v9;
  *(float *)(a1 + 260) = v10;
  v3 = *(_DWORD *)(a1 + 12);
  *(float *)(a1 + 252) = v1;
  v4 = *(_DWORD *)(a1 + 8);
  *(float *)(a1 + 256) = v2;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a1 + 16);
  v8 = (*(float *)(v3 + 252) + *(float *)(v4 + 252) + *(float *)(v5 + 252) + *(float *)(v6 + 252) + v8)
     / *(float *)(a1 + 44);
  v9 = (*(float *)(v6 + 256) + *(float *)(v5 + 256) + *(float *)(v4 + 256) + *(float *)(v3 + 256) + v9)
     / *(float *)(a1 + 44);
  v10 = v10 / *(float *)(a1 + 44);
  sub_10074770((float *)(a1 + 252), a1 + 188, &v8);
  sub_10074720(v11, (float *)(a1 + 188), (float *)(a1 + 264));
  sub_10074830(v12, (float *)(a1 + 84), v11);
  return sub_10074770((float *)(a1 + 264), a1 + 188, v12);
}
