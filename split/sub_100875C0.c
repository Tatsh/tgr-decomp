//----- (100875C0) --------------------------------------------------------
int __cdecl sub_100875C0(int a1, int a2)
{
  char v3[12]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12((int)v3, (char **)&a2, (char *)a2, 0, 0, 0, 0);
  return ld12cvt_((int)v3, a1);
}
