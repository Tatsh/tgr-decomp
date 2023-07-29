//----- (10037A90) --------------------------------------------------------
int __cdecl sub_10037A90(int a1)
{
  char Buffer[1024]; // [esp+8h] [ebp-400h] BYREF

  sprintf(Buffer, "%s%s", aTracks, off_100B80B8[a1]);
  strcpy(strrchr(Buffer, 46), aHnd);
  return sub_10037990(Buffer);
}
// 100B80B8: using guessed type char *off_100B80B8[15];
