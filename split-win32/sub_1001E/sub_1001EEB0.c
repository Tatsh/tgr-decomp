#include "../../types-win32.h"
//----- (1001EEB0) --------------------------------------------------------
float *__cdecl sub_1001EEB0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  float *result; // eax
  int v7; // edi
  float *v8; // ecx
  float *v9; // edx
  float *v10; // edx
  unsigned int v11; // ecx
  double v12; // st7
  WORD v13; // ax
  int v14; // ecx
  WORD v15; // ax
  int v16; // ecx
  WORD v17; // ax
  int v18; // ecx
  DWORD v19; // edx
  DWORD v20; // ecx
  int *v21; // ecx
  int v22; // edx
  int v23; // edi
  _DWORD *v24; // esi
  WORD v25; // ax
  int v26; // ecx
  WORD v27; // ax
  int v28; // ecx
  WORD v29; // ax
  int v30; // ecx
  DWORD v31; // edx
  DWORD v32; // ecx
  int *v33; // ecx
  int v34; // edx
  float *v35; // [esp+10h] [ebp-22Ch] BYREF
  int v36; // [esp+14h] [ebp-228h]
  int v37; // [esp+18h] [ebp-224h]
  float v38; // [esp+1Ch] [ebp-220h]
  _DWORD v39[8]; // [esp+20h] [ebp-21Ch] BYREF
  char v40; // [esp+40h] [ebp-1FCh] BYREF
  int v41[15]; // [esp+5Ch] [ebp-1E0h] BYREF
  _DWORD v42[105]; // [esp+98h] [ebp-1A4h] BYREF

  *(_DWORD *)(a3 + 64) = 0;
  *(_DWORD *)(a2 + 64) = a3 + 64;
  *(_DWORD *)(a1 + 64) = a2 + 64;
  v35 = (float *)(a1 + 64);
  *(_DWORD *)(a3 + 64) = a1 + 64;
  v36 = 3;
  result = (float *)sub_1001DEF0((int)&v35);
  v7 = v36;
  if ( v36 < 3 )
    goto LABEL_8;
  result = (float *)sub_1001D9F0((int)&v35);
  v7 = v36;
  if ( v36 < 3 )
    goto LABEL_8;
  result = (float *)sub_1001DB30((int)&v35);
  v7 = v36;
  if ( v36 < 3 )
    goto LABEL_8;
  result = (float *)sub_1001DDB0((int)&v35);
  v7 = v36;
  if ( v36 < 3 )
    goto LABEL_8;
  result = (float *)sub_1001E030((int)&v35);
  v7 = v36;
  if ( v36 >= 3
    && (result = (float *)sub_1001DC70((int)&v35), v7 = v36, v36 >= 3)
    && (result = (float *)sub_1001D810((int)&v35), v7 = v36, v36 >= 3) )
  {
    v37 = 0;
    v10 = v35;
    result = (float *)&v40;
    do
    {
      v11 = (unsigned int)v10;
      v10 = *(float **)v10;
      v35 = v10;
      v38 = 1.0 / *(float *)(v11 + 24);
      *result = v38;
      *(result - 8) = *(float *)(v11 + 4) * flt_104BBF08 * v38 + flt_104C0BB0;
      *(result - 7) = *(float *)(v11 + 8) * flt_104BC198 * *result + flt_104C0BB8;
      v12 = *(float *)(v11 + 12) * flt_100A79E0;
      *((_DWORD *)result - 5) = a4;
      *((_DWORD *)result - 4) = a5;
      *((_DWORD *)result - 3) = a6;
      *(result - 6) = v12 * *result + flt_100A79E4;
      result[1] = *(float *)(v11 + 16) * flt_118AA08C;
      result[2] = *(float *)(v11 + 20) * flt_118AA090;
      if ( v11 >= (unsigned int)dword_104C01A8 && v11 < (unsigned int)&flt_104C0BA8 )
      {
        *(_DWORD *)v11 = dword_104C0BBC;
        v10 = v35;
        v7 = v36;
        dword_104C0BBC = v11;
      }
      result += 15;
      ++v37;
    }
    while ( v37 < v7 );
    if ( v7 == 3 )
    {
      v13 = off_100A79EC(v42);
      v14 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v13;
      g_indexedPrimitiveIndexCount = v14 + 1;
      v15 = off_100A79EC(v41);
      v16 = g_indexedPrimitiveIndexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v15;
      g_indexedPrimitiveIndexCount = v16 + 1;
      v17 = off_100A79EC(v39);
      v18 = g_indexedPrimitiveIndexCount;
      v19 = g_vertexCount;
      *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v17;
      result = (float *)(v19 + 3);
      v20 = v18 + 1;
      g_indexedPrimitiveIndexCount = v20;
      if ( v19 + 3 > 0x200 || (result = (float *)(v20 + 3), v20 + 3 > 0x200) )
      {
        if ( v20 )
        {
          g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(
            g_D3DDevice2,
            D3DPT_TRIANGLELIST,
            D3DVT_TLVERTEX,
            &g_vertices,
            v19,
            &g_indexedPrimitiveIndices,
            v20,
            12);
          result = 0;
          if ( dword_104C5190 > 0 )
          {
            v21 = dword_104C0BC0;
            do
            {
              v22 = *v21;
              result = (float *)((char *)result + 1);
              ++v21;
              *(_DWORD *)(v22 + 104) = -1;
            }
            while ( (int)result < dword_104C5190 );
          }
          g_indexedPrimitiveIndexCount = 0;
          g_vertexCount = 0;
          dword_104C5190 = 0;
        }
      }
    }
    else if ( v7 > 2 )
    {
      v23 = v7 - 2;
      v24 = v42;
      do
      {
        v25 = off_100A79EC(v24);
        v26 = g_indexedPrimitiveIndexCount;
        *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v25;
        g_indexedPrimitiveIndexCount = v26 + 1;
        v27 = off_100A79EC(v24 - 15);
        v28 = g_indexedPrimitiveIndexCount;
        *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v27;
        g_indexedPrimitiveIndexCount = v28 + 1;
        v29 = off_100A79EC(v39);
        v30 = g_indexedPrimitiveIndexCount;
        v31 = g_vertexCount;
        *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v29;
        result = (float *)(v31 + 3);
        v32 = v30 + 1;
        g_indexedPrimitiveIndexCount = v32;
        if ( v31 + 3 > 0x200 || (result = (float *)(v32 + 3), v32 + 3 > 0x200) )
        {
          if ( v32 )
          {
            g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(
              g_D3DDevice2,
              D3DPT_TRIANGLELIST,
              D3DVT_TLVERTEX,
              &g_vertices,
              v31,
              &g_indexedPrimitiveIndices,
              v32,
              12);
            result = 0;
            if ( dword_104C5190 > 0 )
            {
              v33 = dword_104C0BC0;
              do
              {
                v34 = *v33;
                result = (float *)((char *)result + 1);
                ++v33;
                *(_DWORD *)(v34 + 104) = -1;
              }
              while ( (int)result < dword_104C5190 );
            }
            g_indexedPrimitiveIndexCount = 0;
            g_vertexCount = 0;
            dword_104C5190 = 0;
          }
        }
        v24 += 15;
        --v23;
      }
      while ( v23 );
    }
  }
  else
  {
LABEL_8:
    if ( v7 > 0 )
    {
      v8 = v35;
      v9 = (float *)dword_104C0BBC;
      do
      {
        result = v8;
        v8 = *(float **)v8;
        v35 = v8;
        if ( result >= (float *)dword_104C01A8 && result < &flt_104C0BA8 )
        {
          *(_DWORD *)result = v9;
          v8 = v35;
          v9 = result;
          dword_104C0BBC = (int)result;
        }
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
// 1001EFD6: conditional instruction was optimized away because of '%var_228.4>=3'
// 100A79E0: using guessed type float flt_100A79E0;
// 100A79E4: using guessed type float flt_100A79E4;
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
// 104BBF08: using guessed type float flt_104BBF08;
// 104BC198: using guessed type float flt_104BC198;
// 104C0BA8: using guessed type float flt_104C0BA8;
// 104C0BB0: using guessed type float flt_104C0BB0;
// 104C0BB8: using guessed type float flt_104C0BB8;
// 104C0BBC: using guessed type int dword_104C0BBC;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
