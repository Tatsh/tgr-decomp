#include "../../types-win32.h"
//----- (10033838) --------------------------------------------------------
int sub_10033838()
{
  void *v0; // ecx
  void *v1; // ecx
  void *v2; // ecx
  void *v3; // ecx
  void *v4; // ecx
  void *v5; // ecx
  void *v6; // ecx
  void *v7; // ecx
  void *v8; // ecx
  void *v9; // ecx
  void *v10; // ecx
  void *v11; // ecx
  void *v12; // ecx
  int result; // eax
  _DWORD *v14; // [esp+0h] [ebp-10h]
  _DWORD *v15; // [esp+4h] [ebp-Ch]
  _DWORD *v16; // [esp+Ch] [ebp-4h]

  v15 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v15 = -385875968;
  v15[1] = 0;
  v14 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v14 = -1207959552;
  v14[1] = 0;
  v16 = (_DWORD *)((char *)&unk_106C1588 + 64 * dword_106C65EC);
  *v16 = 1;
  v16[4] = &unk_118AB150;
  v16[6] = &unk_118AB160;
  v16[1] = 2;
  v16[1] |= 4u;
  v16[10] = dword_100AA728;
  v16[11] = dword_100AA72C - 8 * dword_106C6668;
  v16[5] = 4096;
  v16[7] = 2048;
  v16[8] = (unsigned int)&unk_106C2D0F & 0xFFFFFFF0;
  v16[9] = 1024;
  v16[12] = dword_106C0944 + 96000 * dword_106C65EC + 512;
  v16[13] = 8 * ((dword_106C0680 - (dword_106C0944 + 96000 * dword_106C65EC + 512)) >> 3);
  if ( (dword_106C0680 - (dword_106C0944 + 96000 * dword_106C65EC + 512)) >> 3 > dword_106C6660 )
    dword_106C6660 = (dword_106C0680 - (dword_106C0944 + 96000 * dword_106C65EC + 512)) >> 3;
  if ( (dword_10363FF0 - dword_102E5EC8) >> 3 > dword_106C6658 )
    dword_106C6658 = (dword_10363FF0 - dword_102E5EC8) >> 3;
  if ( (dword_10364304 - dword_103643BC) >> 5 > dword_106C665C )
    dword_106C665C = (dword_10364304 - dword_103643BC) >> 5;
  v0 = (void *)(dword_106C0944 + 96000 * dword_106C65EC + 512);
  dword_106C1170 = (dword_106C0680 - (int)v0) >> 3;
  if ( dword_106C1170 > 12000 )
    sub_10035BBA((int)aHugeGlistError);
  debugPrint(v0);
  if ( dword_106C6664 )
  {
    debugPrint(v1);
    sub_10042AF0();
    debugPrint(v2);
    if ( dword_106C198C )
    {
      dword_106C198C();
      dword_106C198C = 0;
    }
    debugPrint(v3);
    sub_10042AF0();
    if ( dword_106C1608 )
    {
      dword_106C198C();
      dword_106C198C = 0;
    }
    debugPrint(v4);
    dword_106C020C = sub_10060E90();
    dword_106C1620 = dword_106C020C - dword_106C0208;
    if ( dword_106C65E0 )
    {
      v5 = (void *)--dword_106C65E0;
      if ( !dword_106C65E0 )
      {
        debugPrint(v5);
        debugPrint(v6);
        dword_106C65E8 = dword_106C65E4;
      }
    }
    debugPrint(v5);
    debugPrint(v7);
    debugPrint(v8);
    if ( !dword_106C65F4 && !dword_106C65F8 )
      debugPrint(v9);
    if ( dword_106C65F8 )
      --dword_106C65F8;
    meth_1002C210(v9);
    dword_106C0208 = sub_10060E90();
    dword_106C020C = sub_10060E90() - dword_106C020C;
  }
  else
  {
    v10 = (void *)++dword_106C6664;
  }
  debugPrint(v10);
  dword_106C56E4 = dword_106C6598;
  debugPrint(v11);
  debugPrint(v12);
  result = dword_10B501D0(v16[12]);
  dword_106C65EC ^= 1u;
  return result;
}
// 10033A5B: variable 'v1' is possibly undefined
// 10033A87: variable 'v2' is possibly undefined
// 10033AB5: variable 'v3' is possibly undefined
// 10033AE7: variable 'v4' is possibly undefined
// 10033B82: variable 'v6' is possibly undefined
// 10033BA3: variable 'v5' is possibly undefined
// 10033BB8: variable 'v7' is possibly undefined
// 10033BCD: variable 'v8' is possibly undefined
// 10033BE9: variable 'v9' is possibly undefined
// 10033C4A: variable 'v10' is possibly undefined
// 10033C6E: variable 'v11' is possibly undefined
// 10033C86: variable 'v12' is possibly undefined
// 10060E90: using guessed type int sub_10060E90(void);
// 100AA728: using guessed type int dword_100AA728;
// 100AA72C: using guessed type int dword_100AA72C;
// 102E5EC8: using guessed type int dword_102E5EC8;
// 10363FF0: using guessed type int dword_10363FF0;
// 10364304: using guessed type int dword_10364304;
// 103643BC: using guessed type int dword_103643BC;
// 106C0208: using guessed type int dword_106C0208;
// 106C020C: using guessed type int dword_106C020C;
// 106C0680: using guessed type int dword_106C0680;
// 106C0944: using guessed type int dword_106C0944;
// 106C1170: using guessed type int dword_106C1170;
// 106C1608: using guessed type int dword_106C1608;
// 106C1620: using guessed type int dword_106C1620;
// 106C198C: using guessed type int (*dword_106C198C)(void);
// 106C56E4: using guessed type int dword_106C56E4;
// 106C6598: using guessed type int dword_106C6598;
// 106C65E0: using guessed type int dword_106C65E0;
// 106C65E4: using guessed type int dword_106C65E4;
// 106C65E8: using guessed type int dword_106C65E8;
// 106C65EC: using guessed type int dword_106C65EC;
// 106C65F4: using guessed type int dword_106C65F4;
// 106C65F8: using guessed type int dword_106C65F8;
// 106C6658: using guessed type int dword_106C6658;
// 106C665C: using guessed type int dword_106C665C;
// 106C6660: using guessed type int dword_106C6660;
// 106C6664: using guessed type int dword_106C6664;
// 106C6668: using guessed type int dword_106C6668;
// 10B501D0: using guessed type int (__cdecl *dword_10B501D0)(_DWORD);
