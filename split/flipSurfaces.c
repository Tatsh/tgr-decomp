//----- (1000AF00) --------------------------------------------------------
HRESULT __thiscall flipSurfaces(gameSpecificUnk0 *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  IDirect3DViewport2 *v4; // ebx
  int dw; // eax
  HRESULT hr; // edi
  D3DRECT v8; // [esp+10h] [ebp-10h] BYREF

  v8.x2 = g_Width;
  v8.y2 = g_Height;
  v2 = this->unkMeth0;
  v8.x1 = 0;
  v8.y1 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[22] = 1;
  v3 = this->unkMeth0;
  v4 = this->lpD3DViewport;
  dw = v3[21];
  v3[22] = 0;
  v3[19] = 1;
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)dw + 12))(dw, v3);
  v4->lpVtbl->SetBackground(v4, v3[20]);
  this->lpD3DViewport->lpVtbl->Clear(this->lpD3DViewport, 1, &v8, 3);
  hr = this->lpDDrawSurface2->lpVtbl->Flip(this->lpDDrawSurface2, this->lpDDrawSurface1, 1);// DDFLIP_WAIT
  while ( this->lpDDrawSurface2->lpVtbl->GetFlipStatus(this->lpDDrawSurface2, 2) )// DDGFS_ISFLIPDONE
    ;
  return hr;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
