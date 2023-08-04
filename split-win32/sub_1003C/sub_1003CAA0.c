#include "../../types-win32.h"
//----- (1003CAA0) --------------------------------------------------------
int __stdcall sub_1003CAA0(int a1, int a2, int a3, __int16 a4, int a5)
{
  int result; // eax

  result = dword_10AA29E4;
  if ( dword_10AA29E4 )
  {
    if ( (a4 & 0x200) == 0 )
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, int, void *, int))(*(_DWORD *)(dword_10AA29E4 + 14392) + 16))(
        dword_10AA29E4 + 14392,
        *(_DWORD *)(a3 + 8),
        0,
        1,
        &unk_100AB3F8,
        1);
      *(_DWORD *)(dword_10AA29E4 + 1080 * *(unsigned __int16 *)(dword_10AA29E4 + 123236) + 14432) = a1;
      sub_1003C9F0(a1);
    }
    result = 1;
  }
  return result;
}
// 10AA29E4: using guessed type int dword_10AA29E4;
