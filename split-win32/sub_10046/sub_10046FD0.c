#include "../../types-win32.h"
//----- (10046FD0) --------------------------------------------------------
int __cdecl sub_10046FD0(int a1)
{
  if ( dword_10AA2934 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2934 + 28))(dword_10AA2934);
    dword_10AA2934 = 0;
  }
  if ( dword_10AA2938 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA2938 + 28))(dword_10AA2938);
    dword_10AA2938 = 0;
  }
  if ( dword_10AA293C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10AA293C + 28))(dword_10AA293C);
    dword_10AA293C = 0;
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
  if ( dword_10AA2904 )
    (**(void (__thiscall ***)(void *, int))dword_10AA2904)(dword_10AA2904, 1);
  dword_10AA2974 = 0;
  dword_10AA2904 = (void *)dword_10AA2908;
  return 0;
}
// 10AA2908: using guessed type int dword_10AA2908;
// 10AA2934: using guessed type int dword_10AA2934;
// 10AA2938: using guessed type int dword_10AA2938;
// 10AA293C: using guessed type int dword_10AA293C;
// 10AA2974: using guessed type int dword_10AA2974;
