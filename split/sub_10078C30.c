//----- (10078C30) --------------------------------------------------------
int __cdecl sub_10078C30(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v8[6]; // [esp+0h] [ebp-18h] BYREF

  v8[2] = a3;
  v8[4] = a5;
  v8[5] = a6;
  v8[3] = a4;
  v6 = *a1;
  v8[0] = 24;
  v8[1] = 16;
  return (*(int (__stdcall **)(int *, int, int *))(v6 + 24))(a1, a2, v8);
}
