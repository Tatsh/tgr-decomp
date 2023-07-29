//----- (10008750) --------------------------------------------------------
int __thiscall sub_10008750(void *this, const char *ArgList)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 8))(this, ArgList);
  if ( result == -1 )
    writeToRandomBufferAndExit("GetNumForName: %s not found!", ArgList);
  return result;
}
