#include "../../types-n64.h"
//----- (802534DC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_802534DC()
{
  int v0; // $s2
  int v1; // $s0
  int i; // $s2
  int *v3; // $s0
  char *v4; // $s1
  char v5; // $v0
  int v6; // $v0
  int v7; // [sp+40h] [-88h]
  int v8; // [sp+40h] [-88h]
  int *v9; // [sp+44h] [-84h]
  char v10[16]; // [sp+58h] [-70h] BYREF
  char v11; // [sp+68h] [-60h] BYREF
  char v12[11]; // [sp+74h] [-54h] BYREF
  char v13; // [sp+7Fh] [-49h] BYREF

  word_802A4BE8 = 0;
  byte_8028DD94 = 1;
  byte_8036A060 = 0;
  sub_80261940((int)unkMessageQueue4, &v13);
  if ( (v13 & 1) != 0 )
  {
    sub_80242940();
    AllocPaintShopGfxMem((int)&dword_8028CB40);
    AllocPaintShopGfxMem((int)&dword_8028CB70);
    AllocPaintShopGfxMem((int)&dword_8028D0B0);
    AllocPaintShopGfxMem((int)&dword_8028D0E0);
    AllocPaintShopGfxMem((int)&dword_8028DD20);
    dword_802724F0 = 0;
    byte_8036A270 = 1;
    sub_80223688(1.0, 0.2);
    sub_8021C4B4();
    sub_80223F54();
    sub_80219A3C();
    sub_8021B458();
    sub_80219BF0(0, 0, 320, 240, 1);
    sub_80217C94();
    sub_80217FB8();
    sub_80245798((int)&dword_8028CB40);
    sub_8024594C((int)&dword_8028CB70, 66, 16, 520, 65);
    sub_8022F504();
    sub_8022F4F8();
    sub_8022F5D0(22);
    formatter("%ryCONTROLLER PAK MENU", 160, 32);
    sub_8022F514();
    sub_8022F5D0(12);
    formatter("%yw#", 72, 52);
    formatter("%ywGAME NOTE", 116, 52);
    sub_8022F520();
    formatter("%ywPAGES", 250, 52);
    sub_8022F5D0(9);
    v7 = 63;
    v0 = 0;
    do
    {
      v1 = v0 + 1;
      sub_80260DD4((int)v12, "%d", v0 + 1);
      if ( v0 == 224 )
        sub_8022F530(128, 255, 128, 0, 255, 0);
      else
        sub_8022F530(255, 255, 255, 128, 128, 128);
      formatter(v12, 82, v7);
      ++v0;
      v7 += 9;
    }
    while ( v1 < 16 );
    for ( i = 0; i != 16; ++i )
    {
      v8 = 9 * i + 63;
      v9 = &dword_8036A070[8 * i];
      v3 = v9;
      v4 = v10;
      do
      {
        v5 = sub_80253460(*((_BYTE *)v3 + 14));
        *v4 = v5;
        if ( !v5 )
          break;
        ++v4;
        v3 = (int *)((char *)v3 + 1);
      }
      while ( v4 != &v11 );
      v6 = sub_80253460(*((_BYTE *)v9 + 10));
      if ( v6 )
      {
        *v4 = 32;
        v4[1] = 46;
        v4[2] = v6;
        v4[3] = 0;
      }
      else
      {
        *v4 = 0;
      }
      sub_8022F514();
      if ( i == 224 )
        sub_8022F530(128, 255, 128, 0, 255, 0);
      else
        sub_8022F530(255, 255, 255, 128, 128, 128);
      formatter(v10, 98, v8);
      sub_80260DD4((int)v12, "%d", (unsigned int)*v9 >> 8);
      sub_8022F520();
      formatter(v12, 244, v8);
    }
    sub_8022F514();
    sub_8022F5D0(10);
    formatter("%ywPAGES USED:", 71, 211);
    sub_80260DD4((int)v12, "%%yw%d", 6194799);
    formatter(v12, 133, 211);
    formatter("%ywPAGES FREE:", 172, 211);
    sub_80260DD4((int)v12, "%%yw%d", -6194676);
    sub_8022F520();
    formatter(v12, 250, 211);
    sub_80245604((int)&dword_8028D0B0, 214, 432);
    sub_80245604((int)&dword_8028DD20, 344, 432);
    sub_8022F514();
    formatter("%wwSELECT", 123, 225);
    formatter("%wwEXIT", 188, 225);
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -419430400;
    sub_80223A70();
    sub_8021AA08();
    if ( sub_80223988() )
    {
      byte_8028DD94 = 0;
      dword_802724F0 = 0;
      sub_80219A3C();
      sub_80217FB8();
      sub_8021AA08();
      osViBlack(1);
      sub_80219A3C();
      sub_80217FB8();
      sub_8021AA08();
      sub_8021C6E4((int)sub_80200108);
    }
    word_802A4BE8 = 1;
  }
  else
  {
    sub_8021C6E4((int)sub_80200108);
    byte_8028DD94 = 0;
    word_802A4BE8 = 1;
  }
}
// 80253504: write access to const memory at 802A4BE8 has been detected
// 8025350C: write access to const memory at 8028DD94 has been detected
// 8025351C: write access to const memory at 8036A060 has been detected
// 80253548: write access to const memory at 8028DD94 has been detected
// 8025355C: write access to const memory at 802A4BE8 has been detected
// 802535A4: write access to const memory at 802724F0 has been detected
// 802535B4: write access to const memory at 8036A270 has been detected
// 802539A0: write access to const memory at 802724F0 has been detected
// 802539E4: write access to const memory at 802724F0 has been detected
// 802539FC: write access to const memory at 802A4BE8 has been detected
// 80253A64: write access to const memory at 8036A270 has been detected
// 80253A70: write access to const memory at 8036A270 has been detected
// 80253A90: write access to const memory at 802724F0 has been detected
// 80253ACC: write access to const memory at 8036A270 has been detected
// 80253AD8: write access to const memory at 8036A270 has been detected
// 80253B18: write access to const memory at 8028DD98 has been detected
// 80253B38: write access to const memory at 8036A062 has been detected
// 80253B60: write access to const memory at 8036A062 has been detected
// 80253B74: write access to const memory at 8036A063 has been detected
// 80253B94: write access to const memory at 8036A063 has been detected
// 80253BB8: write access to const memory at 802724F0 has been detected
// 80253BF4: write access to const memory at 8036A270 has been detected
// 80253C00: write access to const memory at 8036A270 has been detected
// 80253C08: write access to const memory at 8036A060 has been detected
// 80253C20: write access to const memory at 8036A270 has been detected
// 80253C2C: write access to const memory at 8036A061 has been detected
// 80253CAC: write access to const memory at 8036A061 has been detected
// 80253CB8: write access to const memory at 8036A061 has been detected
// 80253CD0: write access to const memory at 8036A061 has been detected
// 80253CF0: write access to const memory at 8036A061 has been detected
// 80253D58: write access to const memory at 8036A061 has been detected
// 80253D64: write access to const memory at 8036A061 has been detected
// 80253D7C: write access to const memory at 8036A061 has been detected
// 80253D9C: write access to const memory at 8036A061 has been detected
// 80253DE0: write access to const memory at 8036A270 has been detected
// 80253E10: write access to const memory at 8036A270 has been detected
// 80253FB0: write access to const memory at 8036A270 has been detected
// 80253FD0: write access to const memory at 8036A270 has been detected
// 80254078: write access to const memory at 8036A270 has been detected
// 80254080: write access to const memory at 8036A068 has been detected
// 80254098: write access to const memory at 8036A064 has been detected
// 802540D4: write access to const memory at 802724F0 has been detected
// 80254118: write access to const memory at 8028DD98 has been detected
// 80254140: write access to const memory at 8036A068 has been detected
// 80254150: write access to const memory at 8036A064 has been detected
// 80254194: write access to const memory at 8036A063 has been detected
// 802541A0: write access to const memory at 8036A063 has been detected
// 802541B8: write access to const memory at 8036A063 has been detected
// 802541D0: write access to const memory at 8036A063 has been detected
// 802541F8: write access to const memory at 8036A061 has been detected
// 80254204: write access to const memory at 8036A061 has been detected
// 8025421C: write access to const memory at 8036A061 has been detected
// 8025423C: write access to const memory at 8036A061 has been detected
// 8025427C: write access to const memory at 8036A062 has been detected
// 80254288: write access to const memory at 8036A062 has been detected
// 802542A0: write access to const memory at 8036A062 has been detected
// 802542B8: write access to const memory at 8036A062 has been detected
// 802542DC: write access to const memory at 8036A061 has been detected
// 802542E8: write access to const memory at 8036A061 has been detected
// 80254300: write access to const memory at 8036A061 has been detected
// 80254318: write access to const memory at 8036A061 has been detected
// 8025432C: write access to const memory at 8036A270 has been detected
// 80254344: write access to const memory at 8036A270 has been detected
// 80254350: write access to const memory at 8036A270 has been detected
// 8025441C: write access to const memory at 8036A060 has been detected
// 80254424: write access to const memory at 802724F0 has been detected
// 80254434: write access to const memory at 8036A270 has been detected
// 8025444C: write access to const memory at 8036A270 has been detected
// 8025459C: write access to const memory at 8028DD94 has been detected
// 802545A8: write access to const memory at 802724F0 has been detected
// 802545FC: write access to const memory at 802A4BE8 has been detected
// 80253A10: write access to const memory at 802724F0 has been detected
// 80254574: write access to const memory at 8028A858 has been detected
// 80254120: write access to const memory at 8036BC7E has been detected
// 80254124: write access to const memory at 8036BC7A has been detected
// 80254148: write access to const memory at 8036BC70 has been detected
// 802724F0: using guessed type int dword_802724F0;
// 80272D48: using guessed type int dword_80272D48[6];
// 8028A858: using guessed type int dword_8028A858;
// 8028CB40: using guessed type int dword_8028CB40;
// 8028CB70: using guessed type int dword_8028CB70;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028DD20: using guessed type int dword_8028DD20;
// 8028DD94: using guessed type char byte_8028DD94;
// 8028DD98: using guessed type __int16 word_8028DD98;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 8036A060: using guessed type char byte_8036A060;
// 8036A061: using guessed type char byte_8036A061;
// 8036A062: using guessed type char byte_8036A062;
// 8036A063: using guessed type char byte_8036A063;
// 8036A064: using guessed type int dword_8036A064;
// 8036A068: using guessed type int dword_8036A068;
// 8036A070: using guessed type int dword_8036A070[128];
// 8036A270: using guessed type char byte_8036A270;
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036B650: using guessed type int[512];
