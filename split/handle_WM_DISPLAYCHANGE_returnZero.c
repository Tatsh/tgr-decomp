//----- (1007A1F0) --------------------------------------------------------
int __cdecl handle_WM_DISPLAYCHANGE_returnZero(HWND hWnd)
{
  if ( GetWindowLongA(hWnd, -21) )
    returnZero();
  return 0;
}
