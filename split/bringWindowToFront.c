//----- (10007B10) --------------------------------------------------------
int bringWindowToFront()
{
  HWND v0; // esi
  HWND v1; // eax
  DWORD v2; // ebx
  HWND v3; // esi

  v0 = FindWindowA(ClassName, WindowName);
  if ( !v0 )
    return 1;
  v1 = GetForegroundWindow();
  v2 = GetWindowThreadProcessId(v1, 0);
  if ( GetWindowThreadProcessId(v0, 0) != v2 || IsIconic(v0) )
  {
    v3 = GetLastActivePopup(v0);
    if ( IsIconic(v3) )
      ShowWindow(v3, 9);
    BringWindowToTop(v3);
    SetForegroundWindow(v3);
  }
  OutputDebugStringA(OutputString);
  return 0;
}
