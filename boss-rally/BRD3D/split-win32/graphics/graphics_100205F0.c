#include "types-win32.h"
//----- (100205F0) --------------------------------------------------------
unsigned __int8 *__cdecl graphics_100205F0(unsigned __int8 *a1) {
  int v1;  // eax
  int *v2; // ecx
  int v3;  // edi

  if (dword_10277370) {
    if (gIndexedPrimitiveIndexCount) {
      g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                 D3DPT_TRIANGLELIST,
                                                 D3DVT_TLVERTEX,
                                                 &gVertices,
                                                 gVertexCount,
                                                 &g_indexedPrimitiveIndices,
                                                 gIndexedPrimitiveIndexCount,
                                                 12);
      v1 = 0;
      if (dword_104C5190 > 0) {
        v2 = dword_104C0BC0;
        do {
          v3 = *v2;
          ++v1;
          ++v2;
          *(_DWORD *)(v3 + 104) = -1;
        } while (v1 < dword_104C5190);
      }
      gIndexedPrimitiveIndexCount = 0;
      gVertexCount = 0;
      dword_104C5190 = 0;
    }
    if ((dword_10277370 & 1) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ZWRITEENABLE, renderState_0);
      dword_102773F8 = renderState_0;
    }
    if ((dword_10277370 & 2) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHATESTENABLE, renderState);
      dword_102773FC = renderState;
    }
    if ((dword_10277370 & 4) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_SRCBLEND, dword_10277380);
      dword_10277400 = dword_10277380;
    }
    if ((dword_10277370 & 8) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_DESTBLEND, dword_10277384);
      dword_10277404 = dword_10277384;
    }
    if ((dword_10277370 & 0x10) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_CULLMODE, dword_10277388);
      dword_10277408 = dword_10277388;
    }
    if ((dword_10277370 & 0x20) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ZFUNC, dword_1027738C);
      dword_1027740C = dword_1027738C;
    }
    if ((dword_10277370 & 0x40) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHAREF, dword_10277390);
      dword_10277410 = dword_10277390;
    }
    if ((dword_10277370 & 0x80u) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHAFUNC, dword_10277394);
      dword_10277414 = dword_10277394;
    }
    if ((dword_10277370 & 0x100) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(
          g_D3DDevice2, D3DRS_FOGSTART | D3DRS_FILLMODE, dword_10277398);
      dword_10277418 = dword_10277398;
    }
    if ((dword_10277370 & 0x200) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(
          g_D3DDevice2, D3DRS_FOGEND | D3DRS_FILLMODE, dword_1027739C);
      dword_1027741C = dword_1027739C;
    }
    if ((dword_10277370 & 0x400) != 0) {
      g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHABLENDENABLE, dword_102773A0);
      dword_10277420 = dword_102773A0;
    }
    dword_10277370 = 0;
  }
  graphics_1001F550(a1[2], a1[1], *a1);
  graphics_1001F550(a1[6], a1[5], a1[4]);
  return a1 + 8;
}
// 10277370: using guessed type int dword_10277370;
// 10277378: using guessed type int renderState_0;
// 1027737C: using guessed type int renderState;
// 10277380: using guessed type int dword_10277380;
// 10277384: using guessed type int dword_10277384;
// 10277388: using guessed type int dword_10277388;
// 1027738C: using guessed type int dword_1027738C;
// 10277390: using guessed type int dword_10277390;
// 10277394: using guessed type int dword_10277394;
// 10277398: using guessed type int dword_10277398;
// 1027739C: using guessed type int dword_1027739C;
// 102773A0: using guessed type int dword_102773A0;
// 102773F8: using guessed type int dword_102773F8;
// 102773FC: using guessed type int dword_102773FC;
// 10277400: using guessed type int dword_10277400;
// 10277404: using guessed type int dword_10277404;
// 10277408: using guessed type int dword_10277408;
// 1027740C: using guessed type int dword_1027740C;
// 10277410: using guessed type int dword_10277410;
// 10277414: using guessed type int dword_10277414;
// 10277418: using guessed type int dword_10277418;
// 1027741C: using guessed type int dword_1027741C;
// 10277420: using guessed type int dword_10277420;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
