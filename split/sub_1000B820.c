//----- (1000B820) --------------------------------------------------------
int __cdecl sub_1000B820(int a1, HGDIOBJ h, int xSrc, int ySrc, int wSrc, int hSrc)
{
  int v6; // edi
  HDC v7; // ebx
  int v8; // ebp
  HDC hdcDest; // [esp+18h] [ebp-8Ch] BYREF
  int v11; // [esp+1Ch] [ebp-88h]
  int pv[6]; // [esp+20h] [ebp-84h] BYREF
  int v13[27]; // [esp+38h] [ebp-6Ch] BYREF

  if ( !h || !a1 )
    return -2147467259;
  v6 = *(_DWORD *)a1;
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 108))(a1);
  v7 = CreateCompatibleDC(0);
  if ( !v7 )
    OutputDebugStringA(aCreatecompatib);
  SelectObject(v7, h);
  GetObjectA(h, 24, pv);
  v8 = wSrc;
  if ( !wSrc )
    v8 = pv[1];
  if ( !hSrc )
    hSrc = pv[2];
  v13[0] = 108;
  v13[1] = 6;
  (*(void (__stdcall **)(int, int *))(v6 + 88))(a1, v13);
  v11 = (*(int (__stdcall **)(int, HDC *))(v6 + 68))(a1, &hdcDest);
  if ( !v11 )
  {
    StretchBlt(hdcDest, 0, 0, v13[3], v13[2], v7, xSrc, ySrc, v8, hSrc, 0xCC0020u);
    (*(void (__stdcall **)(int, HDC))(v6 + 104))(a1, hdcDest);
  }
  DeleteDC(v7);
  return v11;
}
