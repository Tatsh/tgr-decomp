//----- (1000A100) --------------------------------------------------------
_DWORD *__thiscall sub_1000A100(_DWORD *this, int *a2, int a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int v7; // [esp-4h] [ebp-10h]

  memset(this, 0, 0x50u);
  v4 = this + 21;
  v5 = *a2;
  *this = 80;
  this[19] = 16;
  this[4] = 1065353216;
  (*(void (__stdcall **)(int *, _DWORD *, _DWORD))(v5 + 20))(a2, this + 21, 0);
  (*(void (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v4 + 12))(*v4, this);
  (*(void (__stdcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)*v4 + 20))(*v4, a3, this + 20);
  v7 = *v4;
  this[22] = 0;
  (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v7 + 12))(v7, this);
  return this;
}
