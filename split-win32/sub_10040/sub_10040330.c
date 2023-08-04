#include "../../types-win32.h"
//----- (10040330) --------------------------------------------------------
int __cdecl sub_10040330(int a1)
{
  int v1; // esi
  int *v2; // ebp
  int *v4; // ebx
  int *v5; // esi
  int v6; // eax
  int v7; // ebp
  char v8; // al
  int v10; // [esp-4h] [ebp-28h]
  _DWORD *v11; // [esp+10h] [ebp-14h]
  int *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]
  char v16; // [esp+28h] [ebp+4h]

  v1 = 0;
  v2 = dword_10A9D5C0;
  v14 = 0;
  v12 = dword_10A9D5C0;
  v4 = dword_100AB334;
  do
  {
    v10 = *v4;
    *v2 = 0;
    v13 = sub_10069BC0(g_Config, a1, v10);
    ++v1;
    v16 = sub_10069C30(g_Config, a1, *v4);
    v15 = v1;
    if ( v1 < 21 )
    {
      v5 = v4 + 2;
      v11 = v2 + 1;
      do
      {
        if ( (int)v4 >= (int)&unk_100AB394 || (v6 = *v5, *v5 != 12) && v6 != 13 && v6 != 14 )
        {
          v7 = sub_10069BC0(g_Config, a1, *v5);
          v8 = sub_10069C30(g_Config, a1, *v5);
          if ( (v13 || v16) && v13 == v7 && v16 == v8 )
          {
            v14 = 1;
            *v11 = 1;
            *v12 = 1;
          }
        }
        v5 += 2;
        ++v11;
      }
      while ( (int)v5 < (int)&word_100AB3DC );
      v2 = v12;
      v1 = v15;
    }
    v4 += 2;
    v12 = ++v2;
  }
  while ( (int)v4 < (int)&word_100AB3DC );
  return v14;
}
// 100AB334: using guessed type int dword_100AB334[];
// 100AB3DC: using guessed type __int16 word_100AB3DC;
// 10A9D5C0: using guessed type int dword_10A9D5C0[];
