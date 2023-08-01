//----- (10008E30) --------------------------------------------------------
int __stdcall sub_10008E30(unk0 *game, const char *filename, int flag) {
    unk0 *gsu0;                                                                         // esi
    IDirect3D2 *d3d2;                                                                   // ecx
    IDirect3DViewport2 *viewport;                                                       // eax
    IDirect3DDevice2 *dev;                                                              // ebx
    unsigned __int8 *v7;                                                                // eax
    HRESULT(__stdcall * beginSceneFunc_1)(IDirect3DDevice2 *);                          // ebp
    int result;                                                                         // eax
    HRESULT(__stdcall * setRenderState)(IDirect3DDevice2 *, D3DRENDERSTATETYPE, DWORD); // ebp
    IDirect3DViewport2Vtbl *d3dviewport2vtbl;                                           // ecx
    double v12;                                                                         // st7
    double v13;                                                                         // st7
    IDirect3DDevice2Vtbl *v14;                                                          // eax
    HRESULT(__stdcall * v15)
    (IDirect3DDevice2 *, D3DPRIMITIVETYPE, D3DVERTEXTYPE, LPVOID, DWORD, DWORD); // eax
    HRESULT(__stdcall * endScene)(IDirect3DDevice2 *);                           // ebp
    int v17;                                                                     // ebp
    int v18;                                                 // [esp+ECh] [ebp-15Ch]
    int v19;                                                 // [esp+F0h] [ebp-158h]
    int v20;                                                 // [esp+F4h] [ebp-154h]
    float v21;                                               // [esp+F8h] [ebp-150h]
    int v22;                                                 // [esp+FCh] [ebp-14Ch]
    int a4;                                                  // [esp+104h] [ebp-144h] BYREF
    HRESULT(__stdcall * beginSceneFunc)(IDirect3DDevice2 *); // [esp+108h] [ebp-140h]
    const char *a3;                                          // [esp+10Ch] [ebp-13Ch] BYREF
    HRESULT(__stdcall * drawPrimitive_1)
    (IDirect3DDevice2 *,
     D3DPRIMITIVETYPE,
     D3DVERTEXTYPE,
     LPVOID,
     DWORD,
     DWORD);                          // [esp+110h] [ebp-138h]
    IDirect3DViewport2 *d3dviewport2; // [esp+114h] [ebp-134h]
    D3DRECT rect;                     // [esp+118h] [ebp-130h] BYREF
    int v29[8];                       // [esp+128h] [ebp-120h] BYREF
    int v30[8];                       // [esp+148h] [ebp-100h] BYREF
    int v31[8];                       // [esp+168h] [ebp-E0h] BYREF
    int v32[8];                       // [esp+188h] [ebp-C0h] BYREF
    int v33[8];                       // [esp+1A8h] [ebp-A0h] BYREF
    int v34[8];                       // [esp+1C8h] [ebp-80h] BYREF
    char v35[32];                     // [esp+1E8h] [ebp-60h] BYREF
    char v36[32];                     // [esp+208h] [ebp-40h] BYREF
    char v37[32];                     // [esp+228h] [ebp-20h] BYREF

    gsu0 = game;
    if (!game)
        return -2147467259;
    if ((game->field_1C & 0x1F) != 31)
        return -2147467259;
    d3d2 = game->d3d2;
    viewport = game->lpDirect3DViewport2;
    dev = game->lpD3DDevice2;
    d3dviewport2 = viewport;
    if (!d3d2 || !dev || !viewport)
        return -2147467259;
    flipSurfaces(game);
    v7 = sub_10009AD0((char *)filename, flag, (char **)&a3, &a4);
    sub_10009EA0((#511 *)&stru_10277680, dev, v7, 256, 256, 11);
    v22 = 0;
    beginSceneFunc = dev->lpVtbl->BeginScene;
    beginSceneFunc_1 = beginSceneFunc;
    for (result = beginSceneFunc(dev);; result = beginSceneFunc(dev)) {
        if (result) {
            for (; result == -2005532222; result = beginSceneFunc_1(dev)) {
                while (sub_1000B2C0(gsu0) == -2005532222)
                    ;
            }
            if (result)
                break;
        }
        setRenderState = dev->lpVtbl->SetRenderState;
        if (!setRenderState(dev, D3DRS_SPECULARENABLE, 0) &&
            !setRenderState(dev, D3DRS_ZENABLE, 1) &&
            !setRenderState(dev, (D3DRENDERSTATETYPE)D3DRENDERSTATE_TEXTUREHANDLE, 0) &&
            !setRenderState(dev, D3DRS_DITHERENABLE, 1)) {
            rect.x2 = g_Width;
            rect.y2 = g_Height;
            d3dviewport2vtbl = d3dviewport2->lpVtbl;
            rect.x1 = 0;
            rect.y1 = 0;
            d3dviewport2vtbl->Clear(d3dviewport2, 1, &rect, D3DCLEAR_ZBUFFER | D3DCLEAR_TARGET);
            setRenderState(dev, D3DRS_SHADEMODE, 1);
            setRenderState(dev, D3DRS_ALPHABLENDENABLE, 0);
            setRenderState(dev, D3DRS_ZWRITEENABLE, 0);
            setRenderState(dev, (D3DRENDERSTATETYPE)D3DRENDERSTATE_WRAPU, 0);
            setRenderState(dev, (D3DRENDERSTATETYPE)D3DRENDERSTATE_WRAPV, 0);
            setRenderState(dev, (D3DRENDERSTATETYPE)D3DRENDERSTATE_TEXTUREPERSPECTIVE, 1);
            setRenderState(
                dev, (D3DRENDERSTATETYPE)D3DRENDERSTATE_TEXTUREHANDLE, *(&stru_10277680 + 3));
            v12 = (double)((g_Width - (int)a3) / 2);
            *(float *)&v19 = v12;
            if (v12 < 0.0)
                *(float *)&v19 = 0.0;
            v13 = (double)((g_Height - a4) / 2);
            *(float *)&v20 = v13;
            if (v13 < 0.0)
                *(float *)&v20 = 0.0;
            v29[0] = v19;
            v29[1] = v20;
            v21 = *(float *)&v19 - -256.0;
            *(float *)&v18 = *(float *)&v20 - -256.0;
            *(float *)v34 = v21;
            v34[1] = v18;
            v29[2] = 0;
            v29[3] = 1065353216;
            v29[6] = 0;
            v29[7] = 0;
            v29[4] = -1;
            v29[5] = -16776961;
            v34[4] = -1;
            v34[2] = 0;
            qmemcpy(v35, v29, sizeof(v35));
            v32[1] = v18;
            v32[0] = v19;
            v34[3] = 1065353216;
            v34[6] = 1065353216;
            v34[7] = 1065353216;
            v34[5] = -16776961;
            v14 = dev->lpVtbl;
            qmemcpy(v36, v34, sizeof(v36));
            v15 = v14->DrawPrimitive;
            v32[2] = 0;
            v32[3] = 1065353216;
            v32[6] = 0;
            v32[7] = 1065353216;
            v32[4] = -1;
            v32[5] = -16776961;
            qmemcpy(v37, v32, sizeof(v37));
            drawPrimitive_1 = v15;
            v15(dev, D3DPT_TRIANGLELIST, D3DVT_TLVERTEX, v35, 3, 9);
            v30[0] = v19;
            v30[1] = v20;
            v30[2] = 0;
            v30[3] = 0x3F800000;
            v30[6] = 0;
            v30[4] = 0xFFFFFFFF;
            v30[5] = 0xFF0000FF;
            v30[7] = 0;
            qmemcpy(v35, v30, sizeof(v35));
            *(float *)v31 = v21;
            v31[1] = v20;
            v31[2] = 0;
            v31[3] = 1065353216;
            v31[4] = 0xFFFFFFFF;
            v31[5] = 0xFF0000FF;
            v31[6] = 0x3F800000;
            v31[7] = 0;
            v33[4] = 0xFFFFFFFF;
            qmemcpy(v36, v31, sizeof(v36));
            *(float *)v33 = v21;
            v33[1] = v18;
            v33[2] = 0;
            v33[3] = 1065353216;
            v33[5] = 0xFF0000FF;
            v33[6] = 1065353216;
            v33[7] = 1065353216;
            qmemcpy(v37, v33, sizeof(v37));
            drawPrimitive_1(dev, D3DPT_TRIANGLELIST, D3DVT_TLVERTEX, v35, 3, 9);
            if (setRenderState(dev, D3DRS_SHADEMODE, 2))
                return 0;
            gsu0 = game;
        }
        endScene = dev->lpVtbl->EndScene;
        result = endScene(dev);
        if (result) {
            for (; result == -2005532222; result = endScene(dev)) {
                while (sub_1000B2C0(gsu0) == -2005532222)
                    ;
            }
            if (result)
                return result;
        }
        v17 = gsu0->lpDDrawSurface2->lpVtbl->Flip(gsu0->lpDDrawSurface2, gsu0->lpDDrawSurface1, 1);
        while (gsu0->lpDDrawSurface2->lpVtbl->GetFlipStatus(gsu0->lpDDrawSurface2, 2))
            ;
        if (++v22 >= 2) {
            sub_1000A0B0((#511 *)&stru_10277680);
            return v17;
        }
        beginSceneFunc_1 = beginSceneFunc;
    }
    return result;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
