#include "../../types-win32.h"
//----- (10046950) --------------------------------------------------------
int __cdecl sub_10046950(int a1)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
  if ( dword_10AA2904 )
    (**(void (__thiscall ***)(void *, int))dword_10AA2904)(dword_10AA2904, 1);
  dword_10AA2928 = 0;
  dword_10AA29C0 = 0;
  dword_10AA29CC = 0;
  dword_10AA28E4 = 0;
  Value = -1;
  strcpy(byte_10AA2518, String2);
  strcpy(byte_10A9D618, String2);
  result = 0;
  dword_10AA2904 = (void *)dword_10AA2934;
  return result;
}
// 10AA28E4: using guessed type int dword_10AA28E4;
// 10AA2928: using guessed type int dword_10AA2928;
// 10AA2934: using guessed type int dword_10AA2934;
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29CC: using guessed type int dword_10AA29CC;
