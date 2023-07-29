//----- (10008970) --------------------------------------------------------
int __thiscall sub_10008970(int this)
{
  int result; // eax

  if ( *(_DWORD *)(this + 28) )
    fclose(*(FILE **)(this + 28));
  if ( *(_DWORD *)(this + 24) )
    operator delete(*(void **)(this + 24));
  result = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 1056) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  memset((void *)(this + 32), 0, 0x400u);
  return result;
}
