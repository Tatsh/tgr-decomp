#include "types-win32.h"
//----- (1001BE90) --------------------------------------------------------
HRESULT __cdecl graphics_1001BE90(int a1, int a2, int a3, int a4) {
  int v4;                    // edi
  int v5;                    // esi
  int v6;                    // ebx
  __int64 v7;                // rax
  int v8;                    // eax
  char v9;                   // al
  char v10;                  // al
  char v11;                  // al
  unsigned __int16 v12;      // cx
  int v13;                   // ebp
  IDirect3DDevice2Vtbl *v14; // edx
  IDirect3DDevice2Vtbl *v15; // edx
  HRESULT result;            // eax
  DWORD v17;                 // eax
  _DWORD *v18;               // esi
  LPDIRECT3DVIEWPORT2 v19;   // edi
  unsigned __int8 v20;       // [esp+D4h] [ebp-A0h]
  float v21;                 // [esp+D4h] [ebp-A0h]
  float v22;                 // [esp+D4h] [ebp-A0h]
  float v23;                 // [esp+D4h] [ebp-A0h]
  float v24;                 // [esp+D4h] [ebp-A0h]
  unsigned __int8 v25;       // [esp+D8h] [ebp-9Ch]
  float v26;                 // [esp+D8h] [ebp-9Ch]
  float v27;                 // [esp+D8h] [ebp-9Ch]
  float v28;                 // [esp+D8h] [ebp-9Ch]
  char v29;                  // [esp+DFh] [ebp-95h]
  unsigned __int8 v30;       // [esp+E0h] [ebp-94h]
  float v31;                 // [esp+E0h] [ebp-94h]
  float v32;                 // [esp+E0h] [ebp-94h]
  int v33[8];                // [esp+E4h] [ebp-90h] BYREF
  int v34;                   // [esp+104h] [ebp-70h] BYREF
  float v35;                 // [esp+108h] [ebp-6Ch]
  int v36;                   // [esp+10Ch] [ebp-68h]
  int v37;                   // [esp+110h] [ebp-64h]
  char v38[32];              // [esp+114h] [ebp-60h] BYREF
  char v39[32];              // [esp+134h] [ebp-40h] BYREF
  char v40[32];              // [esp+154h] [ebp-20h] BYREF

  v4 = a1;
  if (a1 < minX) {
    v4 = minX;
    a1 = minX;
  }
  if (a2 < dword_104C5170)
    a2 = dword_104C5170;
  v5 = a3;
  if (a3 > gWidth2) {
    v5 = gWidth2;
    a3 = gWidth2;
  }
  v6 = a4;
  if (a4 > gHeight2) {
    a4 = gHeight2;
    v6 = gHeight2;
  }
  if (dword_104C5158 == -50331649 && dword_104C515C == -133381) {
    v30 = (__int64)(flt_104C5154 * 255.0);
    v25 = (__int64)(flt_104C5160 * 255.0);
    v20 = (__int64)(flt_104C1690 * 255.0);
    v7 = (__int64)(flt_104C0BA8 * 255.0);
  } else {
    v30 = byte_104BBF00;
    LOBYTE(v7) = byte_104C15CC;
    v25 = byte_104BC194;
    v20 = byte_104C5150;
  }
  v29 = v7;
  if (dword_104C1694 == 5260096) {
    off_100A79EC = graphics_1001C690;
    if (!*(_DWORD *)&gUnk06594.gap1C8[12496])
      off_100A79EC = graphics_1001BC90;
    dword_10277380 = 5;
    v8 = dword_10277370;
    if (dword_10277400 == 5)
      LOBYTE(v8) = dword_10277370 & 0xFB;
    else
      LOBYTE(v8) = dword_10277370 | 4;
    dword_10277384 = 6;
    if (dword_10277404 == 6)
      LOBYTE(v8) = v8 & 0xF7;
    else
      v8 |= 8u;
    dword_10277390 = 0;
    if (dword_10277410)
      v9 = v8 | 0x40;
    else
      v9 = v8 & 0xBF;
    dword_104BBE28 = 8;
    dword_10277394 = 8;
    if (dword_10277414 == 8)
      v10 = v9 & 0x7F;
    else
      v10 = v9 | 0x80;
    renderState = 0;
    if (dword_102773FC)
      v11 = v10 | 2;
    else
      v11 = v10 & 0xFD;
    dword_102773A0 = 1;
    if (dword_10277420 == 1)
      BYTE1(v8) &= 0xFBu;
    else
      BYTE1(v8) |= 4u;
    dword_104C16A0 = 8;
    dword_1027738C = 8;
    if (dword_1027740C == 8)
      LOBYTE(v8) = v11 & 0xDF;
    else
      LOBYTE(v8) = v11 | 0x20;
    renderState_0 = 0;
    if (dword_102773F8)
      v8 |= 1u;
    else
      LOBYTE(v8) = v8 & 0xFE;
    dword_10277370 = v8;
    if (v8) {
      if (gIndexedPrimitiveIndexCount) {
        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                   D3DPT_TRIANGLELIST,
                                                   D3DVT_TLVERTEX,
                                                   &gVertices,
                                                   gVertexCount,
                                                   &g_indexedPrimitiveIndices,
                                                   gIndexedPrimitiveIndexCount,
                                                   12);
        graphics_1001C640();
        LOWORD(v8) = dword_10277370;
      }
      if ((v8 & 1) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ZWRITEENABLE, renderState_0);
        LOWORD(v8) = dword_10277370;
        dword_102773F8 = renderState_0;
      }
      if ((v8 & 2) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHATESTENABLE, renderState);
        dword_102773FC = renderState;
        LOWORD(v8) = dword_10277370;
      }
      if ((v8 & 4) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_SRCBLEND, dword_10277380);
        dword_10277400 = dword_10277380;
        LOWORD(v8) = dword_10277370;
      }
      if ((v8 & 8) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_DESTBLEND, dword_10277384);
        dword_10277404 = dword_10277384;
        LOWORD(v8) = dword_10277370;
      }
      if ((v8 & 0x10) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_CULLMODE, dword_10277388);
        dword_10277408 = dword_10277388;
        LOWORD(v8) = dword_10277370;
      }
      if ((v8 & 0x20) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ZFUNC, dword_1027738C);
        dword_1027740C = dword_1027738C;
        LOWORD(v8) = dword_10277370;
      }
      if ((v8 & 0x40) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHAREF, dword_10277390);
        dword_10277410 = dword_10277390;
        LOWORD(v8) = dword_10277370;
      }
      if ((v8 & 0x80u) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHAFUNC, dword_10277394);
        dword_10277414 = dword_10277394;
        BYTE1(v8) = BYTE1(dword_10277370);
      }
      if ((v8 & 0x100) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(
            g_D3DDevice2, D3DRS_FOGSTART | D3DRS_FILLMODE, dword_10277398);
        dword_10277418 = dword_10277398;
        BYTE1(v8) = BYTE1(dword_10277370);
      }
      if ((v8 & 0x200) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(
            g_D3DDevice2, D3DRS_FOGEND | D3DRS_FILLMODE, dword_1027739C);
        dword_1027741C = dword_1027739C;
        BYTE1(v8) = BYTE1(dword_10277370);
      }
      if ((v8 & 0x400) != 0) {
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ALPHABLENDENABLE, dword_102773A0);
        dword_10277420 = dword_102773A0;
      }
      dword_10277370 = 0;
    }
    HIBYTE(v12) = v29;
    LOBYTE(v12) = v30;
    v13 = v20 | ((v25 | (v12 << 8)) << 8);
    g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, (D3DRENDERSTATETYPE)1, 0);
    g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_CULLMODE, 1);
    v33[2] = 0;
    v33[6] = 0;
    v33[7] = 0;
    v33[3] = 1065353216;
    v33[4] = v13;
    v33[5] = -16776961;
    v21 = (float)(gHeight - v6);
    v35 = v21;
    *(float *)&v33[1] = v21;
    v22 = (float)a1;
    *(float *)v33 = v22;
    qmemcpy(v38, v33, sizeof(v38));
    v33[2] = 0;
    v33[3] = 1065353216;
    v33[4] = v13;
    v33[5] = -16776961;
    v33[6] = 1065353216;
    v26 = (float)(gHeight - a2);
    v33[7] = 1065353216;
    *(float *)&v33[1] = v26;
    v31 = (float)a3;
    *(float *)v33 = v31;
    qmemcpy(v39, v33, sizeof(v39));
    *(float *)&v33[1] = v26;
    *(float *)v33 = v22;
    v33[2] = 0;
    v33[3] = 1065353216;
    v33[4] = v13;
    v33[5] = -16776961;
    v33[6] = 0;
    v33[7] = 1065353216;
    v14 = g_D3DDevice2->lpVtbl;
    qmemcpy(v40, v33, sizeof(v40));
    v14->DrawPrimitive(g_D3DDevice2, D3DPT_TRIANGLELIST, D3DVT_TLVERTEX, v38, 3, 9);
    *(float *)v33 = v22;
    v33[2] = 0;
    v33[3] = 1065353216;
    v27 = (float)(gHeight - a4);
    v33[4] = v13;
    *(float *)&v33[1] = v27;
    v33[5] = -16776961;
    v33[6] = 0;
    v33[7] = 0;
    qmemcpy(v38, v33, sizeof(v38));
    *(float *)v33 = v31;
    *(float *)&v33[1] = v27;
    v33[2] = 0;
    v33[3] = 1065353216;
    v33[4] = v13;
    v33[5] = -16776961;
    v33[6] = 1065353216;
    v33[7] = 0;
    qmemcpy(v39, v33, sizeof(v39));
    *(float *)v33 = v31;
    v33[2] = 0;
    v33[3] = 1065353216;
    v23 = (float)(gHeight - a2);
    v35 = v23;
    v15 = g_D3DDevice2->lpVtbl;
    *(float *)&v33[1] = v23;
    v33[4] = v13;
    v33[5] = -16776961;
    v33[6] = 1065353216;
    v33[7] = 1065353216;
    qmemcpy(v40, v33, sizeof(v40));
    v15->DrawPrimitive(g_D3DDevice2, D3DPT_TRIANGLELIST, D3DVT_TLVERTEX, v38, 3, 9);
    result = g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_CULLMODE, dword_10277408);
  } else {
    if (gIndexedPrimitiveIndexCount) {
      g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                 D3DPT_TRIANGLELIST,
                                                 D3DVT_TLVERTEX,
                                                 &gVertices,
                                                 gVertexCount,
                                                 &g_indexedPrimitiveIndices,
                                                 gIndexedPrimitiveIndexCount,
                                                 12);
      graphics_1001C640();
    }
    LODWORD(v35) = gHeight - v6;
    v32 = (float)v30;
    v37 = gHeight - a2;
    v34 = v4;
    v36 = v5;
    v17 = gUnk8C->field_8.dwSize;
    *(float *)(v17 + 4) = v32 * 0.0039215689;
    *(_DWORD *)(v17 + 88) = 1;
    v28 = (float)v25;
    *(float *)(v17 + 8) = v28 * 0.0039215689;
    v24 = (float)v20;
    *(float *)(v17 + 12) = v24 * 0.0039215689;
    v18 = (_DWORD *)gUnk8C->field_8.dwSize;
    v19 = gUnk8C->lpDirect3DViewport2;
    v18[19] = 1;
    v18[22] = 1;
    meth_1001C620(v18);
    v19->lpVtbl->SetBackground(v19, v18[20]);
    result = gUnk8C->lpDirect3DViewport2->lpVtbl->Clear(
        gUnk8C->lpDirect3DViewport2, 1, (LPD3DRECT)&v34, 3);
  }
  return result;
}
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
// 100A81C4: using guessed type int gHeight;
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
// 104BBE28: using guessed type int dword_104BBE28;
// 104BBF00: using guessed type char byte_104BBF00;
// 104BC194: using guessed type char byte_104BC194;
// 104C01A0: using guessed type int gHeight2;
// 104C0BA8: using guessed type float flt_104C0BA8;
// 104C15CC: using guessed type char byte_104C15CC;
// 104C1690: using guessed type float flt_104C1690;
// 104C1694: using guessed type int dword_104C1694;
// 104C16A0: using guessed type int dword_104C16A0;
// 104C5150: using guessed type char byte_104C5150;
// 104C5154: using guessed type float flt_104C5154;
// 104C5158: using guessed type int dword_104C5158;
// 104C515C: using guessed type int dword_104C515C;
// 104C5160: using guessed type float flt_104C5160;
// 104C5164: using guessed type int gWidth2;
// 104C516C: using guessed type int minX;
// 104C5170: using guessed type int dword_104C5170;
// 104C5188: using guessed type int gVertexCount;
// 104C518C: using guessed type int gIndexedPrimitiveIndexCount;
