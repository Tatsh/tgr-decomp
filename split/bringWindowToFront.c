//----- (10007B10) --------------------------------------------------------
int BringWindowToFront()
{
  HWND hwnd_1; // esi
  HWND v1; // eax
  DWORD v2; // ebx
  HWND hwnd; // esi

  hwnd_1 = FindWindowA(ClassName, WindowName);
  if ( !hwnd_1 )
    return 1;
  v1 = GetForegroundWindow();
  v2 = GetWindowThreadProcessId(v1, 0);
  if ( GetWindowThreadProcessId(hwnd_1, 0) != v2 || IsIconic(hwnd_1) )
  {
    hwnd = GetLastActivePopup(hwnd_1);
    if ( IsIconic(hwnd) )
      ShowWindow(hwnd, SW_RESTORE);
    BringWindowToTop(hwnd);
    SetForegroundWindow(hwnd);
  }
  OutputDebugStringA(OutputString);
  return 0;
}
