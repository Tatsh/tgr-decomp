//----- (10008A00) --------------------------------------------------------
int __thiscall sub_10008A00(char *this, const char *a2, int a3, int a4, char a5, char a6)
{
  char *v6; // ebp
  int v7; // edx
  char *v8; // esi

  v6 = this + 4;
  v7 = 19 * dword_10277358++;
  v8 = (char *)&unk_1022B358 + 4 * v7;
  *(_DWORD *)v8 = 0;
  basename(a2, v8 + 12);
  if ( strlen(v8 + 12) > 0x40 )
    writeToRandomBufferAndExit(aAddNameIsTooLo);
  _strupr(v8 + 12);
  *(_DWORD *)v8 = ftell(dword_1027735C);
  v8[8] = a5;
  *((_DWORD *)v8 + 1) = a4;
  v8[9] = a6;
  return sub_10008C90(v6, dword_1027735C, a3, a4);
}
// 10008C90: using guessed type int __thiscall sub_10008C90(_DWORD, _DWORD, _DWORD, _DWORD);
// 10277358: using guessed type int dword_10277358;
