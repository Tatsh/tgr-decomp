#include "../types-n64.h"
//----- (802575C4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall pm_sub_802575C4(int a1, int a2)
{
  int frequency; // $v0
  __int64 v3; // $v1
  int v4; // $v1
  __int64 v5; // $v1
  int v6; // $v0
  int v7; // $a1
  int v8; // $v1
  __int64 *v9; // $v0
  double v10; // $f6
  int v11; // $a1
  int v12; // [sp+28h] [-28h]
  int v13; // [sp+2Ch] [-24h]
  int v14; // [sp+44h] [-Ch]

  dword_802A4918 = 0xFFFEFFFE;
  dword_802A491C = 0xFFFEFFFE;
  frequency = sub_80268230(0x55EEu);
  debugPrint("Real Frequency is = %d\n", frequency);
  osCreateMesgQueue(&gMusicMesgQueue, dword_80374708, 2);
  HIDWORD(v3) = sub_80266188();
  v12 = sub_80266088(v3, 1000000LL);
  v13 = v4;
  HIDWORD(v5) = sub_80266188();
  v6 = sub_80266088(v5, 1000000LL);
  sub_80268390(dword_80374710, v7, v12, v13, v6, v8, &gMusicMesgQueue, 0);
  v9 = qword_802A4798;
  do
  {
    v9 += 3;
    *((_DWORD *)v9 - 6) = word_803747D0;
    *((_DWORD *)v9 - 3) = 0;
    *((_DWORD *)v9 - 4) = 0;
    *((_DWORD *)v9 - 1) = 32;
  }
  while ( v9 < (__int64 *)&dword_802A4918 );
  HIDWORD(qword_802A4920[0]) = &dword_802A4A08;
  HIDWORD(qword_802A4928) = 0;
  LODWORD(qword_802A4928) = 0;
  dword_802A4934 = 32;
  HIDWORD(qword_802A4938) = 0;
  HIDWORD(qword_802A4940) = 0;
  LODWORD(qword_802A4940) = 0;
  dword_802A494C = 0;
  dword_802A4998[3] = 0;
  dword_802A4998[2] = 0;
  HIDWORD(qword_802A4968) = &dword_802A4A08;
  HIDWORD(qword_802A4970) = 0;
  LODWORD(qword_802A4970) = 0;
  dword_802A497C = 32;
  HIDWORD(qword_802A4980) = &dword_802A4A08;
  HIDWORD(qword_802A4988) = 0;
  LODWORD(qword_802A4988) = 0;
  dword_802A4994 = 32;
  dword_802A4998[0] = (int)&dword_802A4A08;
  dword_802A4998[5] = 32;
  HIDWORD(qword_802A4950) = &dword_802A4A08;
  LODWORD(qword_802A4958) = 0;
  HIDWORD(qword_802A4958) = 0;
  dword_802A4964 = 32;
  word_802A4790 = 0;
  v14 = -sub_802649F0();
  sub_802562F0(word_803747D0, 0x4000);
  v10 = (double)(unsigned int)(v14 + sub_802649F0());
  debugPrint("%1.7f", v11, v10 / 46875500.0);
  debugPrint("Creating I entries\n");
  sub_80256720(a1, a2);
  debugPrint("Creating Note Frequency entries\n");
  sub_80256C2C();
  debugPrint("Starting Mod\n");
  sub_802571AC();
  dword_80378F98 = 1;
  sub_80268470((unsigned int)word_803747D0, 0x4000);
  osCreateThread(&gMusicThread, 7, gMusicThreadEntry, 0, gMusicThreadStack, 127);
  osStartThread(&gMusicThread);
}
// 802575D0: write access to const memory at 802A4918 has been detected
// 802575E8: write access to const memory at 802A491C has been detected
// 80257720: write access to const memory at 802A4920 has been detected
// 80257728: write access to const memory at 802A4928 has been detected
// 80257730: write access to const memory at 802A492C has been detected
// 8025773C: write access to const memory at 802A4934 has been detected
// 80257744: write access to const memory at 802A4938 has been detected
// 8025774C: write access to const memory at 802A4940 has been detected
// 80257764: write access to const memory at 802A4944 has been detected
// 8025777C: write access to const memory at 802A494C has been detected
// 802577DC: write access to const memory at 802A4790 has been detected
// 80257898: write access to const memory at 80378F98 has been detected
// 80257794: write access to const memory at 802A49A4 has been detected
// 80257798: write access to const memory at 802A49A0 has been detected
// 8025779C: write access to const memory at 802A4968 has been detected
// 802577A0: write access to const memory at 802A4970 has been detected
// 802577A4: write access to const memory at 802A4974 has been detected
// 802577A8: write access to const memory at 802A497C has been detected
// 802577AC: write access to const memory at 802A4980 has been detected
// 802577B0: write access to const memory at 802A4988 has been detected
// 802577B4: write access to const memory at 802A498C has been detected
// 802577B8: write access to const memory at 802A4994 has been detected
// 802577BC: write access to const memory at 802A4998 has been detected
// 802577C0: write access to const memory at 802A49AC has been detected
// 802577C4: write access to const memory at 802A4950 has been detected
// 802577C8: write access to const memory at 802A495C has been detected
// 802577CC: write access to const memory at 802A4958 has been detected
// 802577D0: write access to const memory at 802A4964 has been detected
// 80257648: variable 'v3' is possibly undefined
// 80257664: variable 'v4' is possibly undefined
// 80257684: variable 'v5' is possibly undefined
// 802576B0: variable 'v7' is possibly undefined
// 802576B0: variable 'v8' is possibly undefined
// 80257844: variable 'v11' is possibly undefined
// 802A4790: using guessed type __int16 word_802A4790;
// 802A4798: using guessed type __int64 qword_802A4798[];
// 802A4918: using guessed type int dword_802A4918;
// 802A491C: using guessed type int dword_802A491C;
// 802A4920: using guessed type __int64 qword_802A4920[];
// 802A4928: using guessed type __int64 qword_802A4928;
// 802A4934: using guessed type int dword_802A4934;
// 802A4938: using guessed type __int64 qword_802A4938;
// 802A4940: using guessed type __int64 qword_802A4940;
// 802A494C: using guessed type int dword_802A494C;
// 802A4950: using guessed type __int64 qword_802A4950;
// 802A4958: using guessed type __int64 qword_802A4958;
// 802A4964: using guessed type int dword_802A4964;
// 802A4968: using guessed type __int64 qword_802A4968;
// 802A4970: using guessed type __int64 qword_802A4970;
// 802A497C: using guessed type int dword_802A497C;
// 802A4980: using guessed type __int64 qword_802A4980;
// 802A4988: using guessed type __int64 qword_802A4988;
// 802A4994: using guessed type int dword_802A4994;
// 802A4998: using guessed type int dword_802A4998[6];
// 802A49C0: using guessed type int dword_802A49C0;
// 802A4A08: using guessed type int dword_802A4A08;
// 802A6140: using guessed type __int64 qword_802A6140;
// 80374710: using guessed type int dword_80374710[48];
// 80378F98: using guessed type int dword_80378F98;
// 80379568: using guessed type int gMusicThreadStack[242];
