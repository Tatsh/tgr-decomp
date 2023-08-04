#include "../../types-win32.h"
//----- (1001D3A0) --------------------------------------------------------
void sub_1001D3A0()
{
  int v0; // eax
  int *v1; // ecx
  int v2; // edi

  if ( g_indexedPrimitiveIndexCount )
  {
    g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(
      g_D3DDevice2,
      D3DPT_TRIANGLELIST,
      D3DVT_TLVERTEX,
      &g_vertices,
      g_vertexCount,
      &g_indexedPrimitiveIndices,
      g_indexedPrimitiveIndexCount,
      12);
    v0 = 0;
    if ( dword_104C5190 > 0 )
    {
      v1 = dword_104C0BC0;
      do
      {
        v2 = *v1;
        ++v0;
        ++v1;
        *(_DWORD *)(v2 + 104) = -1;
      }
      while ( v0 < dword_104C5190 );
    }
    g_indexedPrimitiveIndexCount = 0;
    g_vertexCount = 0;
    dword_104C5190 = 0;
  }
}
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
