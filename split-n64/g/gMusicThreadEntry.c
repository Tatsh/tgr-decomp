#include "../../types-n64.h"
//----- (80257D3C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn gMusicThreadEntry(void *a1)
{
  int v1; // $a3
  __int64 *v2; // $v0
  int v3; // $t8
  int v4; // $a3
  __int64 *v5; // $a1
  unsigned int v6; // $a0
  int v7; // $v0
  int v8; // $v1
  int v9; // $a1
  int v10; // $a3

  dword_802A4A0C = 1;
  sub_802642E0(&gMusicMesgQueue, 0, 1);
  v1 = 0;
  v2 = qword_802A4798;
  do
  {
    v3 = *((_DWORD *)v2 + 5);
    ++v1;
    v2 += 3;
    *((_DWORD *)v2 - 2) = (unsigned int)(9180 * v3) >> 16;
  }
  while ( v1 < 16 );
  v4 = 0;
  v5 = qword_802A4920;
  do
  {
    v6 = *((_DWORD *)v5 + 5);
    ++v4;
    v5 += 3;
    *((_DWORD *)v5 - 2) = ((unsigned int)(65025 * HIWORD(v6)) >> 16 << 16)
                        + ((65025 * (unsigned int)(unsigned __int16)v6) >> 16);
  }
  while ( v4 < 6 );
  dword_80379938 = v4;
  dword_80379930 = sub_80268520();
  dword_80379930 = sub_80268470((unsigned int)word_803747D0, 0x4000);
  v7 = sub_80268530();
  v8 = v7 - 4096 + (v7 - 4096 < 0 ? 0x4000 : 0);
  dword_802A4A10 = v8;
  v9 = -v8;
  dword_80379934 = v8;
  if ( v8 > 0 )
    v9 = 0x4000 - v8;
  dword_80379930 = v9;
  sub_80256D3C();
  sub_802562F0(word_803747D0, 0x6DC29D06);
  v10 = 6;
  dword_80379938 = 6;
  while ( 1 )
  {
    word_802A4790 = 0;
    dword_80379938 = v10;
    sub_8025649C(word_803747D0, 0x6DC29D06, 24 * v10 - 144);
    v10 = -1424668767;
  }
}
// 80257D90: write access to const memory at 802A4A0C has been detected
// 80257E84: write access to const memory at 80379938 has been detected
// 80257E94: write access to const memory at 80379930 has been detected
// 80257EA4: write access to const memory at 80379930 has been detected
// 80257ECC: write access to const memory at 802A4A10 has been detected
// 80257EE0: write access to const memory at 80379934 has been detected
// 80257EF0: write access to const memory at 80379930 has been detected
// 80257F10: write access to const memory at 80379930 has been detected
// 80257F40: write access to const memory at 80379938 has been detected
// 80257F68: write access to const memory at 80379938 has been detected
// 80257FA0: write access to const memory at 80379938 has been detected
// 80257FD4: write access to const memory at 802A4A14 has been detected
// 80258000: write access to const memory at 802A4A14 has been detected
// 80258010: write access to const memory at 802A4A14 has been detected
// 80257F64: write access to const memory at 802A4790 has been detected
// 802A4790: using guessed type __int16 word_802A4790;
// 802A4798: using guessed type __int64 qword_802A4798[];
// 802A4920: using guessed type __int64 qword_802A4920[];
// 802A49C0: using guessed type int dword_802A49C0;
// 802A49C4: using guessed type char byte_802A49C4;
// 802A49C8: using guessed type char byte_802A49C8;
// 802A49CC: using guessed type char byte_802A49CC;
// 802A49D0: using guessed type char byte_802A49D0;
// 802A4A0C: using guessed type int dword_802A4A0C;
// 802A4A10: using guessed type int dword_802A4A10;
// 802A4A14: using guessed type int dword_802A4A14;
// 80378F98: using guessed type int dword_80378F98;
// 80379930: using guessed type int dword_80379930;
// 80379934: using guessed type int dword_80379934;
// 80379938: using guessed type int dword_80379938;
