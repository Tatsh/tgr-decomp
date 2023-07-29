//----- (10079CA0) --------------------------------------------------------
LONG __stdcall windowProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG result; // eax
  LONG v5; // eax

  if ( dword_10AA2904 )
  {
    if ( *((_DWORD *)dword_10AA2904 + 26) )
    {
      sub_10060060((int)dword_10AA2900, hWnd, Msg, wParam, lParam);
      if ( dword_10A9CFFC )
        sub_1003C3A0((int)hWnd, Msg, wParam, (LPCVOID)lParam);
    }
  }
  if ( g_Playmusic == 2 )
  {
    if ( Msg == aEarInteractiveMessageID )
    {
      if ( lParam == g_Playmusic && wParam == getWPARAM() )
      {
        pm_sub_100029B0();
        return 0;
      }
      return 0;
    }
    if ( Msg == 537 )
    {
      if ( wParam == 0x8000 )
      {
        pm_sub_10002260();
        pm_sub_100027C0(1);
      }
      if ( wParam == 32769 || wParam == 32771 || wParam == 32772 )
      {
        pm_sub_10002C30();
        pm_sub_10002440();
      }
      return 1;
    }
  }
  if ( Msg <= 0x10 )
  {
    if ( Msg != 16 )                            // != WM_CLOSE
    {
      switch ( Msg )
      {
        case 1u:                                // WM_CREATE
          goto exit0;
        case 2u:
          sub_1007A1D0();                       // WM_DESTROY
        case 3u:                                // WM_MOVE
          return handle_WM_MOVE(hWnd, wParam, lParam);
        case 5u:                                // WM_SIZE
          return handle_WM_SIZE(hWnd, wParam, lParam);
        case 6u:                                // WM_ACTIVATE
          sub_10077090(wParam);
          return handle_WM_ACTIVATE_justReturn(hWnd, wParam, lParam);
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
    }
    return sub_1007A190(hWnd);
  }
  if ( Msg <= 0x1C )                            // <= WM_ACTIVATEAPP
  {
    if ( Msg == 28 )                            // // WM_ACTIVATEAPP
      return handle_WM_ACTIVATEAPP(hWnd, wParam, lParam);
    if ( Msg == 20 )                            // WM_ERASEBKGND
      return handle_WM_ERASEBKGND(hWnd, wParam, lParam);
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg <= 0x24 )                            // <= WM_GETMINMAXINFO
  {
    if ( Msg == 36 )                            // WM_GETMINMAXINFO
      return handle_WM_GETMINMAXINFO(hWnd, wParam, lParam);
    if ( Msg == 32 )                            // WM_SETCURSOR
      return handle_WM_SETCURSOR(hWnd, wParam, lParam);
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg <= 0x7E )                            // <= WM_DISPLAYCHANGE
  {
    if ( Msg == 126 )                           // WM_DISPLAYCHANGE
      return handle_WM_DISPLAYCHANGE_returnZero(hWnd);
    if ( Msg == 70 )                            // WM_WINDOWPOSCHANGING
      return handle_WM_WINDOWPOSCHANGING(hWnd, wParam, lParam);
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg <= 0x111 )                           // <= WM_COMMAND
  {
    if ( Msg == 273 )                           // WM_COMMAND
      return handle_WM_COMMAND_justReturn(hWnd, wParam, lParam);
    if ( Msg == 133 )                           // WM_NCPAINT
      return handle_WM_NCPAINT(hWnd, wParam, lParam);
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg <= 0x211 )                           // <= WM_ENTERMENULOOP
  {
    if ( Msg == 529 )                           // WM_ENTERMENULOOP
      return handle_WM_ENTERMENULOOP(hWnd, wParam, lParam);
    if ( Msg == 274 )                           // WM_SYSCOMMAND
      return handle_WM_SYSCOMMAND(hWnd, wParam, lParam);
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg <= 0x3B9 )
  {
    if ( Msg == 953 )
    {
      if ( g_Playmusic == 1 )
      {
        if ( lParam == mciId && wParam == 1 && !dword_106909B4 )
        {
          pm_sub_10002510();
          return 0;
        }
        return 0;
      }
    }
    else if ( Msg == 530 )                      // WM_EXITMENULOOP
    {
      return handle_WM_EXITMENULOOP(hWnd, wParam, lParam);
    }
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg > 0xBD0 )
  {
    switch ( Msg )
    {
      case 0xBD1u:
        result = resetWindowLong_USERDATA(hWnd);
        break;
      case 0xBD2u:
      case 0xBD3u:
      case 0xBD4u:
exit0:
        result = returnZero();
        break;
      default:
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
  }
  else
  {
    switch ( Msg )
    {
      case 0xBD0u:
        return sub_1007A6A0(hWnd, lParam);
      case 0x7E8u:                              // UM_GETUSERSELA
        v5 = GetWindowLongA(hWnd, -21);
        if ( !v5 )
          return 0;
        result = (*(_BYTE *)(v5 + 28) & 0x1F) == 31;
        break;
      case 0x7E9u:                              // UM_GETUSERSELA
        return GetWindowLongA(hWnd, -21);
      case 0x7EAu:                              // UM_GETUSERSELW
        result = GetWindowLongA(hWnd, -21);
        if ( result )
          result = *(_DWORD *)(result + 88);
        break;
      default:
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
  }
  return result;
}
// 100940A4: using guessed type int g_Playmusic;
// 10575478: using guessed type int aEarInteractiveMessageID;
// 106909B4: using guessed type int dword_106909B4;
// 10A9CFFC: using guessed type int dword_10A9CFFC;
