//----- (100020D0) --------------------------------------------------------
int __cdecl sub_100020D0(char *Buffer, float a2)
{
  __int64 v2; // rax

  v2 = (__int64)(a2 * 100.0);
  return sprintf(
           Buffer,
           "%d:%02d.%02d",
           (int)v2 / 100 / 60,
           (int)v2 / 100 % 60,
           (_DWORD)v2 + 20 * (4 * ((int)v2 / -100) - (int)v2 / 100));
}
