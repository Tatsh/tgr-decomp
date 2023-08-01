//----- (10007B10) --------------------------------------------------------
int BringWindowToFront()
{
  HWND hwnd_1; // esi
  HWND fgHwnd; // eax
  DWORD pid; // ebx
  HWND hwnd; // esi

  hwnd_1 = FindWindowA(kClassName, kWindowName);
  if ( !hwnd_1 )
    return 1;
  fgHwnd = GetForegroundWindow();
  pid = GetWindowThreadProcessId(fgHwnd, 0);
  if ( GetWindowThreadProcessId(hwnd_1, 0) != pid || IsIconic(hwnd_1) )
  {
    hwnd = GetLastActivePopup(hwnd_1);
    if ( IsIconic(hwnd) )
      ShowWindow(hwnd, SW_RESTORE);
    BringWindowToTop(hwnd);
    SetForegroundWindow(hwnd);
  }
  OutputDebugStringA(kDebugStrCheckPreviousApp);
  return 0;
}
