#include "../../types-win32.h"
//----- (1001E5D0) --------------------------------------------------------
int __cdecl sub_1001E5D0(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int result; // eax
  int v6; // ebx
  int v7; // edi
  float *v8; // esi
  float *v9; // edi
  float *v10; // eax
  WORD v11; // ax
  int v12; // ecx
  WORD v13; // ax
  int v14; // ecx
  WORD v15; // ax
  int v16; // ecx
  DWORD v17; // ecx
  int *v18; // ecx
  int v19; // edi

  v3 = 27 * a1;
  v4 = 27 * a3;
  result = 108 * a2;
  v6 = dword_104C170C[27 * a3];
  v7 = dword_104C170C[27 * a2];
  if ( (v6 & dword_104C170C[27 * a1] & v7) == 0 )
  {
    if ( v7 | v6 | dword_104C170C[27 * a1] )
    {
      result = (int)sub_1001D420((int)&flt_104C16D0[v3], (int)flt_104C16D0 + result, (int)&flt_104C16D0[v4]);
    }
    else
    {
      v8 = &flt_104C16D0[v3];
      v9 = (float *)((char *)flt_104C16D0 + result);
      v8[9] = flt_104C1720[27 * a1] * flt_118AA08C;
      v8[10] = flt_104C1724[27 * a1] * flt_118AA090;
      v9[9] = flt_104C1720[27 * a2] * flt_118AA08C;
      v10 = &flt_104C16D0[v4];
      v9[10] = flt_104C1724[27 * a2] * flt_118AA090;
      v10[9] = flt_104C1720[27 * a3] * flt_118AA08C;
      v10[10] = flt_104C1724[27 * a3] * flt_118AA090;
      v11 = off_100A79EC(&flt_104C16D0[v4]);
      v12 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v11;
      g_indexedPrimitiveIndexCount = v12 + 1;
      v13 = off_100A79EC(v9);
      v14 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v13;
      g_indexedPrimitiveIndexCount = v14 + 1;
      v15 = off_100A79EC(v8);
      v16 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v15;
      result = g_vertexCount;
      v17 = v16 + 1;
      g_indexedPrimitiveIndexCount = v17;
      if ( ((unsigned int)(g_vertexCount + 3) > 0x200 || v17 + 3 > 0x200) && v17 )
      {
        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(
          g_D3DDevice2,
          D3DPT_TRIANGLELIST,
          D3DVT_TLVERTEX,
          &g_vertices,
          g_vertexCount,
          &g_indexedPrimitiveIndices,
          v17,
          12);
        result = 0;
        if ( dword_104C5190 > 0 )
        {
          v18 = dword_104C0BC0;
          do
          {
            v19 = *v18;
            ++result;
            ++v18;
            *(_DWORD *)(v19 + 104) = -1;
          }
          while ( result < dword_104C5190 );
        }
        g_indexedPrimitiveIndexCount = 0;
        g_vertexCount = 0;
        dword_104C5190 = 0;
      }
    }
  }
  return result;
}
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
// 104C170C: using guessed type int dword_104C170C[];
// 104C1720: using guessed type float flt_104C1720[];
// 104C1724: using guessed type float flt_104C1724[];
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
