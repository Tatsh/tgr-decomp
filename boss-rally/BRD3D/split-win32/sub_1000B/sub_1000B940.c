#include "../../types-win32.h"
//----- (1000B940) --------------------------------------------------------
int __cdecl sub_1000B940(_DWORD *a1, COLORREF color)
{
  #463 *v2; // edi
  #464 *v3; // ebx
  int (__stdcall *v4)(_DWORD *, _DWORD, int *, _DWORD, _DWORD); // edi
  int i; // eax
  int v6; // edi
  HDC hdc; // [esp+40h] [ebp-78h] BYREF
  int v9; // [esp+44h] [ebp-74h]
  COLORREF v10; // [esp+48h] [ebp-70h]
  int v11[27]; // [esp+4Ch] [ebp-6Ch] BYREF

  v9 = -1;
  if ( color != -1 )
  {
    v2 = (#463 *)*a1;
    if ( !(*(int (__stdcall **)(_DWORD *, HDC *))(*a1 + 68))(a1, &hdc) )
    {
      v10 = GetPixel(hdc, 0, 0);
      SetPixel(hdc, 0, 0, color);
      (*((void (__stdcall **)(_DWORD *, HDC))v2 + 26))(a1, hdc);
    }
  }
  v3 = (#464 *)*a1;
  memset(v11, 0, sizeof(v11));
  v4 = (int (__stdcall *)(_DWORD *, _DWORD, int *, _DWORD, _DWORD))*((_DWORD *)v3 + 25);
  v11[0] = 108;
  for ( i = v4(a1, 0, v11, 0, 0); i == -2005532132; i = v4(a1, 0, v11, 0, 0) )
    ;
  if ( i )
  {
    v6 = v9;
  }
  else
  {
    v6 = *(_DWORD *)v11[9];
    if ( v11[21] < 0x20u )
      v6 &= (1 << SLOBYTE(v11[21])) - 1;
    (*((void (__stdcall **)(_DWORD *, _DWORD))v3 + 32))(a1, 0);
  }
  if ( color != -1 && !(*((int (__stdcall **)(_DWORD *, HDC *))v3 + 17))(a1, &hdc) )
  {
    SetPixel(hdc, 0, 0, v10);
    (*((void (__stdcall **)(_DWORD *, HDC))v3 + 26))(a1, hdc);
  }
  return v6;
}
