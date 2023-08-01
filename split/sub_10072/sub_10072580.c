//----- (10072580) --------------------------------------------------------
BOOL __cdecl sub_10072580(int a1)
{
  BOOL result; // eax

  if ( g_Playsfx && g_DSound && dword_118290FC && dword_11828F08[a1] )
    result = sub_10072550(dword_11828F08[a1]) == 0;
  else
    result = 1;
  return result;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
