//----- (1007A260) --------------------------------------------------------
LRESULT __cdecl handle_WM_ENTERMENULOOP(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
  int v3; // eax

  v3 = GetWindowLongA(hWnd, -21);
  if ( v3 && (*(_BYTE *)(v3 + 28) & 0x1F) == 31 )
  {
    sub_1000B220(v3, 1);
    SetCursor(hCursor);
  }
  return DefWindowProcA(hWnd, 0x211u, wParam, lParam);
}
