//----- (10008850) --------------------------------------------------------
int __thiscall sub_10008850(_DWORD *this, unsigned int ArgList, int a3)
{
  if ( ArgList >= this[4] )
    writeToRandomBufferAndExit("LoadPod: %i >= m_cNumPods", ArgList);
  (*(void (__thiscall **)(_DWORD *, unsigned int, int))(*this + 20))(this, ArgList, a3);
  return a3;
}
