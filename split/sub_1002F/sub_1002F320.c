//----- (1002F320) --------------------------------------------------------
int sub_1002F320()
{
  int v0; // esi
  #505 **v1; // edi
  __int64 v2; // rax
  const void *v3; // esi
  int *v4; // ebp
  int *v5; // ebx
  char *v7; // [esp+10h] [ebp-4h]

  if ( !g_GameMode )
  {
    if ( dword_106909B8 )
    {
      v0 = 0;
      if ( dword_100B4050 > 0 )
      {
        v1 = &dword_10ACED34;
        do
        {
          *((_WORD *)*v1 + 4 * *((unsigned __int8 *)*v1 + 4) + *((unsigned __int8 *)*v1 + 5) + 15) = byte_100AA210[dword_106805C8[v0]];
          *((_BYTE *)*v1 + 4 * *((unsigned __int8 *)*v1 + 4) + *((unsigned __int8 *)*v1 + 5) + 6) = dword_106805C8[v0];
          *((_DWORD *)*v1 + 4 * *((unsigned __int8 *)*v1 + 4) + *((unsigned __int8 *)*v1 + 5) + 20) = dword_10680728[v0];
          debugPrint((void *)(*((unsigned __int8 *)*v1 + 5) + 4 * *((unsigned __int8 *)*v1 + 4)));
          ++v0;
          v1 += 2778;
        }
        while ( v0 < dword_100B4050 );
      }
    }
  }
  v2 = (unsigned int)dword_100B4050;
  if ( dword_100B4050 > 0 )
  {
    v3 = &unk_10690950;
    v4 = dword_106805C8;
    v5 = dword_10680728;
    LODWORD(v2) = &dword_10ACEE50;
    v7 = (char *)&unk_10690950;
    do
    {
      if ( dword_100BD3E0 > 0 )
        qmemcpy((void *)(v2 + 12), v3, 4 * dword_100BD3E0);
      *(_DWORD *)v2 = dword_106805B0[HIDWORD(v2)];
      *(_DWORD *)(v2 + 64) = dword_10680748[HIDWORD(v2)];
      *(_DWORD *)(v2 + 68) = *v5;
      *(_DWORD *)(v2 + 80) = *v4;
      ++HIDWORD(v2);
      v3 = v7 + 48;
      ++v5;
      ++v4;
      LODWORD(v2) = v2 + 11112;
      v7 += 48;
    }
    while ( SHIDWORD(v2) < dword_100B4050 );
  }
  return v2;
}
// 100AA010: using guessed type int g_GameMode;
// 100B4050: using guessed type int dword_100B4050;
// 106805B0: using guessed type int dword_106805B0[];
// 106805C8: using guessed type int dword_106805C8[];
// 10680728: using guessed type int dword_10680728[];
// 10680748: using guessed type int dword_10680748[];
// 106909B8: using guessed type int dword_106909B8;
// 10ACEE50: using guessed type int dword_10ACEE50;
