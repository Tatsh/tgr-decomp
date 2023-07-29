//----- (100087B0) --------------------------------------------------------
size_t __thiscall sub_100087B0(int this, unsigned int ArgList, int a3)
{
  int v4; // edi

  if ( ArgList >= *(_DWORD *)(this + 16) )
    writeToRandomBufferAndExit("ReadPod: %i >= cNumPods", ArgList);
  v4 = *(_DWORD *)(this + 24) + 76 * ArgList;
  fseek(*(FILE **)(this + 28), *(_DWORD *)v4, 0);
  return sub_10008C60(*(FILE **)(this + 28), (void *)a3, *(_DWORD *)(v4 + 4));
}
