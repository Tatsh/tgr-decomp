//----- (10008810) --------------------------------------------------------
int __thiscall sub_10008810(_DWORD *this, unsigned int ArgList)
{
  int v3; // edi
  size_t v4; // eax
  int v5; // ebx

  if ( ArgList >= this[4] )
    writeToRandomBufferAndExit("LoadPod: %i >= m_cNumPods", ArgList);
  v3 = *this;
  v4 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 16))(this, ArgList);
  v5 = operator new(v4);
  (*(void (__thiscall **)(_DWORD *, unsigned int, int))(v3 + 20))(this, ArgList, v5);
  return v5;
}
