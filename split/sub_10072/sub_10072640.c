//----- (10072640) --------------------------------------------------------
int __cdecl sub_10072640(int a1, int a2)
{
  int v2; // eax

  if ( !g_Playsfx || !g_DSound || !dword_118290FC )
    return 1;
  v2 = dword_11828F08[a1];
  if ( !v2 )
    return 0;
  *(_DWORD *)(v2 + 24) = a2;
  return 1;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
