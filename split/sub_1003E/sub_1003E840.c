//----- (1003E840) --------------------------------------------------------
int __cdecl sub_1003E840(int a1)
{
  const char *v1; // eax

  if ( g_GameMode || dword_10220B20 )
    v1 = getCaptionString(0xCu);
  else
    v1 = getCaptionString(0x51u);
  strcpy((char *)(a1 + 11109), v1);
  (*(void (__thiscall **)(int))(*(_DWORD *)(a1 + 11100) + 4))(a1 + 11100);
  return 1;
}
// 100AA010: using guessed type int g_GameMode;
// 10220B20: using guessed type int dword_10220B20;
