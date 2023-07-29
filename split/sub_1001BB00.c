//----- (1001BB00) --------------------------------------------------------
int __cdecl sub_1001BB00(int a1, int a2, IID *a3, int a4)
{
  if ( !sub_1007AC20(a1, a2, (int)a3, a4)
    && (a1 != g_Width1 || a2 != g_Height1 || a3 != (IID *)g_BitDepth || a4 != dword_106C6644) )
  {
    sub_1000B4D0(g_gsu0, a1, a2, a3, a4);
    if ( !g_gsu0->field_C )
      sub_1000B4D0(g_gsu0, 640, 480, (IID *)0x10, 0);
  }
  return sub_1001BAE0();
}
// 1001BAE0: using guessed type int sub_1001BAE0(void);
// 100AA8A8: using guessed type int g_BitDepth;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
// 106C6644: using guessed type int dword_106C6644;
