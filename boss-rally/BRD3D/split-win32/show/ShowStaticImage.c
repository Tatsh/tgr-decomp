#include "../../types-win32.h"
//----- (10008E30) --------------------------------------------------------
int __stdcall ShowStaticImage(unk0 *game, char *filename, int flag) {
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
    HRESULT(__stdcall * drawPrimitive)
    (IDirect3DDevice2 *, D3DPRIMITIVETYPE, D3DVERTEXTYPE, LPVOID, DWORD, DWORD); // eax
    HRESULT(__stdcall * endScene)(IDirect3DDevice2 *);                           // ebp
    int v17;                                                                     // ebp
    D3DVALUE v18;                                            // [esp+ECh] [ebp-15Ch]
    float v19;                                               // [esp+F0h] [ebp-158h]
    float v20;                                               // [esp+F4h] [ebp-154h]
    D3DVALUE v21;                                            // [esp+F8h] [ebp-150h]
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
    D3DTLVERTEX v29;                  // [esp+128h] [ebp-120h] BYREF
    D3DTLVERTEX v30;                  // [esp+148h] [ebp-100h] BYREF
    D3DTLVERTEX v31;                  // [esp+168h] [ebp-E0h] BYREF
    D3DTLVERTEX v32;                  // [esp+188h] [ebp-C0h] BYREF
    D3DTLVERTEX v33;                  // [esp+1A8h] [ebp-A0h] BYREF
    D3DTLVERTEX v34;                  // [esp+1C8h] [ebp-80h] BYREF
    D3DTLVERTEX v35;                  // [esp+1E8h] [ebp-60h] BYREF
    D3DTLVERTEX v36;                  // [esp+208h] [ebp-40h] BYREF
    D3DTLVERTEX v37;                  // [esp+228h] [ebp-20h] BYREF

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
    v7 = sub_10009AD0(filename, flag, (char **)&a3, &a4);
    meth_10009EA0(&stru_10277680, dev, v7, 256, 256, 11);
    v22 = 0;
    beginSceneFunc = dev->lpVtbl->BeginScene;
    beginSceneFunc_1 = beginSceneFunc;
    for (result = beginSceneFunc(dev);; result = beginSceneFunc(dev)) {
        if (result) {
            for (; result == -2005532222; result = beginSceneFunc_1(dev)) {
                while (meth_1000B2C0(gsu0) == 2289435074)
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
            v19 = v12;
            if (v12 < 0.0)
                v19 = 0.0;
            v13 = (double)((g_Height - a4) / 2);
            v20 = v13;
            if (v13 < 0.0)
                v20 = 0.0;
            v29.sx = v19;
            v29.sy = v20;
            v21 = v19 - -256.0;
            v18 = v20 - -256.0;
            v34.sx = v21;
            v34.sy = v18;
            v29.sz = 0.0;
            v29.rhw = 1.0;
            v29.tu = 0.0;
            v29.tv = 0.0;
            v29.color = -1;
            v29.specular = 0xFF0000FF;
            v34.color = -1;
            v34.sz = 0.0;
            qmemcpy(&v35, &v29, sizeof(v35));
            v32.sy = v18;
            v32.sx = v19;
            v34.rhw = 1.0;
            v34.tu = 1.0;
            v34.tv = 1.0;
            v34.specular = 0xFF0000FF;
            v14 = dev->lpVtbl;
            qmemcpy(&v36, &v34, sizeof(v36));
            drawPrimitive = v14->DrawPrimitive;
            v32.sz = 0.0;
            v32.rhw = 1.0;
            v32.tu = 0.0;
            v32.tv = 1.0;
            v32.color = -1;
            v32.specular = 0xFF0000FF;
            qmemcpy(&v37, &v32, sizeof(v37));
            drawPrimitive_1 = drawPrimitive;
            drawPrimitive(dev, D3DPT_TRIANGLELIST, D3DVT_TLVERTEX, &v35, 3, 9);
            v30.sx = v19;
            v30.sy = v20;
            v30.sz = 0.0;
            v30.rhw = 1.0;
            v30.tu = 0.0;
            v30.color = 0xFFFFFFFF;
            v30.specular = 0xFF0000FF;
            v30.tv = 0.0;
            qmemcpy(&v35, &v30, sizeof(v35));
            v31.sx = v21;
            v31.sy = v20;
            v31.sz = 0.0;
            v31.rhw = 1.0;
            v31.color = 0xFFFFFFFF;
            v31.specular = 0xFF0000FF;
            v31.tu = 1.0;
            v31.tv = 0.0;
            v33.color = 0xFFFFFFFF;
            qmemcpy(&v36, &v31, sizeof(v36));
            v33.sx = v21;
            v33.sy = v18;
            v33.sz = 0.0;
            v33.rhw = 1.0;
            v33.specular = 0xFF0000FF;
            v33.tu = 1.0;
            v33.tv = 1.0;
            qmemcpy(&v37, &v33, sizeof(v37));
            drawPrimitive_1(dev, D3DPT_TRIANGLELIST, D3DVT_TLVERTEX, &v35, 3, 9);
            if (setRenderState(dev, D3DRS_SHADEMODE, 2))
                return 0;
            gsu0 = game;
        }
        endScene = dev->lpVtbl->EndScene;
        result = endScene(dev);
        if (result) {
            for (; result == -2005532222; result = endScene(dev)) {
                while (meth_1000B2C0(gsu0) == -2005532222)
                    ;
            }
            if (result)
                return result;
        }
        v17 = gsu0->lpDDrawSurface2->lpVtbl->Flip(gsu0->lpDDrawSurface2, gsu0->lpDDrawSurface1, 1);
        while (gsu0->lpDDrawSurface2->lpVtbl->GetFlipStatus(gsu0->lpDDrawSurface2, 2))
            ;
        if (++v22 >= 2) {
            meth_1000A0B0(&stru_10277680);
            return v17;
        }
        beginSceneFunc_1 = beginSceneFunc;
    }
    return result;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
