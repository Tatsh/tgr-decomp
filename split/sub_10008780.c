//----- (10008780) --------------------------------------------------------
int __thiscall sub_10008780(_DWORD *this, unsigned int ArgList)
{
  if ( ArgList >= this[4] )
    writeToRandomBufferAndExit("GetPodLength: %i >= m_cNumPods", ArgList);
  return *(_DWORD *)(this[6] + 76 * ArgList + 4);
}
