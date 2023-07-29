//----- (10008AA0) --------------------------------------------------------
int __thiscall sub_10008AA0(char *this)
{
  int v2; // edi
  char v4[4]; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v2 = ftell(dword_1027735C);
  this += 4;
  sub_10008C90(this, dword_1027735C, &unk_1022B358, 76 * dword_10277358);
  qmemcpy(v4, "POD", 3);
  v5 = 500;
  v6 = dword_10277358;
  v7 = v2;
  fseek(dword_1027735C, 0, 0);
  sub_10008C90(this, dword_1027735C, v4, 16);
  return fclose(dword_1027735C);
}
// 10008C90: using guessed type int __thiscall sub_10008C90(_DWORD, _DWORD, _DWORD, _DWORD);
// 10277358: using guessed type int dword_10277358;
