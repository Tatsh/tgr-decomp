//----- (10008780) --------------------------------------------------------
int __thiscall GetPodLength(unk1 *this, unsigned int argList)
{
  if ( argList >= this->cNumPods )
    writeToRandomBufferAndExit("GetPodLength: %i >= m_cNumPods", argList);
  return *(_DWORD *)(this->field_18 + 76 * argList + 4);
}
