#include "../../types-win32.h"
//----- (10024150) --------------------------------------------------------
int __cdecl sub_10024150(int a1)
{
  int result; // eax

  switch ( (unsigned __int8)BYTE2(*(_DWORD *)a1) )
  {
    case 0x80u:
      result = sub_10024260(a1);
      break;
    case 0x82u:
      dword_104C1698 = *(_DWORD *)(a1 + 4);
      result = a1 + 8;
      break;
    case 0x84u:
      result = a1 + 8;
      dword_104C169C = *(_DWORD *)(a1 + 4);
      break;
    case 0x86u:
    case 0x88u:
    case 0x8Au:
    case 0x8Cu:
    case 0x8Eu:
    case 0x90u:
    case 0x92u:
    case 0x94u:
      qmemcpy(
        &dword_104BBE38[4 * (((unsigned int)(unsigned __int8)BYTE2(*(_DWORD *)a1) - 134) >> 1)],
        *(const void **)(a1 + 4),
        (unsigned __int16)*(_DWORD *)a1);
      dword_104C5180 = 0;
      goto LABEL_7;
    case 0x9Eu:
      result = sub_10024240(a1);
      break;
    default:
LABEL_7:
      result = a1 + 8;
      break;
  }
  return result;
}
// 104BBE38: using guessed type int dword_104BBE38[];
// 104C1698: using guessed type int dword_104C1698;
// 104C169C: using guessed type int dword_104C169C;
// 104C5180: using guessed type int dword_104C5180;
