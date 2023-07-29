//----- (100089C0) --------------------------------------------------------
int __stdcall sub_100089C0(char *FileName)
{
  int result; // eax

  dword_1027735C = sub_10008BE0(FileName);
  fseek(dword_1027735C, 16, 0);
  result = 0;
  memset(&unk_1022B358, 0, 0x4C000u);
  dword_10277358 = 0;
  return result;
}
// 10277358: using guessed type int dword_10277358;
