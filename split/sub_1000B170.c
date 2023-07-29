//----- (1000B170) --------------------------------------------------------
int __thiscall sub_1000B170(#465 *this)
{
  _DWORD *v2; // eax
  int result; // eax
  int v4; // eax

  v2 = (_DWORD *)*((_DWORD *)this + 18);
  if ( !v2
    || (result = (*(int (__stdcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))(*v2 + 16))(
                   v2,
                   0,
                   0,
                   *((_DWORD *)this + 19),
                   *((_DWORD *)this + 21)),
        result >= 0)
    && (result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 18) + 24))(
                   *((_DWORD *)this + 18),
                   0,
                   0,
                   *((_DWORD *)this + 19),
                   *((_DWORD *)this + 20)),
        result >= 0) )
  {
    v4 = *((_DWORD *)this + 15);
    if ( !v4 || (result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 40))(*((_DWORD *)this + 15)), result >= 0) )
    {
      if ( *((_DWORD *)this + 8) )
      {
        if ( IsWindow(*((HWND *)this + 8)) )
        {
          DrawMenuBar(*((HWND *)this + 8));
          RedrawWindow(*((HWND *)this + 8), 0, 0, 0x400u);
        }
      }
      result = 0;
    }
  }
  return result;
}
