//----- (10063420) --------------------------------------------------------
int __thiscall sub_10063420(_DWORD *this)
{
  unsigned int v1; // edx
  int result; // eax
  int v3; // edi
  int i; // eax
  __int16 v5; // [esp+10h] [ebp-4h]

  v1 = (unsigned __int8)dword_10ACED34->gap0[4];
  result = v1;
  if ( v1 > 3 )
    result = 3;
  v3 = this[80];
  if ( v3 < dword_100B4050 )
  {
    result = g_GameMode;
    if ( !g_GameMode )
      result = sub_10076AE0(this, byte_100B381C[24 * v1]);
  }
  else if ( g_GameMode == 1 || g_GameMode == 6 )
  {
    this[2666] = dword_10AD0850[0];
  }
  else
  {
    v5 = word_100B381E[12 * result];
    for ( i = 0; i < 16; ++i )
    {
      if ( (v5 & 1) != 0 )
        break;
      v5 >>= 1;
    }
    if ( i == 16 )
      i = 5;
    if ( v3 <= dword_100B4050 )
      result = sub_10076AE0(this, byte_100B381C[24 * v1 - dword_100B4050 + v3]);
    else
      result = sub_10076AE0(this, i);
  }
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B381E: using guessed type __int16 word_100B381E[];
// 100B4050: using guessed type int dword_100B4050;
// 10AD0850: using guessed type int dword_10AD0850[];
