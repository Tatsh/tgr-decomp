//----- (1000AEA0) --------------------------------------------------------
int __thiscall sub_1000AEA0(gameSpecificUnk0 *this)
{
  _DWORD *v2; // edi

  v2 = this->unkMeth0;
  this->field_1C |= 0x10u;
  if ( v2 )
  {
    sub_1000A170(v2);
    operator delete(v2);
    this->unkMeth0 = 0;
  }
  if ( this->lpD3DViewport )
  {
    this->lpD3DDevice2->lpVtbl->DeleteViewport(this->lpD3DDevice2, this->lpD3DViewport);
    this->lpD3DViewport->lpVtbl->Release(this->lpD3DViewport);
    this->lpD3DViewport = 0;
  }
  return 0;
}
