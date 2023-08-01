//----- (10078CD0) --------------------------------------------------------
int sub_10078CD0()
{
  const CHAR *text; // eax
  _DWORD *v2; // eax
  __unk0 *v3; // eax
  const CHAR *caption; // [esp-8h] [ebp-18h]

  if ( ++mouseCreated == 1 )
  {
    if ( DirectInputCreateA(hInst, 0x500u, &g_DirectInputA, 0) < 0 )
    {
      caption = getCaptionString(0x126u);
      text = getCaptionString(0x127u);
      MessageBoxA(g_HWND, text, caption, 0x10u);
      return 0;
    }
    v2 = (_DWORD *)operator new(0x54u);
    if ( v2 )
      v3 = (__unk0 *)sub_10060280(v2);
    else
      v3 = 0;
    dword_10AA2E80 = v3;
    DICreateMouseDevice(v3, g_HWND);
  }
  return 1;
}
// 118ABDE8: using guessed type int dword_118ABDE8;
