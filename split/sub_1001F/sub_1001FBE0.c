//----- (1001FBE0) --------------------------------------------------------
unsigned __int8 *__cdecl sub_1001FBE0(unsigned __int8 *a1) {
    int v1;           // eax
    int *v2;          // ecx
    int v3;           // edi
    int v5;           // eax
    int v6;           // edx
    int v7;           // ecx
    float *v9;        // esi
    float *v10;       // edi
    double v11;       // st7
    float *v12;       // eax
    WORD v13;         // ax
    int v14;          // ecx
    WORD v15;         // ax
    int v16;          // ecx
    WORD v17;         // ax
    int v18;          // ecx
    unsigned int v19; // edx
    int v20;          // ecx
    int v21;          // [esp+A4h] [ebp+4h]

    if (dword_10277370) {
        if (g_indexedPrimitiveIndexCount) {
            g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                       D3DPT_TRIANGLELIST,
                                                       D3DVT_TLVERTEX,
                                                       &g_vertices,
                                                       g_vertexCount,
                                                       &g_indexedPrimitiveIndices,
                                                       g_indexedPrimitiveIndexCount,
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
            g_indexedPrimitiveIndexCount = 0;
            g_vertexCount = 0;
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
            g_D3DDevice2->lpVtbl->SetRenderState(
                g_D3DDevice2, D3DRS_ALPHABLENDENABLE, dword_102773A0);
            dword_10277420 = dword_102773A0;
        }
        dword_10277370 = 0;
    }
    v5 = 27 * a1[5];
    v6 = 27 * a1[6];
    v7 = 27 * a1[4];
    v21 = dword_104C170C[v5];
    if ((dword_104C170C[v7] & dword_104C170C[v6] & v21) == 0) {
        if (v21 | dword_104C170C[v7] | dword_104C170C[v6]) {
            sub_1001FF90((int)&flt_104C16D0[v6], (int)&flt_104C16D0[v5], (int)&flt_104C16D0[v7]);
            return a1 + 8;
        }
        v9 = &flt_104C16D0[v6];
        v10 = &flt_104C16D0[v5];
        v9[9] = flt_104C1720[v6] * flt_118AA08C;
        v9[10] = flt_104C1724[v6] * flt_118AA090;
        v10[9] = flt_104C1720[v5] * flt_118AA08C;
        v11 = flt_104C1724[v5] * flt_118AA090;
        v12 = &flt_104C16D0[v7];
        v10[10] = v11;
        v12[9] = flt_104C1720[v7] * flt_118AA08C;
        v12[10] = flt_104C1724[v7] * flt_118AA090;
        v13 = off_100A79EC(&flt_104C16D0[v7]);
        v14 = g_indexedPrimitiveIndexCount;
        *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v13;
        g_indexedPrimitiveIndexCount = v14 + 1;
        v15 = off_100A79EC(v10);
        v16 = g_indexedPrimitiveIndexCount;
        *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v15;
        g_indexedPrimitiveIndexCount = v16 + 1;
        v17 = off_100A79EC(v9);
        v18 = g_indexedPrimitiveIndexCount;
        v19 = g_vertexCount + 3;
        *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v17;
        v20 = v18 + 1;
        g_indexedPrimitiveIndexCount = v20;
        if (v19 > 0x200 || (unsigned int)(v20 + 3) > 0x200)
            sub_1001D3A0();
    }
    return a1 + 8;
}
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
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
// 104C170C: using guessed type int dword_104C170C[];
// 104C1720: using guessed type float flt_104C1720[];
// 104C1724: using guessed type float flt_104C1724[];
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
