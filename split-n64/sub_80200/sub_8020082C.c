#include "../../types-n64.h"
//----- (8020082C) --------------------------------------------------------
// sub_1002C500 on PC
// write access to const memory has been detected, the output may be wrong!
void sub_8020082C()
{
  int v0; // $s1
  int i; // $t3
  int v2; // $t9
  int v3; // $s1
  int j; // $t3
  int v5; // $s1
  int k; // $t7
  int v7; // $t1
  int v8; // $t0
  int v9; // $t8
  int v10; // $t3
  int v11; // $s1
  int l; // $t2
  int v13; // $at
  int v14; // $s1
  int m; // $t3
  int v16; // $s1
  int n; // $t9
  int v18; // $s1
  int ii; // $t3
  int v20; // $s1
  int jj; // $t0
  int v22; // $s1
  int kk; // $t2
  int v24; // $s1
  int v25; // $t8
  int v26; // $t8
  int v27; // $s7
  int v28; // $t2
  int v29; // $s1
  int ll; // $t7
  int v31; // $s0
  int mm; // $t1
  int nn; // $s0
  int v34; // $s1
  int i1; // $t9
  int v36; // $s1
  int i2; // $t2
  int v38; // $s1
  int i3; // $t9
  int v40; // $s1
  int i4; // $t6
  int v42; // $s1
  int i5; // $t9
  int i6; // $s1
  int v45; // $t5
  int i9; // $s1
  int v47; // $t4
  int i8; // [sp+80h] [-B8h]
  int i7; // [sp+84h] [-B4h]
  int v50; // [sp+F8h] [-40h]

  dword_8028A884 = 1;
  osViBlack(1);
  sub_80219A1C();
  sub_8021AA08();
  osViBlack(1);
  sub_80219A1C();
  sub_8021AA08();
  sub_80225ED8(123);
  dword_8027078C = 0;
  dword_8028B304 = 3;
  dword_802A4A30 = 0;
  dword_8028B7F0 = 20;
  dword_8028B7F4 = 3;
  v0 = 0;
  for ( i = 0; ; i = v0 << 6 )
  {
    *(_DWORD *)(*(_DWORD *)(16 * (8 * (i + v0) + v0) - 2144217132) + 68) = 0;
    *(_DWORD *)(*(_DWORD *)(8336 * v0 - 2144217132) + 44) = 0;
    v2 = *(_DWORD *)(8336 * v0++ - 2144217132);
    *(_DWORD *)(v2 + 48) = 0;
    if ( v0 >= 1 )
      break;
  }
  dword_8027078C = 1;
  dword_8028A8AC = 0;
  sub_80214BEC();
  sub_80200320();
  sub_8022BAA0();
  LoadTrack(2);
  dword_8026FF70 = 0;
  dword_8026FF68 = 0;
  dword_8026FF64 = 0;
  dword_8026FF84 = 0;
  dword_8026FF80 = 0;
  flt_8026FF88 = 0.0;
  flt_8026FF8C = 0.0;
  dword_8026FF74 = 0;
  dword_8026FF78 = 0;
  debugPrint("specials: %d\n", MEMORY[0x80025E24]);
  dword_802707C4 = 0;
  v3 = 0;
  if ( MEMORY[0x80025E24] > 0 )
  {
    for ( j = 0; ; j = 4 * v3 )
    {
      switch ( *(_BYTE *)(4 * (j - v3) - 2147328660) )
      {
        case 3:
          dword_8026FF64 = *(_DWORD *)(12 * v3 - 2147352576 + 23908);
          debugPrint("airplane = %d\n", 0);
          break;
        case 4:
          dword_8026FF78 = *(_DWORD *)(12 * v3 - 2147329024 + 360);
          dword_8026FF80 = *(_DWORD *)(12 * v3 - 2147329024 + 356);
          debugPrint("airplanePathLeft = %08x\n", 0);
          break;
        case 5:
          dword_8026FF84 = *(_DWORD *)(12 * v3 - 2147352576 + 23908);
          debugPrint("airplanePathRight = %08x\n", 0);
          break;
        case 6:
          dword_8026FF68 = *(_DWORD *)(12 * v3 - 2147352576 + 23908);
          debugPrint("airplanetrigger = %d\n", 0);
          break;
        case 7:
          dword_80315DF8 = *(_DWORD *)(12 * v3 - 2147328668);
          dword_802707C4 = 1;
          debugPrint("waterfall = %d\n", *(_DWORD *)(12 * v3 - 2147352576 + 23908));
          break;
        default:
          break;
      }
      if ( ++v3 >= MEMORY[0x80025E24] )
        break;
    }
  }
  dword_8026FF64 = 0;
  dword_8026FF6C = 2;
  dword_8028AB0C = 1;
  dword_8031B2D8 = 0;
  dword_8031B2EC = 0;
  v5 = 0;
  for ( k = 0; ; k = v5 << 6 )
  {
    dword_8031B760[2084 * v5 + 923] = *(_DWORD *)(dword_8031B760[32 * k + 919 + 32 * v5 + 4 * v5] + 216);
    dword_8031B760[2084 * v5 + 921] = *(_DWORD *)(dword_8031B760[2084 * v5 + 919] + 224);
    dword_8031B760[2084 * v5 + 920] = *(_DWORD *)(dword_8031B760[2084 * v5 + 919] + 220);
    dword_8031B760[2084 * v5 + 922] = *(_DWORD *)(dword_8031B760[2084 * v5 + 919] + 212);
    v7 = dword_8031B760[2084 * v5 + 2077];
    v8 = *(_DWORD *)(dword_8031B760[2084 * v5++ + 919] + 228);
    *(_BYTE *)(v7 + 37) = v8;
    if ( v5 >= 1 )
      break;
  }
  v9 = v5 << 6;
  if ( v5 < 2 )
  {
    while ( 1 )
    {
      *(_DWORD *)(16 * (8 * (v9 + v5) + v5) - 2144221748) = 1;
      *(_DWORD *)(8336 * v5 - 2144221756) = 1;
      *(_DWORD *)(8336 * v5 - 2144221760) = 2;
      *(_DWORD *)(8336 * v5 - 2144221752) = 0;
      v10 = *(_DWORD *)(8336 * v5++ - 2144217132);
      *(_BYTE *)(v10 + 37) = 0;
      if ( v5 >= 2 )
        break;
      v9 = v5 << 6;
    }
  }
  dword_80270790 = 0;
  v11 = 0;
  for ( l = 0; ; l = v11 << 6 )
  {
    *(float *)(16 * (8 * (l + v11) + v11) - 2144217148) = 1.0;
    if ( v11 >= 1 )
    {
      sub_80225F88((int)&dword_8031B760[2084 * v11]);
      dword_8031B760[2084 * v11 + 950] = (int)sub_802288B4;
    }
    else
    {
      dword_8031B760[2084 * v11 + 950] = (int)sub_80226D7C;
    }
    LOBYTE(dword_8031B760[2084 * v11 + 2072]) = 0;
    if ( !dword_8031B760[2084 * v11 + 918] )
      sub_80220438((int)&dword_8031B760[2084 * v11], v11, dword_8031B760[2084 * v11 + 2071]);
    sub_80228A6C((int)&dword_8031B760[2084 * v11]);
    *(_DWORD *)(8336 * v11 - 2144221524) = 0;
    *(_DWORD *)(8336 * v11 - 2144221424) = 0;
    v13 = 8336 * v11++ - 2144206848;
    *(_DWORD *)(v13 - 14568) = 0;
    if ( v11 >= 2 )
      break;
  }
  dword_802F7EF8 = 0;
  dword_80315E78 = MEMORY[0x4ECC6160];
  flt_802F7EF0 = MEMORY[0x4ECC6164];
  dword_8028B300 = 0;
  v14 = 0;
  for ( m = 0; ; m = 16 * v14 )
  {
    sub_802291F8((int)&dword_803239A0[2 * (m - v14++)]);
    if ( v14 >= 1 )
      break;
  }
  sub_80200050(1);
  sub_80223688(1.0, 0.2);
  sub_80223750(1.0, 0.2);
  sub_802237D0(1.0, 0.2);
  dword_80315E38 = 2;
  dword_802707C8 = 1;
  dword_8026FF54 = (int)dword_802F7F00;
  sub_8021DDFC((unsigned int *)dword_802F7F00, 1881104, 1940720);
  sub_8021D7E0(0);
  sub_8023CF30();
  sub_80259350();
  dword_8026FF10 = 0;
  dword_802707CC = 0;
  dword_80315E74 = -1;
  flt_80315E68 = 0.0;
  dword_80315E6C = 0;
  dword_8028AB10 = 1;
  sub_8021C46C();
  sub_8022B428();
  dword_8028A884 = 0;
  word_802A4C04 = 0;
  dword_802A4A30 = 1;
  sub_8021C4B4();
  dword_8026FF58 = 0;
  dword_8026FF5C = 0;
  v50 = 0;
  sub_8022D7E0(0, 0, 0, 200, 255);
  sub_80225F30();
  v16 = 0;
  for ( n = 0; ; n = v16 << 6 )
  {
    sub_8022BCAC((int)&dword_8031B760[32 * n + 32 * v16 + 4 * v16]);
    if ( ++v16 >= 2 )
      break;
  }
  v18 = 0;
  for ( ii = 0; ; ii = 16 * v18 )
  {
    sub_8022C9FC((int)&dword_803239A0[2 * (ii - v18++)]);
    if ( v18 >= 1 )
      break;
  }
  v20 = 0;
  for ( jj = 0; ; jj = 16 * v20 )
  {
    sub_8022CF88((int)&dword_803239A0[2 * (jj - v20++)]);
    if ( v20 >= 1 )
      break;
  }
  v22 = 0;
  for ( kk = 0; ; kk = v22 << 6 )
  {
    sub_80229700((int)&dword_8031B760[32 * kk + 32 * v22 + 4 * v22]);
    if ( ++v22 >= 1 )
      break;
  }
  sub_80229550();
  sub_8022D7E0(0, 128, 128, 0, 255);
  sub_8023CFC4();
  sub_8022D7E0(0, 0, 255, 255, 255);
  sub_8023A1C8();
  v24 = 0;
  v25 = 0;
  if ( MEMORY[0x80025E24] > 0 )
  {
    while ( 1 )
    {
      v26 = 4 * (v25 - v24);
      v27 = *(unsigned __int8 *)(v26 - 2147328660);
      if ( !*(_BYTE *)(v26 - 2147328660) )
        break;
      if ( v27 == 1 )
      {
        sub_80260BC0((float *)flt_8031AB10, *(float *)(12 * v24 - 2147352576 + 23912), 1.0, 0.0, 0.0);
        v28 = 4 * v24;
        goto LABEL_51;
      }
      if ( v27 == 2 )
      {
        sub_80260BC0((float *)flt_8031AB10, *(float *)(12 * v24 - 2147352576 + 23912), 0.0, 1.0, 0.0);
        v28 = 4 * v24;
        goto LABEL_51;
      }
LABEL_52:
      if ( ++v24 >= MEMORY[0x80025E24] )
        goto LABEL_54;
      v25 = 4 * v24;
    }
    sub_80260BC0((float *)flt_8031AB10, *(float *)(12 * v24 - 2147352576 + 23912), 0.0, 0.0, 1.0);
    v28 = 4 * v24;
LABEL_51:
    sub_80260940(
      (float *)flt_8031AB10,
      (float *)(MEMORY[0x80025C60] + 84 * *(_DWORD *)(4 * (v28 - v24) - 2147329024 + 356)),
      MEMORY[0x80025C60] + 84 * *(_DWORD *)(12 * v24 - 2147329024 + 356));
    *(_WORD *)(MEMORY[0x80025C60] + 84 * *(_DWORD *)(12 * v24 - 2147329024 + 356) + 76) &= 0xDFFFu;
    goto LABEL_52;
  }
LABEL_54:
  v29 = 0;
  for ( ll = 0; ; ll = v29 << 6 )
  {
    sub_8022BCB4((int)&dword_8031B760[32 * ll + 32 * v29 + 4 * v29]);
    if ( ++v29 >= 2 )
      break;
  }
  sub_8022B404();
  v31 = 0;
  for ( mm = 0; ; mm = 4 * v31 )
  {
    dword_8028AAF0 = (int)&dword_8031B760[2084 * *(_DWORD *)(4 * (mm + v31) - 2144226600)];
    dword_8028AAF4 = MEMORY[0x1DE8];
    sub_8022BA98();
    if ( ++v31 >= 1 )
      break;
  }
  sub_8022B534();
  sub_80223F54();
  sub_80219A1C();
  sub_8022D7E0(0, 0, 130, 0, 255);
  sub_80233FDC();
  sub_80217C94();
  sub_80217FB8();
  dword_80315E38 = 2;
  dword_80315E74 = 1;
  for ( nn = 0; nn < 1; ++nn )
  {
    sub_8022D7E0(0, 0, 0, 0, 255);
    dword_8028AAF0 = (int)&dword_8031B760[2084 * *(_DWORD *)(20 * nn - 2144226600)];
    dword_8028AAF4 = MEMORY[0x1DE8];
    dword_8028AAEC = nn;
    sub_8021F380(
      0,
      0,
      (float *)0x30,
      dword_8031B248,
      &dword_8028AB00,
      dword_8031B288,
      &dword_8028AB04,
      (float *)&dword_8028AAF8,
      &dword_8028AAFC);
    sub_80219BF0(
      dword_8031B2C8[5 * nn],
      dword_8031B2C8[5 * nn + 1],
      dword_8031B2C8[5 * nn + 2],
      dword_8031B2C8[5 * nn + 3],
      1);
    sub_8021B0C4(0, MEMORY[0x40], 400.0, (float)dword_8031B2C8[5 * nn + 2], (float)dword_8031B2C8[5 * nn + 3]);
    sub_8021B2F8(0, MEMORY[0x40], 400.0, (float)dword_8031B2C8[5 * nn + 2], (float)dword_8031B2C8[5 * nn + 3]);
    sub_802182A8();
    sub_80218D5C();
    sub_8022D7E0(0, 0, 130, 0, 255);
    sub_8022F968();
    sub_80223470();
    sub_8022D49C();
    dword_8028C328 = 1;
    v34 = 0;
    for ( i1 = 0; ; i1 = v34 << 6 )
    {
      sub_802303D4((int)&dword_8031B760[32 * i1 + 32 * v34 + 4 * v34]);
      if ( ++v34 >= 2 )
        break;
    }
    sub_80235BAC(0);
    sub_802182A8();
    sub_80218D5C();
    sub_8022D7E0(0, 128, 128, 128, 255);
    v36 = 0;
    for ( i2 = 0; ; i2 = 16 * v36 )
    {
      if ( dword_803239A0[2 * (i2 - v36) + 24] && *(_BYTE *)(dword_803239A0[30 * v36 + 24] + 8291) != 2 )
        sub_80230554(dword_803239A0[30 * v36 + 24], 0);
      if ( ++v36 >= 1 )
        break;
    }
    sub_8022D7E0(0, 128, 128, 0, 255);
    sub_8023D714();
    sub_8022D7E0(0, 64, 64, 64, 255);
    sub_8020046C();
    sub_80235BAC(1);
    sub_8022D7E0(0, 128, 128, 128, 255);
    v38 = 0;
    for ( i3 = 0; ; i3 = 16 * v38 )
    {
      if ( dword_803239A0[2 * (i3 - v38) + 24] )
        sub_80232ED4();
      if ( ++v38 >= 1 )
        break;
    }
    sub_8022D7E0(0, 128, 128, 128, 255);
    v40 = 0;
    for ( i4 = 0; ; i4 = 16 * v40 )
    {
      if ( dword_803239A0[2 * (i4 - v40) + 24] && *(_BYTE *)(dword_803239A0[30 * v40 + 24] + 8291) == 2 )
        sub_80230554(dword_803239A0[30 * v40 + 24], 0);
      if ( ++v40 >= 1 )
        break;
    }
    sub_8022D7E0(0, 128, 128, 0, 255);
    sub_8023DBC0();
    sub_8022D7E0(0, 0, 255, 255, 255);
    sub_8023A784();
    sub_8022D7E0(0, 0, 130, 0, 255);
    sub_80223480();
    sub_8021B5A4();
    sub_80219DF0(
      dword_8031B2C8[5 * nn],
      dword_8031B2C8[5 * nn + 1],
      dword_8031B2C8[5 * nn + 2],
      dword_8031B2C8[5 * nn + 3],
      1);
    sub_8022D7E0(0, 255, 0, 0, 255);
    sub_80238F30();
    sub_8022D7E0(0, 0, 130, 0, 255);
    nullsub_7();
    sub_80219F6C(
      dword_8031B2C8[5 * nn],
      dword_8031B2C8[5 * nn + 1],
      dword_8031B2C8[5 * nn + 2],
      dword_8031B2C8[5 * nn + 3]);
  }
  nullsub_6();
  sub_80219A78(0, 0, 320, 240);
  v42 = 0;
  for ( i5 = 0; ; i5 = v42 << 6 )
  {
    if ( (**(_DWORD **)(16 * (8 * (i5 + v42) + v42) - 2144217132) & 0x4000) != 0 )
    {
      v50 = 1;
      dword_8026FF14 = 0;
      sub_80223750(0.0, 0.2);
      sub_802237D0(0.0, 0.2);
      sub_80255910((int *)0xB636F901, 0x4000);
      sub_80255910((int *)0x8B9E811C, 0x4000);
      goto LABEL_89;
    }
    if ( (**(_DWORD **)(8336 * v42 - 2144217132) & 0x10) != 0 )
      break;
    if ( ++v42 >= 1 )
      goto LABEL_89;
  }
  sub_80255910((int *)0xB636F901, 16);
  sub_80255910((int *)0x8B9E811C, 16);
LABEL_89:
  sub_80223A70();
  sub_8022D7E0(0, 255, 224, 0, 255);
  sub_8021A5B8();
  sub_8022D7E0(0, 0, 130, 0, 255);
  sub_8021C6B8((int)sub_802003E4);
  sub_8021AA08();
  if ( sub_802238FC() && sub_80223940() )
  {
    for ( i6 = 0; i6 < 4; ++i6 )
    {
      for ( i7 = 0; i7 < 1; ++i7 )
        *(_DWORD *)(dword_8031B760[2084 * i6 + 2077] + 4 * i7 + 60) = *(_DWORD *)(dword_8031B760[2084 * i6 + 2077]
                                                                                + 4 * i7
                                                                                + 52);
    }
    dword_802A49B0 = 0;
    for ( i8 = 0; i8 < 6; ++i8 )
    {
      *(_DWORD *)(24 * i8 - 2144731136 + 18740) = 0;
      *(_DWORD *)(24 * i8 - 2144731136 + 18736) = 0;
      v45 = 24 * i8;
      *(_DWORD *)(v45 - 2144731136 + 18728) = 0;
      *(_DWORD *)(v45 - 2144731136 + 18732) = 0;
      *(_DWORD *)(24 * i8 - 2144731136 + 18720) = &dword_802A4A08;
    }
    dword_8028AB10 = 0;
    word_802A4C04 = 1;
    for ( i9 = 0; i9 < 4; ++i9 )
    {
      v47 = *(_DWORD *)(8336 * i9 - 2144217132);
      *(_DWORD *)(v47 + 68) = 0;
    }
  }
  if ( v50 )
  {
    sub_8022AF34();
    dword_8026FF10 = v50;
  }
}
// 80200870: write access to const memory at 8028A884 has been detected
// 802008B8: write access to const memory at 8027078C has been detected
// 802008CC: write access to const memory at 8028B304 has been detected
// 802008DC: write access to const memory at 802A4A30 has been detected
// 80200908: write access to const memory at 8028B7F0 has been detected
// 80200918: write access to const memory at 8028B7F4 has been detected
// 80200B24: write access to const memory at 8027078C has been detected
// 80200B2C: write access to const memory at 8028B7F0 has been detected
// 80200B40: write access to const memory at 8028B7F4 has been detected
// 80200B48: write access to const memory at 8026FF08 has been detected
// 80200B58: write access to const memory at 8028B7F0 has been detected
// 80200B64: write access to const memory at 8028B7F4 has been detected
// 80200B68: write access to const memory at 8027078C has been detected
// 80200B70: write access to const memory at 80270788 has been detected
// 80200BA0: write access to const memory at 8028B7F8 has been detected
// 80200BA8: write access to const memory at 8028C800 has been detected
// 80200BB8: write access to const memory at 8026FF08 has been detected
// 80200BC4: write access to const memory at 8028B7F0 has been detected
// 80200BD0: write access to const memory at 8028B7F4 has been detected
// 80200BDC: write access to const memory at 8027078C has been detected
// 80200D80: write access to const memory at 8028B940 has been detected
// 80200E2C: write access to const memory at 8028C800 has been detected
// 80200E30: write access to const memory at 8028C800 has been detected
// 80200E54: write access to const memory at 8028B7F0 has been detected
// 80200E64: write access to const memory at 8028B7F4 has been detected
// 80200E78: write access to const memory at 8027078C has been detected
// 80200E84: write access to const memory at 802707A8 has been detected
// 80201384: write access to const memory at 8028B7F0 has been detected
// 8020138C: write access to const memory at 8028B7F4 has been detected
// 80201394: write access to const memory at 8027078C has been detected
// 802013B4: write access to const memory at 8028A8AC has been detected
// 802013E0: write access to const memory at 8028A8AC has been detected
// 80201458: write access to const memory at 8026FF70 has been detected
// 8020145C: write access to const memory at 8026FF68 has been detected
// 80201464: write access to const memory at 8026FF64 has been detected
// 80201474: write access to const memory at 8026FF84 has been detected
// 80201478: write access to const memory at 8026FF80 has been detected
// 8020147C: write access to const memory at 8026FF88 has been detected
// 80201480: write access to const memory at 8026FF8C has been detected
// 80201490: write access to const memory at 8026FF74 has been detected
// 80201494: write access to const memory at 8026FF78 has been detected
// 802014AC: write access to const memory at 802707C4 has been detected
// 8020152C: write access to const memory at 8026FF78 has been detected
// 80201544: write access to const memory at 8026FF80 has been detected
// 80201578: write access to const memory at 8026FF84 has been detected
// 802015AC: write access to const memory at 8026FF64 has been detected
// 802015E0: write access to const memory at 8026FF68 has been detected
// 80201644: write access to const memory at 802707C4 has been detected
// 80201694: write access to const memory at 8026FF64 has been detected
// 80201708: write access to const memory at 8026FF7C has been detected
// 80201720: write access to const memory at 8026FF6C has been detected
// 8020173C: write access to const memory at 8028AB0C has been detected
// 80201748: write access to const memory at 8028AB0C has been detected
// 802017C0: write access to const memory at 8028B7F8 has been detected
// 80201AC8: write access to const memory at 80270790 has been detected
// 80201E68: write access to const memory at 802F7EF8 has been detected
// 80201E88: write access to const memory at 802F7EF8 has been detected
// 80201E8C: write access to const memory at 802F7EF8 has been detected
// 80201EBC: write access to const memory at 80315E78 has been detected
// 80201ECC: write access to const memory at 802F7EF0 has been detected
// 80201ED8: write access to const memory at 8028B300 has been detected
// 80201F50: write access to const memory at 8026FF64 has been detected
// 80201F94: write access to const memory at 80315E38 has been detected
// 80201FA4: write access to const memory at 802707C8 has been detected
// 80201FBC: write access to const memory at 8026FF54 has been detected
// 80201FE8: write access to const memory at 8026FF10 has been detected
// 80201FF0: write access to const memory at 802707CC has been detected
// 80202004: write access to const memory at 80315E74 has been detected
// 80202010: write access to const memory at 80315E68 has been detected
// 80202018: write access to const memory at 80315E6C has been detected
// 8020202C: write access to const memory at 8028AB10 has been detected
// 80202040: write access to const memory at 8028A884 has been detected
// 80202050: write access to const memory at 802A4C04 has been detected
// 802020D0: write access to const memory at 802A4A30 has been detected
// 80202164: write access to const memory at 802707CC has been detected
// 8020216C: write access to const memory at 8027078C has been detected
// 802022A8: write access to const memory at 802707CC has been detected
// 802022B0: write access to const memory at 8027078C has been detected
// 802022EC: write access to const memory at 8026FF58 has been detected
// 802022FC: write access to const memory at 8026FF5C has been detected
// 80202318: write access to const memory at 8026FF5C has been detected
// 80202468: write access to const memory at 8026FF58 has been detected
// 80202478: write access to const memory at 802F7EF4 has been detected
// 80202488: write access to const memory at 8026FF58 has been detected
// 802024B8: write access to const memory at 802F7EF4 has been detected
// 80202500: write access to const memory at 8026FF60 has been detected
// 80202534: write access to const memory at 802F7EF0 has been detected
// 80202558: write access to const memory at 802F7EF8 has been detected
// 80202564: write access to const memory at 80315E78 has been detected
// 80202578: write access to const memory at 802F7EF0 has been detected
// 8020259C: write access to const memory at 8026FF58 has been detected
// 802025A8: write access to const memory at 8026FF5C has been detected
// 80202634: write access to const memory at 8026FF60 has been detected
// 80202654: write access to const memory at 8026FF60 has been detected
// 80202748: write access to const memory at 802707CC has been detected
// 80202750: write access to const memory at 80270788 has been detected
// 80202758: write access to const memory at 8027078C has been detected
// 80202A74: write access to const memory at 80270784 has been detected
// 80202B98: write access to const memory at 802707A8 has been detected
// 80202CD8: write access to const memory at 8027078C has been detected
// 80202DE8: write access to const memory at 802707CC has been detected
// 802030AC: write access to const memory at 8026FF70 has been detected
// 80203344: write access to const memory at 8026FF88 has been detected
// 80203368: write access to const memory at 8026FF88 has been detected
// 8020339C: write access to const memory at 8026FF88 has been detected
// 802033AC: write access to const memory at 8026FF74 has been detected
// 802033C4: write access to const memory at 8026FF64 has been detected
// 80203450: write access to const memory at 8026FF8C has been detected
// 802039EC: write access to const memory at 8028AAF0 has been detected
// 802039FC: write access to const memory at 8028AAF4 has been detected
// 80203B70: write access to const memory at 80315E38 has been detected
// 80203BCC: write access to const memory at 80315E38 has been detected
// 80203BD4: write access to const memory at 80315E74 has been detected
// 80203C44: write access to const memory at 8028AAF0 has been detected
// 80203C68: write access to const memory at 8028AAF4 has been detected
// 80203C88: write access to const memory at 8028AAEC has been detected
// 80203F4C: write access to const memory at 8028C328 has been detected
// 80203F54: write access to const memory at 8028C328 has been detected
// 802045B8: write access to const memory at 8028AAF4 has been detected
// 80204A0C: write access to const memory at 8028AAF4 has been detected
// 80204D9C: write access to const memory at 80315E38 has been detected
// 80204E88: write access to const memory at 80315E38 has been detected
// 80204EA8: write access to const memory at 802707CC has been detected
// 80204EB0: write access to const memory at 8027078C has been detected
// 80204EC0: write access to const memory at 802707C8 has been detected
// 80204EF4: write access to const memory at 8027078C has been detected
// 80204F04: write access to const memory at 802707CC has been detected
// 80204FEC: write access to const memory at 8026FF14 has been detected
// 802050D8: write access to const memory at 8026FF14 has been detected
// 802054EC: write access to const memory at 80315E70 has been detected
// 802054FC: write access to const memory at 802707CC has been detected
// 80205500: write access to const memory at 8027078C has been detected
// 802055A0: write access to const memory at 8027078C has been detected
// 802055B4: write access to const memory at 802707CC has been detected
// 802055C4: write access to const memory at 8026FF14 has been detected
// 80205668: write access to const memory at 8027078C has been detected
// 80205678: write access to const memory at 802707CC has been detected
// 802058E8: write access to const memory at 80315E68 has been detected
// 80205914: write access to const memory at 80315E68 has been detected
// 80205918: write access to const memory at 80315E6C has been detected
// 80205A74: write access to const memory at 802A49B0 has been detected
// 80205B28: write access to const memory at 8028AB10 has been detected
// 80205B6C: write access to const memory at 80315E3C has been detected
// 80205B70: write access to const memory at 80315E40 has been detected
// 80205BEC: write access to const memory at 80315E3C has been detected
// 80205BF0: write access to const memory at 80315E40 has been detected
// 80205DAC: write access to const memory at 80270788 has been detected
// 80205DC0: write access to const memory at 8028A8AC has been detected
// 80205DEC: write access to const memory at 8026FF18 has been detected
// 80205DFC: write access to const memory at 802724F4 has been detected
// 80205F0C: write access to const memory at 80270788 has been detected
// 80205F14: write access to const memory at 802707C8 has been detected
// 80205F20: write access to const memory at 802A4C04 has been detected
// 80205F9C: write access to const memory at 8026FF10 has been detected
// 80200B8C: write access to const memory at 8031C5B8 has been detected
// 80200B94: write access to const memory at 8031D548 has been detected
// 80200BE8: write access to const memory at 8031C5B8 has been detected
// 80200D38: write access to const memory at 8031D7C0 has been detected
// 80200D48: write access to const memory at 8031D7C1 has been detected
// 80200D58: write access to const memory at 8031D7C2 has been detected
// 80200D94: write access to const memory at 8031D7B8 has been detected
// 80200D98: write access to const memory at 8031D7BC has been detected
// 80200DB0: write access to const memory at 8031C5C8 has been detected
// 80200DC8: write access to const memory at 8031C5CC has been detected
// 80200DE0: write access to const memory at 8031C5C0 has been detected
// 80200DF0: write access to const memory at 8031C5C4 has been detected
// 80200F2C: write access to const memory at 8031F848 has been detected
// 80200F6C: write access to const memory at 8031F84C has been detected
// 80201630: write access to const memory at 80315DF8 has been detected
// 80201770: write access to const memory at 8031B2D8 has been detected
// 8020177C: write access to const memory at 8031B2D8 has been detected
// 80201798: write access to const memory at 8031B2EC has been detected
// 802017B0: write access to const memory at 8031D548 has been detected
// 8020199C: write access to const memory at 8031E65C has been detected
// 802019B4: write access to const memory at 8031E650 has been detected
// 802019C4: write access to const memory at 8031E654 has been detected
// 80202204: write access to const memory at 8031B2EC has been detected
// 80202214: write access to const memory at 8031B2D8 has been detected
// 80202CFC: write access to const memory at 8031C710 has been detected
// 80202D0C: write access to const memory at 8031E7A4 has been detected
// 80202D18: write access to const memory at 8031C714 has been detected
// 80203498: write access to const memory at 8026FF90 has been detected
// 802034A0: write access to const memory at 8026FF94 has been detected
// 802034AC: write access to const memory at 8026FF98 has been detected
// 80203540: write access to const memory at 8026FFA8 has been detected
// 80203548: write access to const memory at 8026FFAC has been detected
// 80203554: write access to const memory at 8026FFB0 has been detected
// 80205F78: conditional instruction was optimized away because of '%var_40.4!=0'
// 802003E4: using guessed type int sub_802003E4();
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF10: using guessed type int dword_8026FF10;
// 8026FF14: using guessed type int dword_8026FF14;
// 8026FF18: using guessed type int dword_8026FF18;
// 8026FF1C: using guessed type int dword_8026FF1C;
// 8026FF54: using guessed type int dword_8026FF54;
// 8026FF58: using guessed type int dword_8026FF58;
// 8026FF5C: using guessed type int dword_8026FF5C;
// 8026FF64: using guessed type int dword_8026FF64;
// 8026FF68: using guessed type int dword_8026FF68;
// 8026FF6C: using guessed type int dword_8026FF6C;
// 8026FF70: using guessed type int dword_8026FF70;
// 8026FF74: using guessed type int dword_8026FF74;
// 8026FF78: using guessed type int dword_8026FF78;
// 8026FF80: using guessed type int dword_8026FF80;
// 8026FF84: using guessed type int dword_8026FF84;
// 8026FF88: using guessed type float flt_8026FF88;
// 8026FF8C: using guessed type float flt_8026FF8C;
// 8026FF94: using guessed type float flt_8026FF94;
// 8026FF98: using guessed type float flt_8026FF98;
// 8026FFAC: using guessed type float flt_8026FFAC;
// 8026FFB0: using guessed type float flt_8026FFB0;
// 80270788: using guessed type int dword_80270788;
// 8027078C: using guessed type int dword_8027078C;
// 80270790: using guessed type int dword_80270790;
// 802707A8: using guessed type int dword_802707A8;
// 802707C4: using guessed type int dword_802707C4;
// 802707C8: using guessed type int dword_802707C8;
// 802707CC: using guessed type int dword_802707CC;
// 802709DC: using guessed type int dword_802709DC[95];
// 802723D4: using guessed type int dword_802723D4;
// 802724F4: using guessed type char byte_802724F4;
// 8028A884: using guessed type int dword_8028A884;
// 8028A8AC: using guessed type int dword_8028A8AC;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAB0: using guessed type int gWidth;
// 8028AAB4: using guessed type int gHeight;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028AAEC: using guessed type int dword_8028AAEC;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028AAF8: using guessed type int dword_8028AAF8;
// 8028AAFC: using guessed type int dword_8028AAFC;
// 8028AB00: using guessed type int dword_8028AB00;
// 8028AB04: using guessed type int dword_8028AB04;
// 8028AB0C: using guessed type int dword_8028AB0C;
// 8028AB10: using guessed type int dword_8028AB10;
// 8028B300: using guessed type int dword_8028B300;
// 8028B304: using guessed type int dword_8028B304;
// 8028B7F0: using guessed type int dword_8028B7F0;
// 8028B7F4: using guessed type int dword_8028B7F4;
// 8028B7F8: using guessed type int dword_8028B7F8;
// 8028B940: using guessed type int dword_8028B940;
// 8028C328: using guessed type int dword_8028C328;
// 8028C800: using guessed type int dword_8028C800;
// 802A49B0: using guessed type int dword_802A49B0;
// 802A4A08: using guessed type int dword_802A4A08;
// 802A4A30: using guessed type int dword_802A4A30;
// 802A4C04: using guessed type __int16 word_802A4C04;
// 802F7EF0: using guessed type float flt_802F7EF0;
// 802F7EF4: using guessed type int dword_802F7EF4;
// 802F7EF8: using guessed type int dword_802F7EF8;
// 802F7F00: using guessed type int dword_802F7F00[512];
// 80315DF8: using guessed type int dword_80315DF8;
// 80315E38: using guessed type int dword_80315E38;
// 80315E3C: using guessed type int dword_80315E3C;
// 80315E40: using guessed type int dword_80315E40;
// 80315E68: using guessed type float flt_80315E68;
// 80315E6C: using guessed type int dword_80315E6C;
// 80315E70: using guessed type int dword_80315E70;
// 80315E74: using guessed type int dword_80315E74;
// 80315E78: using guessed type int dword_80315E78;
// 8031B248: using guessed type int dword_8031B248[16];
// 8031B288: using guessed type int dword_8031B288[16];
// 8031B2C8: using guessed type int dword_8031B2C8[];
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D8: using guessed type int dword_8031B2D8;
// 8031B2EC: using guessed type int dword_8031B2EC;
// 8031B760: using guessed type int dword_8031B760[512];
// 8031C5B8: using guessed type int dword_8031C5B8;
// 8031C710: using guessed type int dword_8031C710;
// 8031C714: using guessed type float flt_8031C714;
// 8031D548: using guessed type int dword_8031D548;
// 8031D7BC: using guessed type int dword_8031D7BC;
// 8031D7C0: using guessed type char byte_8031D7C0;
// 8031D7D8: using guessed type int dword_8031D7D8[512];
// 8031F84C: using guessed type int[6];
// 803239A0: using guessed type int dword_803239A0[24];
