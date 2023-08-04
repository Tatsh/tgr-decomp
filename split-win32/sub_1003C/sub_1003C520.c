#include "../../types-win32.h"
//----- (1003C520) --------------------------------------------------------
HRESULT __cdecl sub_1003C520(LPVOID *a1)
{
  HRESULT result; // eax
  LPVOID ppv; // [esp+0h] [ebp-4h] BYREF

  ppv = 0;
  result = CoCreateInstance(&CLSID_DirectPlay, 0, 1u, &IID_IDirectPlay3A, &ppv);
  *a1 = ppv;
  return result;
}
