//----- (10008E30) --------------------------------------------------------
int __stdcall sub_10008E30(gameSpecificUnk0 *game, const char *filename, int flag)
{
  gameSpecificUnk0 *gsu0; // esi
  IDirect3D2 *d3d2; // ecx
  IDirect3DViewport2 *viewport; // eax
  IDirect3DDevice2 *dev; // ebx
  unsigned __int8 *v7; // eax
  HRESULT (__stdcall *beginSceneFunc_1)(IDirect3DDevice2 *); // ebp
  int result; // eax
  HRESULT (__stdcall *v10)(IDirect3DDevice2 *, DWORD, DWORD); // ebp
  IDirect3DViewport2Vtbl *id3dviewport2vtbl; // ecx
  double v12; // st7
  double v13; // st7
  IDirect3DDevice2Vtbl *v14; // eax
  void (__stdcall *v15)(IDirect3DDevice2 *, int, int, char *, int, int); // eax
  HRESULT (__stdcall *v16)(IDirect3DDevice2 *); // ebp
  int v17; // ebp
  int v18; // [esp+ECh] [ebp-15Ch]
  int v19; // [esp+F0h] [ebp-158h]
  int v20; // [esp+F4h] [ebp-154h]
  float v21; // [esp+F8h] [ebp-150h]
  int v22; // [esp+FCh] [ebp-14Ch]
  int a4; // [esp+104h] [ebp-144h] BYREF
  HRESULT (__stdcall *beginSceneFunc)(IDirect3DDevice2 *); // [esp+108h] [ebp-140h]
  const char *a3; // [esp+10Ch] [ebp-13Ch] BYREF
  void (__stdcall *v26)(IDirect3DDevice2 *, int, int, char *, int, int); // [esp+110h] [ebp-138h]
  IDirect3DViewport2 *v27; // [esp+114h] [ebp-134h]
  int v28[4]; // [esp+118h] [ebp-130h] BYREF
  int v29[8]; // [esp+128h] [ebp-120h] BYREF
  int v30[8]; // [esp+148h] [ebp-100h] BYREF
  int v31[8]; // [esp+168h] [ebp-E0h] BYREF
  int v32[8]; // [esp+188h] [ebp-C0h] BYREF
  int v33[8]; // [esp+1A8h] [ebp-A0h] BYREF
  int v34[8]; // [esp+1C8h] [ebp-80h] BYREF
  char v35[32]; // [esp+1E8h] [ebp-60h] BYREF
  char v36[32]; // [esp+208h] [ebp-40h] BYREF
  char v37[32]; // [esp+228h] [ebp-20h] BYREF

  gsu0 = game;
  if ( !game )
    return -2147467259;
  if ( (game->field_1C & 0x1F) != 31 )
    return -2147467259;
  d3d2 = game->d3d2;
  viewport = game->lpD3DViewport;
  dev = game->lpD3DDevice2;
  v27 = viewport;
  if ( !d3d2 || !dev || !viewport )
    return -2147467259;
  flipSurfaces(game);
  v7 = sub_10009AD0((char *)filename, flag, (char **)&a3, &a4);
  sub_10009EA0(&stru_10277680, dev, v7, 256, 256, 11);
  v22 = 0;
  beginSceneFunc = dev->lpVtbl->BeginScene;
  beginSceneFunc_1 = beginSceneFunc;
  for ( result = beginSceneFunc(dev); ; result = beginSceneFunc(dev) )
  {
    if ( result )
    {
      for ( ; result == -2005532222; result = beginSceneFunc_1(dev) )
      {
        while ( sub_1000B2C0((LONG)gsu0) == -2005532222 )
          ;
      }
      if ( result )
        break;
    }
    v10 = dev->lpVtbl->SetRenderState;
    if ( !v10(dev, 29, 0) && !v10(dev, 7, 1) && !v10(dev, 1, 0) && !v10(dev, 26, 1) )
    {
      v28[2] = g_Width;
      v28[3] = g_Height;
      id3dviewport2vtbl = v27->lpVtbl;
      v28[0] = 0;
      v28[1] = 0;
      id3dviewport2vtbl->Clear(v27, 1, (D3DRECT *)v28, 3);
      v10(dev, 9, 1);
      v10(dev, 27, 0);
      v10(dev, 14, 0);
      v10(dev, 5, 0);
      v10(dev, 6, 0);
      v10(dev, 4, 1);
      v10(dev, 1, *(&stru_10277680 + 3));
      v12 = (double)((g_Width - (int)a3) / 2);
      *(float *)&v19 = v12;
      if ( v12 < 0.0 )
        *(float *)&v19 = 0.0;
      v13 = (double)((g_Height - a4) / 2);
      *(float *)&v20 = v13;
      if ( v13 < 0.0 )
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
      v15 = (void (__stdcall *)(IDirect3DDevice2 *, int, int, char *, int, int))v14->DrawPrimitive;
      v32[2] = 0;
      v32[3] = 1065353216;
      v32[6] = 0;
      v32[7] = 1065353216;
      v32[4] = -1;
      v32[5] = -16776961;
      qmemcpy(v37, v32, sizeof(v37));
      v26 = v15;
      v15(dev, 4, 3, v35, 3, 9);
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
      v26(dev, 4, 3, v35, 3, 9);
      if ( v10(dev, 9, 2) )
        return 0;
      gsu0 = game;
    }
    v16 = dev->lpVtbl->EndScene;
    result = v16(dev);
    if ( result )
    {
      for ( ; result == -2005532222; result = v16(dev) )
      {
        while ( sub_1000B2C0((LONG)gsu0) == -2005532222 )
          ;
      }
      if ( result )
        return result;
    }
    v17 = gsu0->lpDDrawSurface2->lpVtbl->Flip(gsu0->lpDDrawSurface2, gsu0->lpDDrawSurface1, 1);
    while ( gsu0->lpDDrawSurface2->lpVtbl->GetFlipStatus(gsu0->lpDDrawSurface2, 2) )
      ;
    if ( ++v22 >= 2 )
    {
      sub_1000A0B0(&stru_10277680);
      return v17;
    }
    beginSceneFunc_1 = beginSceneFunc;
  }
  return result;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
