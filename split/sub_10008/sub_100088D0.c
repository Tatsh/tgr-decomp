//----- (100088D0) --------------------------------------------------------
size_t __thiscall sub_100088D0(_DWORD *this)
{
  const char *v2; // ebp
  FILE *v3; // eax
  int v4; // eax
  int v5; // edx
  size_t v7; // [esp-4h] [ebp-14h]

  v2 = (const char *)(this + 8);
  v3 = fopenReadBinary((char *)this + 32);
  this[7] = v3;
  sub_10008C60(v3, this + 2, 0x10u);
  if ( strncmp((const char *)this + 8, aPod, 3u) )
    writeToRandomBufferAndExit("%s is not a valid POD file", v2);
  v7 = 76 * this[4];
  this[264] = v7;
  v4 = operator new(v7);
  v5 = this[5];
  this[6] = v4;
  fseek((FILE *)this[7], v5, 0);
  return sub_10008C60((FILE *)this[7], (void *)this[6], this[264]);
}
