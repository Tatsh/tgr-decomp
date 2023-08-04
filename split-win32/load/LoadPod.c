#include "../../types-win32.h"
//----- (10008810) --------------------------------------------------------
int __thiscall LoadPod(#674 *this, unsigned int ArgList)
{
  int v3; // edi
  size_t v4; // eax
  int v5; // ebx

  if ( ArgList >= *((_DWORD *)this + 4) )
    writeToRandomBufferAndExit("LoadPod: %i >= m_cNumPods", ArgList);
  v3 = *(_DWORD *)this;
  v4 = (*(int (__thiscall **)(#674 *, unsigned int))(*(_DWORD *)this + 16))(this, ArgList);
  v5 = malloc(v4);
  (*(void (__thiscall **)(#674 *, unsigned int, int))(v3 + 20))(this, ArgList, v5);
  return v5;
}
