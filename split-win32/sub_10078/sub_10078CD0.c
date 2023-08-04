#include "../../types-win32.h"
//----- (10078CD0) --------------------------------------------------------
int sub_10078CD0()
{
  const CHAR *text; // eax
  _DWORD *v2; // eax
  unk1 *v3; // eax
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
    v2 = (_DWORD *)malloc(0x54u);
    if ( v2 )
      v3 = (unk1 *)meth_10060280(v2);
    else
      v3 = 0;
    dword_10AA2E80 = v3;
    meth_DICreateMouseDevice(v3, g_HWND);
  }
  return 1;
}
// 118ABDE8: using guessed type int dword_118ABDE8;
