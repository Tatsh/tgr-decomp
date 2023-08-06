#include "../../types-win32.h"
//----- (1001F550) --------------------------------------------------------
float *__cdecl sub_1001F550(int a1, int a2, int a3)
{
  int v3; // edi
  float *result; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // edx
  float *v8; // ebx
  float *v9; // ebp
  float *v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // eax
  WORD v14; // ax
  int v15; // ecx
  WORD v16; // ax
  int v17; // ecx
  WORD v18; // ax
  int v19; // ecx
  DWORD v20; // ecx
  int v21; // eax
  int *v22; // ecx
  int v23; // ebp
  float *v24; // [esp+20h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-8h]
  int v26; // [esp+28h] [ebp-4h]
  int v27; // [esp+30h] [ebp+4h]
  int v28; // [esp+34h] [ebp+8h]
  int v29; // [esp+38h] [ebp+Ch]

  v3 = 27 * a2;
  result = (float *)(108 * a1);
  v5 = 27 * a3;
  v6 = dword_104C170C[27 * a1];
  v7 = dword_104C170C[27 * a3];
  if ( (v6 & dword_104C170C[27 * a2] & v7) == 0 )
  {
    if ( v7 | v6 | dword_104C170C[27 * a2] )
    {
      result = sub_1001F7E0(
                 (int)&flt_104C16D0[27 * a1],
                 (int)&flt_104C16D0[v3],
                 (int)&flt_104C16D0[v5],
                 dword_104C172C[27 * a1],
                 dword_104C1730[27 * a1],
                 dword_104C1734[27 * a1]);
    }
    else
    {
      v8 = (float *)((int)flt_104C16D0 + (_DWORD)result);
      v9 = &flt_104C16D0[v3];
      v10 = &flt_104C16D0[v5];
      v8[9] = flt_104C1720[27 * a1] * flt_118AA08C;
      v8[10] = flt_104C1724[27 * a1] * flt_118AA090;
      v9[9] = flt_104C1720[27 * a2] * flt_118AA08C;
      v9[10] = flt_104C1724[27 * a2] * flt_118AA090;
      v10[9] = flt_104C1720[27 * a3] * flt_118AA08C;
      v10[10] = flt_104C1724[27 * a3] * flt_118AA090;
      v29 = dword_104C16DC[27 * a2];
      v27 = dword_104C16E0[27 * a2];
      v28 = dword_104C16E4[27 * a2];
      v24 = (float *)dword_104C16DC[v5];
      v25 = dword_104C16E0[v5];
      v26 = dword_104C16E4[v5];
      v11 = *(int *)((char *)dword_104C16DC + (_DWORD)result);
      dword_104C16DC[v3] = v11;
      dword_104C16DC[v5] = v11;
      v12 = *(int *)((char *)dword_104C16E0 + (_DWORD)result);
      dword_104C16E0[v3] = v12;
      dword_104C16E0[v5] = v12;
      v13 = *(int *)((char *)dword_104C16E4 + (_DWORD)result);
      dword_104C16E4[v3] = v13;
      dword_104C16E4[v5] = v13;
      v14 = off_100A79EC(&flt_104C16D0[v5]);
      v15 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v14;
      g_indexedPrimitiveIndexCount = v15 + 1;
      v16 = off_100A79EC(&flt_104C16D0[v3]);
      v17 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v16;
      g_indexedPrimitiveIndexCount = v17 + 1;
      v18 = off_100A79EC(v8);
      v19 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v18;
      v20 = v19 + 1;
      g_indexedPrimitiveIndexCount = v20;
      if ( ((unsigned int)(g_vertexCount + 3) > 0x200 || v20 + 3 > 0x200) && v20 )
      {
        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(
          g_D3DDevice2,
          D3DPT_TRIANGLELIST,
          D3DVT_TLVERTEX,
          &g_vertices,
          g_vertexCount,
          &g_indexedPrimitiveIndices,
          v20,
          12);
        v21 = 0;
        if ( dword_104C5190 > 0 )
        {
          v22 = dword_104C0BC0;
          do
          {
            v23 = *v22;
            ++v21;
            ++v22;
            *(_DWORD *)(v23 + 104) = -1;
          }
          while ( v21 < dword_104C5190 );
        }
        g_indexedPrimitiveIndexCount = 0;
        g_vertexCount = 0;
        dword_104C5190 = 0;
      }
      dword_104C16DC[v3] = v29;
      result = v24;
      dword_104C16E0[v3] = v27;
      dword_104C16E4[v3] = v28;
      dword_104C16DC[v5] = (int)v24;
      dword_104C16E0[v5] = v25;
      dword_104C16E4[v5] = v26;
    }
  }
  return result;
}
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
// 104C16DC: using guessed type int dword_104C16DC[];
// 104C16E0: using guessed type int dword_104C16E0[];
// 104C16E4: using guessed type int dword_104C16E4[];
// 104C170C: using guessed type int dword_104C170C[];
// 104C1720: using guessed type float flt_104C1720[];
// 104C1724: using guessed type float flt_104C1724[];
// 104C172C: using guessed type int dword_104C172C[];
// 104C1730: using guessed type int dword_104C1730[];
// 104C1734: using guessed type int dword_104C1734[];
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
