//----- (10024550) --------------------------------------------------------
int __cdecl sub_10024550(int a1) {
    int result;           // eax
# 489 * d3dDevice2LPVtbl; // ecx
    _DWORD *v3;           // eax
    int v4;               // eax
    int *v5;              // ecx
    int v6;               // edx
    DWORD v7;             // eax
    int v8;               // edx
    int v9;               // ecx
    int v10;              // ecx
    int v11;              // ecx
    char v12[32768];      // [esp+8Ch] [ebp-8000h] BYREF

    sub_100244E0();
    result = g_D3DDevice2->lpVtbl->BeginScene(g_D3DDevice2);
    if (!result)
        goto LABEL_6;
    for (; result == -2005532222; result = g_D3DDevice2->lpVtbl->BeginScene(g_D3DDevice2)) {
        while (sub_1000B2C0(g_gsu0) == -2005532222)
            ;
    }
    if (!result) {
    LABEL_6:
        renderState = 0;
        dword_102773A0 = 0;
        renderState_0 = 1;
        dword_10277380 = 2;
        dword_10277384 = 1;
        dword_10277388 = 3;
        dword_104C16A0 = 2;
        dword_1027738C = 2;
        dword_10277390 = 8;
        dword_104BBE28 = 7;
        dword_10277394 = 7;
        dword_10277398 = 1;
        dword_1027739C = 1;
        dword_10277370 = -1;
        sub_10024850();
        d3dDevice2LPVtbl = (#489 *)g_D3DDevice2->lpVtbl;
        dword_104C5178 = 8193;
        (*((void(__stdcall **)(IDirect3DDevice2 *, int, _DWORD))d3dDevice2LPVtbl + 23))(
            g_D3DDevice2, 29, 0);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_ZENABLE, 1);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, (D3DRENDERSTATETYPE)1, 0);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_DITHERENABLE, 1);
        if (!g_D3dalphacompar)
            g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_SHADEMODE | 0x20, 1);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, D3DRS_SHADEMODE, 2);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, (D3DRENDERSTATETYPE)5, 0);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, (D3DRENDERSTATETYPE)6, 0);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, (D3DRENDERSTATETYPE)4, 1);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, (D3DRENDERSTATETYPE)18, 2);
        g_D3DDevice2->lpVtbl->SetRenderState(g_D3DDevice2, (D3DRENDERSTATETYPE)17, 2);
        g_indexedPrimitiveIndexCount = 0;
        g_vertexCount = 0;
        dword_104C5190 = 0;
        dword_104C01A4 = 0;
        sub_10074FC0();
        sub_10024A90(a1);
        dword_106C0680 = (int)v12;
        sub_100192F0(20);
        sub_10019300((int)&unk_118AB478, 0, 60);
        v3 = (_DWORD *)dword_106C0680;
        dword_106C0680 += 8;
        *v3 = -1207959552;
        v3[1] = 0;
        sub_10024A90((int)v12);
        if (g_indexedPrimitiveIndexCount) {
            g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                       D3DPT_TRIANGLELIST,
                                                       D3DVT_TLVERTEX,
                                                       &g_vertices,
                                                       g_vertexCount,
                                                       &g_indexedPrimitiveIndices,
                                                       g_indexedPrimitiveIndexCount,
                                                       12);
            v4 = 0;
            if (dword_104C5190 > 0) {
                v5 = dword_104C0BC0;
                do {
                    v6 = *v5;
                    ++v4;
                    ++v5;
                    *(_DWORD *)(v6 + 104) = -1;
                } while (v4 < dword_104C5190);
            }
            g_indexedPrimitiveIndexCount = 0;
            g_vertexCount = 0;
            dword_104C5190 = 0;
        }
        result = g_D3DDevice2->lpVtbl->EndScene(g_D3DDevice2);
        if (!result)
            goto LABEL_18;
        for (; result == -2005532222; result = g_D3DDevice2->lpVtbl->EndScene(g_D3DDevice2)) {
            while (sub_1000B2C0(g_gsu0) == -2005532222)
                ;
        }
        if (!result) {
        LABEL_18:
            dword_10690A24();
            v7 = getTicks();
            v8 = dword_100B5420;
            v9 = v7;
            result = v7 - dword_104C5194;
            dword_104C5194 = v9;
            v10 = dword_100B5424;
            dword_104C5198 = result;
            if (dword_100B5424 < 0) {
                v10 = 0;
                if (dword_100B5420 > 0) {
                    memset32(dword_10B4FFE8, result, dword_100B5420);
                    v10 = v8;
                }
            }
            v11 = v10 + 1;
            dword_100B5424 = v11;
            if (v11 >= v8) {
                v11 = 0;
                dword_100B5424 = 0;
            }
            dword_10B4FFE8[v11] = result;
        }
    }
    return result;
}
// 10024550: using guessed type int __cdecl sub_10024550(int);
// 100AA720: using guessed type int g_D3dalphacompar;
// 100B5420: using guessed type int dword_100B5420;
// 100B5424: using guessed type int dword_100B5424;
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
// 104BBE28: using guessed type int dword_104BBE28;
// 104C01A4: using guessed type int dword_104C01A4;
// 104C16A0: using guessed type int dword_104C16A0;
// 104C5178: using guessed type int dword_104C5178;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 104C5194: using guessed type int dword_104C5194;
// 104C5198: using guessed type int dword_104C5198;
// 10690A24: using guessed type int (*dword_10690A24)(void);
// 106C0680: using guessed type int dword_106C0680;
