//----- (10061010) --------------------------------------------------------
int __cdecl sub_10061010(int carIndex, int a2)
{
  HANDLE v2; // ebx
  HANDLE v3; // esi
  int *v4; // ebp
  void *v5; // eax
  int result; // eax
  int v7; // [esp+10h] [ebp-408h]
  int v8; // [esp+14h] [ebp-404h]
  char filename[1024]; // [esp+18h] [ebp-400h] BYREF

  v8 = 30;
  v2 = (char *)&unk_100ADFD0 + 1200 * carIndex;
  do
  {
    if ( !*(_DWORD *)v2 )
    {
      if ( *((_DWORD *)v2 + 9) )
      {
        sprintf(filename, "Paint\\%s", *((const char **)v2 + 9));
        if ( CHK_FileExists(filename) )
        {
          *(_DWORD *)v2 = LoadImageWrapper(filename);
          filename[8] = 100;
          if ( CHK_FileExists(filename) )
          {
            v3 = LoadImageWrapper(filename);
            if ( *(_DWORD *)v2 )
            {
              if ( v3 )
              {
                sub_10061210(*(unsigned __int8 **)v2, dword_10AA3464, dword_10AA3468, (unsigned __int8 *)v3);
                free(v3);
              }
            }
          }
          if ( *(_DWORD *)v2 && *((int *)v2 + 4) >= 0 && a2 && dword_100ADFC8 )
          {
            v7 = 1;
            v4 = (int *)((char *)v2 + 4);
            do
            {
              v5 = malloc(4 * dword_10AA3464 * dword_10AA3468);
              *v4 = (int)v5;
              if ( v5 )
              {
                qmemcpy(v5, *(const void **)v2, 4 * dword_10AA3464 * dword_10AA3468);
                sub_10061290(v7, *v4, dword_10AA3464, dword_10AA3468);
              }
              ++v4;
              ++v7;
            }
            while ( v7 < 4 );
          }
        }
      }
    }
    v2 = (char *)v2 + 40;
    result = --v8;
  }
  while ( v8 );
  return result;
}
// 100ADFC8: using guessed type int dword_100ADFC8;
// 10AA3464: using guessed type int dword_10AA3464;
// 10AA3468: using guessed type int dword_10AA3468;
