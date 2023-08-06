#include "../../types-n64.h"
//----- (80230554) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80230554(int a1, int a2)
{
  int v3; // $t8
  float *v4; // $a0
  float v5; // $f8
  int v6; // $t8
  int v7; // $v1
  int v8; // $t7
  float v9; // $f0
  float v10; // $f0
  __int64 v11; // $a1
  float v12; // $f14
  float v13; // $f16
  float v14; // $f10
  float v15; // $f18
  int v16; // $ra
  int v17; // $ra
  int v18; // $a0
  _WORD *v19; // $v1
  _WORD *v20; // $v1
  __int16 v21; // $t6
  __int16 v22; // $t9
  float v23; // $f0
  int v24; // $ra
  float v25; // $f8
  float v26; // $f0
  int v27; // [sp+58h] [-350h]
  int v28; // [sp+58h] [-350h]
  float *v29; // [sp+64h] [-344h]
  float v30; // [sp+1C0h] [-1E8h]
  float v31[72]; // [sp+1F8h] [-1B0h] BYREF
  float v32; // [sp+318h] [-90h]
  float v33; // [sp+31Ch] [-8Ch]
  float v34; // [sp+320h] [-88h]
  float v35; // [sp+324h] [-84h]
  float v36; // [sp+328h] [-80h]
  float v37[12]; // [sp+338h] [-70h] BYREF
  char v38; // [sp+368h] [-40h]
  char v39; // [sp+369h] [-3Fh]
  char v40; // [sp+36Ah] [-3Eh]
  int v41; // [sp+384h] [-24h]
  int v42; // [sp+388h] [-20h]
  int *v43; // [sp+38Ch] [-1Ch]
  int *v44; // [sp+390h] [-18h]
  float v45; // [sp+394h] [-14h]
  float v46; // [sp+39Ch] [-Ch]
  int v47; // [sp+3A0h] [-8h]
  int v48; // [sp+3A4h] [-4h]
  int v49; // [sp+3A8h] [+0h]

  v47 = 0;
  v3 = *(_DWORD *)(4 * *(_DWORD *)(a1 + 320) - 2144010240 + 7296);
  v4 = (float *)(a1 + 48);
  if ( !v3 )
    return;
  v29 = v4;
  v49 = a1;
  v46 = sub_80224A78(v4, (float *)0x30);
  if ( *(_BYTE *)(v49 + 8291) == 2 )
  {
    v5 = *(float *)(v49 + 8292) * 255.0;
    dword_8028A858 = 8;
    dword_80351D00 = (int)v5;
    MEMORY[0] = -134217728;
    MEMORY[4] = 77;
  }
  v6 = *(_DWORD *)(v49 + 0x2000);
  *(_DWORD *)(v49 + 7624) = 0;
  if ( v6 && (*(_WORD *)(MEMORY[0x80025C60] + 84 * *(unsigned __int16 *)(v49 + 8128) + 76) & 0x10) != 0 )
  {
    *(_DWORD *)(v49 + 7624) = 1;
    v47 = 1;
  }
  dword_8028AB08 = *(_DWORD *)(v49 + 8312);
  v48 = 0;
  v7 = a2;
  if ( a2 >= 3 )
    v7 = 2;
  v48 = v7;
  sub_80260800((int)&flt_8031AB50, COERCE_INT(0.0039215689), COERCE_INT(0.0039215689), COERCE_INT(0.0039215689));
  sub_80260940(&flt_8031AB50, (float *)v49, (int)dword_80351CC0);
  dword_80351CA0[*(_DWORD *)(v49 + 320)] = (int)sub_80255CD0();
  sub_80260ED0((float *)dword_80351CC0, dword_80351CA0[*(_DWORD *)(v49 + 320)]);
  sub_80260940((float *)dword_80351CC0, &flt_8031AA50, (int)flt_8031AB10);
  sub_802174B4((float *)flt_8031AB10);
  dword_80351CB0[*(_DWORD *)(v49 + 320)] = (int)sub_80255CD0();
  sub_80260ED0((float *)flt_8031AB10, dword_80351CB0[*(_DWORD *)(v49 + 320)]);
  if ( v49 )
  {
    v8 = *(_DWORD *)(v49 + 320);
  }
  else
  {
    if ( MEMORY[0x1DE8] == 7664 || MEMORY[0x1DE8] == 8004 )
      return;
    v8 = MEMORY[0x140];
  }
  *(_DWORD *)(4 * v8 - 2144010240 + 7312) = v48;
  v42 = 0;
  v41 = 0;
  if ( v47 )
  {
    v40 = 0;
    v39 = 0;
    v38 = 0;
  }
  else
  {
    v38 = 0;
    v40 = 0;
    v39 = 0;
  }
  dword_8028A858 = 8;
  MEMORY[0] = 16973888;
  MEMORY[4] = 0;
  flt_80351D08 = -4.1999114e19;
  flt_80351D0C = -1.2171046e36;
  flt_80351D10 = -28948.373;
  sub_80224760(&flt_80351D08);
  flt_80351D18 = 1.2579592e-14;
  flt_80351D1C = -2.6320597e-14;
  flt_80351D20 = 1.0372837e32;
  sub_80224808(v37, (float *)0x30, v29);
  v9 = sub_80224B08(v37);
  if ( v9 == 0.0 )
    sub_80224434(v37, 0);
  else
    sub_80224594(v37, v9);
  sub_802249D4(&flt_80351D18, v37, &flt_80351D18);
  v10 = sub_80224B08(&flt_80351D18);
  if ( v10 == 0.0 )
  {
    LODWORD(flt_80351D18) = MEMORY[0x20];
    LODWORD(flt_80351D1C) = MEMORY[0x24];
    LODWORD(flt_80351D20) = MEMORY[0x28];
  }
  else
  {
    sub_80224594(&flt_80351D18, v10);
  }
  sub_80255CD0();
  LODWORD(v45) = sub_80255D4C();
  v44 = sub_80255DD8();
  v43 = sub_80255DD8();
  HIDWORD(v11) = flt_8031AB10;
  v12 = 0.0;
  v13 = 0.0;
  if ( MEMORY[0x30] == *(float *)(v49 + 48) )
  {
    if ( MEMORY[0x34] != *(float *)(v49 + 52) )
    {
      v14 = MEMORY[0];
      goto LABEL_31;
    }
    if ( MEMORY[0x38] == *(float *)(v49 + 56) )
    {
      v12 = 1.0;
      v14 = MEMORY[0];
      goto LABEL_31;
    }
    v13 = 0.1;
  }
  v14 = MEMORY[0];
LABEL_31:
  v32 = v14;
  v33 = MEMORY[4];
  v34 = MEMORY[8];
  if ( 0.0 == v14 && 0.0 == MEMORY[4] )
    v32 = 0.000099999997;
  LODWORD(v11) = v44;
  v36 = v12;
  v35 = v13;
  sub_80261150(v11, v32, v33, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
  sub_80266BE0(
    (float *)flt_8031AB10,
    (int)v43,
    v45,
    MEMORY[0x30],
    MEMORY[0x34],
    MEMORY[0x38],
    *(float *)(v49 + 48) + v35,
    *(float *)(v49 + 52),
    *(float *)(v49 + 56) + v36,
    0.0,
    0.0,
    1.0,
    2.7712326e-15,
    2.3533011e-38,
    COERCE_INT(1.8973134e-26),
    COERCE_INT(2.7712326e-15),
    2.3533011e-38,
    1.8973134e-26,
    64,
    64);
  v15 = 0.0;
  dword_8028A858 = 8;
  if ( v46 > 10.0 )
    MEMORY[4] = dword_8028A9C8;
  else
    MEMORY[4] = dword_8028A900;
  dword_8028C300 = 201850880;
  dword_8028A858 = 8;
  MEMORY[0] = -1241513984;
  MEMORY[4] = 4096;
  if ( *(_BYTE *)(v49 + 8291) == 2 )
  {
    dword_8028C304 = 17844696;
  }
  else if ( v46 < 100.0 )
  {
    if ( v49 )
      dword_8028C304 = 1122360;
    else
      dword_8028C304 = 1122424;
  }
  else
  {
    dword_8028C304 = 1122864;
  }
  dword_8028A858 = 8;
  MEMORY[0] = -1140841462;
  MEMORY[4] = v41;
  if ( *(_BYTE *)(v49 + 8291) == 2 )
  {
    sub_8022FFB4(v49);
    v15 = 0.0;
  }
  dword_8028A858 = 8;
  MEMORY[4] = v43 + 4;
  MEMORY[0] = 58851344;
  if ( *(_DWORD *)(v49 + 8296) )
  {
    v16 = v48;
  }
  else
  {
    dword_8028A858 = 8;
    MEMORY[0] = -1174402046;
    MEMORY[4] = 0;
    if ( *(_DWORD *)(40 * v48 + 0x38) )
    {
      dword_8028A858 = 8;
      MEMORY[0] = 100663296;
      MEMORY[4] = *(_DWORD *)(40 * v48 + 0x38);
    }
    dword_8028A858 = 8;
    MEMORY[4] = 83886080;
    MEMORY[0] = -184549120;
    v16 = v48;
  }
  v17 = 40 * v16;
  v18 = MEMORY[0x14];
  v19 = *(_WORD **)(MEMORY[0x14] + 36 * MEMORY[0x11A] + 4);
  if ( v19 )
  {
    v19[12] |= 1u;
    v19[13] |= 1u;
    v19[14] |= 1u;
    v19[15] |= 1u;
    v18 = MEMORY[0x14];
  }
  v20 = *(_WORD **)(v18 + 36 * MEMORY[0x11B] + 4);
  if ( v20 )
  {
    v20[15] = -28671;
    v20[10] = -24575;
    if ( (**(_DWORD **)(v49 + 8308) & 0xC0000) != 0 )
    {
      v20[14] = -16384;
      v20[13] = -16384;
      v20[9] = -1788;
      v20[8] = -1788;
    }
    else
    {
      v21 = v20[15];
      v22 = v20[10];
      v20[14] = -28671;
      v20[9] = -24575;
      v20[13] = v21;
      v20[8] = v22;
    }
    v20[12] = 31105;
    v20[7] = -28095;
    if ( *(float *)(v49 + 3640) < v15 )
    {
      v20[11] = -19028;
      v20[6] = -2;
    }
    else
    {
      v20[11] = -21141;
      v20[6] = -14799;
    }
  }
  dword_8028A858 = 8;
  MEMORY[4] = 83886080;
  MEMORY[0] = -184549120;
  v27 = v17;
  sub_80224808(v31, v29, (float *)0x30);
  v23 = sub_80224404((float *)(v49 + 32), v31);
  v24 = v27;
  if ( v23 > 0.0 )
  {
    sub_80217734(6, MEMORY[0x14]);
    v24 = v27;
    dword_8028A858 = 8;
    MEMORY[4] = 83886080;
    MEMORY[0] = -184549120;
    if ( *(_DWORD *)(v27 + 48) )
    {
      dword_8028A858 = 8;
      MEMORY[0] = 100663296;
      MEMORY[4] = *(_DWORD *)(v27 + 48);
    }
  }
  if ( v46 < 50.0 )
    v25 = COERCE_FLOAT(1);
  else
    v25 = 0.0;
  v26 = (float)SLODWORD(v25);
  if ( (float)SLODWORD(v25) != 0.0 && *(_BYTE *)(v49 + 8291) != 2 && v24 < 40 )
  {
    v28 = v24;
    v30 = v26;
    sub_80217734(3, MEMORY[0x14]);
    v24 = v28;
    v26 = v30;
    dword_8028A858 = 8;
    MEMORY[4] = 83886080;
    MEMORY[0] = -184549120;
    if ( *(_DWORD *)(v28 + 36) )
    {
      dword_8028A858 = 8;
      MEMORY[0] = 100663296;
      MEMORY[4] = *(_DWORD *)(v28 + 36);
    }
  }
  if ( !v47 && v26 != 0.0 && !*(_DWORD *)(v49 + 8296) )
  {
    MEMORY[4] = 192;
    MEMORY[0] = -1174403582;
    dword_8028A858 = 8;
    MEMORY[0] = ((*(_DWORD *)LODWORD(v45) & 0xFFF) << 12) | 0xF2000000 | *(_DWORD *)(LODWORD(v45) + 4) & 0xFFF;
    MEMORY[4] = ((((unsigned __int16)*(_DWORD *)LODWORD(v45) + 252) & 0xFFF) << 12) | ((unsigned __int16)*(_DWORD *)(LODWORD(v45) + 4)
                                                                                     + 252) & 0xFFF;
    if ( *(_DWORD *)(v24 + 60) )
    {
      dword_8028A858 = 8;
      MEMORY[0] = 100663296;
      MEMORY[4] = *(_DWORD *)(v24 + 60);
    }
    dword_8028A858 = 8;
    MEMORY[0] = -1174403582;
    MEMORY[4] = 0;
  }
  dword_8028A858 = 8;
  MEMORY[0] = 58851344;
  MEMORY[4] = v44 + 4;
  if ( *(_DWORD *)(v24 + 40) )
  {
    dword_8028A858 = 8;
    MEMORY[0] = 100663296;
    MEMORY[4] = *(_DWORD *)(v24 + 40);
  }
  if ( *(_DWORD *)(v49 + 8296) && *(_DWORD *)(v24 + 60) )
  {
    dword_8028A858 = 8;
    MEMORY[0] = 100663296;
    MEMORY[4] = *(_DWORD *)(v24 + 60);
  }
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -1174401534;
  if ( *(_BYTE *)(v49 + 8291) != 2 )
    sub_8022FFB4(v49);
  dword_8028A858 = 8;
  MEMORY[0] = -65923036;
  MEMORY[4] = -13369345;
  dword_8028AA3C = -65923036;
}
// 8023069C: write access to const memory at 8028AB08 has been detected
// 80231354: write access to const memory at 8028C300 has been detected
// 80231360: write access to const memory at 8028C300 has been detected
// 80231368: write access to const memory at 8028C300 has been detected
// 80231408: write access to const memory at 8028C304 has been detected
// 80231460: write access to const memory at 8028C304 has been detected
// 80231468: write access to const memory at 8028C304 has been detected
// 802305DC: write access to const memory at 8028A858 has been detected
// 802305F4: write access to const memory at 80351D00 has been detected
// 80230DA0: write access to const memory at 80351D18 has been detected
// 80230DA4: write access to const memory at 80351D1C has been detected
// 80230DA8: write access to const memory at 80351D20 has been detected
// 80230E50: write access to const memory at 80351D18 has been detected
// 80230E58: write access to const memory at 80351D1C has been detected
// 80230E64: write access to const memory at 80351D20 has been detected
// 80231DB4: write access to const memory at 8028A858 has been detected
// 80231DD0: write access to const memory at 8028A858 has been detected
// 80231DF0: write access to const memory at 8028A858 has been detected
// 80231E20: write access to const memory at 8028A858 has been detected
// 80231E40: write access to const memory at 8028A858 has been detected
// 80231E60: write access to const memory at 8028A858 has been detected
// 80231E80: write access to const memory at 8028A858 has been detected
// 80231EA0: write access to const memory at 8028A858 has been detected
// 80231EC4: write access to const memory at 8028A858 has been detected
// 80231EE0: write access to const memory at 8028A858 has been detected
// 80231EFC: write access to const memory at 8028A858 has been detected
// 80231F1C: write access to const memory at 8028A858 has been detected
// 80232068: write access to const memory at 8028A858 has been detected
// 80232088: write access to const memory at 8028A858 has been detected
// 802320A8: write access to const memory at 8028A858 has been detected
// 802320D8: write access to const memory at 8028A858 has been detected
// 802320F8: write access to const memory at 8028A858 has been detected
// 80232118: write access to const memory at 8028A858 has been detected
// 80232138: write access to const memory at 8028A858 has been detected
// 80232158: write access to const memory at 8028A858 has been detected
// 8023217C: write access to const memory at 8028A858 has been detected
// 80232198: write access to const memory at 8028A858 has been detected
// 802321B4: write access to const memory at 8028A858 has been detected
// 802321D4: write access to const memory at 8028A858 has been detected
// 80232EC0: write access to const memory at 8028AA3C has been detected
// 80232E5C: write access to const memory at 8028A858 has been detected
// 80232E78: write access to const memory at 8028A858 has been detected
// 80232E94: write access to const memory at 8028A858 has been detected
// 80232D44: write access to const memory at 8028A858 has been detected
// 80232D60: write access to const memory at 8028A858 has been detected
// 80232D7C: write access to const memory at 8028A858 has been detected
// 80232D9C: write access to const memory at 8028A858 has been detected
// 80232DBC: write access to const memory at 8028A858 has been detected
// 80232DDC: write access to const memory at 8028A858 has been detected
// 80232E00: write access to const memory at 8028A858 has been detected
// 80232E20: write access to const memory at 8028A858 has been detected
// 80232D1C: write access to const memory at 8028A858 has been detected
// 80232CBC: write access to const memory at 8028A858 has been detected
// 802329D4: write access to const memory at 8028A858 has been detected
// 802329F0: write access to const memory at 8028A858 has been detected
// 80232A10: write access to const memory at 8028A858 has been detected
// 80232A30: write access to const memory at 8028A858 has been detected
// 80232A4C: write access to const memory at 8028A858 has been detected
// 80232A98: write access to const memory at 8028A858 has been detected
// 80232AB0: write access to const memory at 8028A858 has been detected
// 80232ACC: write access to const memory at 8028A858 has been detected
// 80232AE8: write access to const memory at 8028A858 has been detected
// 80232B04: write access to const memory at 8028A858 has been detected
// 80232B20: write access to const memory at 8028A858 has been detected
// 80232B5C: write access to const memory at 8028A858 has been detected
// 80232BBC: write access to const memory at 8028A858 has been detected
// 80232BDC: write access to const memory at 8028A858 has been detected
// 80232BFC: write access to const memory at 8028A858 has been detected
// 80232C1C: write access to const memory at 8028A858 has been detected
// 80232C3C: write access to const memory at 8028A858 has been detected
// 80232C58: write access to const memory at 8028A858 has been detected
// 80232C7C: write access to const memory at 8028A858 has been detected
// 80232864: write access to const memory at 8028A858 has been detected
// 8023289C: write access to const memory at 8028A858 has been detected
// 802328BC: write access to const memory at 8028A858 has been detected
// 802328D8: write access to const memory at 8028A858 has been detected
// 80232934: write access to const memory at 8028A858 has been detected
// 80232954: write access to const memory at 8028A858 has been detected
// 80232978: write access to const memory at 8028A858 has been detected
// 8023281C: write access to const memory at 8028A858 has been detected
// 802326DC: write access to const memory at 8028A858 has been detected
// 802326F8: write access to const memory at 8028A858 has been detected
// 80232724: write access to const memory at 8028A858 has been detected
// 80232664: write access to const memory at 8028A858 has been detected
// 80232680: write access to const memory at 8028A858 has been detected
// 8023269C: write access to const memory at 8028A858 has been detected
// 80232644: write access to const memory at 8028A858 has been detected
// 80232620: write access to const memory at 8028A858 has been detected
// 80232524: write access to const memory at 8028A858 has been detected
// 80232544: write access to const memory at 8028A858 has been detected
// 80232568: write access to const memory at 8028A858 has been detected
// 8023258C: write access to const memory at 8028A858 has been detected
// 802325A8: write access to const memory at 8028A858 has been detected
// 8023247C: write access to const memory at 8028A858 has been detected
// 802324A0: write access to const memory at 8028A858 has been detected
// 802324C8: write access to const memory at 8028A858 has been detected
// 802322FC: write access to const memory at 8028A858 has been detected
// 80232318: write access to const memory at 8028A858 has been detected
// 80232334: write access to const memory at 8028A858 has been detected
// 80232350: write access to const memory at 8028A858 has been detected
// 80232378: write access to const memory at 8028A858 has been detected
// 802323A0: write access to const memory at 8028A858 has been detected
// 802323C0: write access to const memory at 8028A858 has been detected
// 802323E4: write access to const memory at 8028A858 has been detected
// 80232408: write access to const memory at 8028A858 has been detected
// 80232424: write access to const memory at 8028A858 has been detected
// 80232440: write access to const memory at 8028A858 has been detected
// 8023220C: write access to const memory at 8028A858 has been detected
// 80231F54: write access to const memory at 8028A858 has been detected
// 80231CAC: write access to const memory at 8028A858 has been detected
// 80231CCC: write access to const memory at 8028A858 has been detected
// 80231CEC: write access to const memory at 8028A858 has been detected
// 80231D08: write access to const memory at 8028A858 has been detected
// 80231D28: write access to const memory at 8028A858 has been detected
// 80231A0C: write access to const memory at 8028A858 has been detected
// 80231A2C: write access to const memory at 8028A858 has been detected
// 80231A48: write access to const memory at 8028A858 has been detected
// 80231A60: write access to const memory at 8028A858 has been detected
// 80231A7C: write access to const memory at 8028A858 has been detected
// 80231A9C: write access to const memory at 8028A858 has been detected
// 802319E4: write access to const memory at 8028A858 has been detected
// 802317CC: write access to const memory at 8028A858 has been detected
// 802317E8: write access to const memory at 8028A858 has been detected
// 80231804: write access to const memory at 8028A858 has been detected
// 8023181C: write access to const memory at 8028A858 has been detected
// 80231838: write access to const memory at 8028A858 has been detected
// 80231858: write access to const memory at 8028A858 has been detected
// 80231878: write access to const memory at 8028A858 has been detected
// 802318A8: write access to const memory at 8028A858 has been detected
// 802318C8: write access to const memory at 8028A858 has been detected
// 802318E4: write access to const memory at 8028A858 has been detected
// 80231904: write access to const memory at 8028A858 has been detected
// 80231928: write access to const memory at 8028A858 has been detected
// 80231944: write access to const memory at 8028A858 has been detected
// 80231960: write access to const memory at 8028A858 has been detected
// 8023197C: write access to const memory at 8028A858 has been detected
// 80231998: write access to const memory at 8028A858 has been detected
// 802315F8: write access to const memory at 8028A858 has been detected
// 80231630: write access to const memory at 8028A858 has been detected
// 80231660: write access to const memory at 8028A858 has been detected
// 80231690: write access to const memory at 8028A858 has been detected
// 802316C4: write access to const memory at 8028A858 has been detected
// 802316E0: write access to const memory at 8028A858 has been detected
// 802316FC: write access to const memory at 8028A858 has been detected
// 80231718: write access to const memory at 8028A858 has been detected
// 80231734: write access to const memory at 8028A858 has been detected
// 80231754: write access to const memory at 8028A858 has been detected
// 80231770: write access to const memory at 8028A858 has been detected
// 8023178C: write access to const memory at 8028A858 has been detected
// 80231488: write access to const memory at 8028A858 has been detected
// 802314AC: write access to const memory at 8028A858 has been detected
// 802314E0: write access to const memory at 8028A858 has been detected
// 80231500: write access to const memory at 8028A858 has been detected
// 80231528: write access to const memory at 8028A858 has been detected
// 80231540: write access to const memory at 8028A858 has been detected
// 8023155C: write access to const memory at 8028A858 has been detected
// 80231578: write access to const memory at 8028A858 has been detected
// 80231594: write access to const memory at 8028A858 has been detected
// 802315B4: write access to const memory at 8028A858 has been detected
// 80231474: write access to const memory at 8028C304 has been detected
// 802313C0: write access to const memory at 8028A858 has been detected
// 80231384: write access to const memory at 8028A858 has been detected
// 802312C0: write access to const memory at 8028A858 has been detected
// 802312DC: write access to const memory at 8028A858 has been detected
// 802312F8: write access to const memory at 8028A858 has been detected
// 80231254: write access to const memory at 8028A858 has been detected
// 80231278: write access to const memory at 8028A858 has been detected
// 8023129C: write access to const memory at 8028A858 has been detected
// 802310A0: write access to const memory at 8028A858 has been detected
// 80231080: write access to const memory at 8028A858 has been detected
// 80230D6C: write access to const memory at 80351D08 has been detected
// 80230D70: write access to const memory at 80351D0C has been detected
// 80230D74: write access to const memory at 80351D10 has been detected
// 80230CB0: write access to const memory at 8028A858 has been detected
// 80230CEC: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A878: using guessed type int dword_8028A878;
// 8028A898: using guessed type int dword_8028A898;
// 8028A8A0: using guessed type int dword_8028A8A0;
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8028A8AC: using guessed type int dword_8028A8AC;
// 8028A900: using guessed type int dword_8028A900[10];
// 8028A9C8: using guessed type int dword_8028A9C8[10];
// 8028AA3C: using guessed type int dword_8028AA3C;
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028AB08: using guessed type int dword_8028AB08;
// 8028AB0C: using guessed type int dword_8028AB0C;
// 8028AB20: using guessed type char byte_8028AB20;
// 8028AB24: using guessed type char byte_8028AB24;
// 8028AB28: using guessed type char byte_8028AB28;
// 8028AB2C: using guessed type char byte_8028AB2C;
// 8028AB40: using guessed type char byte_8028AB40;
// 8028AB44: using guessed type char byte_8028AB44;
// 8028AB48: using guessed type char byte_8028AB48;
// 8028AB4C: using guessed type char byte_8028AB4C;
// 8028AB50: using guessed type char byte_8028AB50;
// 8028AB54: using guessed type char byte_8028AB54;
// 8028C300: using guessed type int dword_8028C300;
// 8028C304: using guessed type int dword_8028C304;
// 8028C328: using guessed type int dword_8028C328;
// 8028C334: using guessed type int dword_8028C334;
// 8031AA50: using guessed type float flt_8031AA50;
// 8031AB50: using guessed type float flt_8031AB50;
// 8031B338: using guessed type float flt_8031B338;
// 8031B33C: using guessed type float flt_8031B33C;
// 8031B340: using guessed type float flt_8031B340;
// 80351CA0: using guessed type int dword_80351CA0[4];
// 80351CB0: using guessed type int dword_80351CB0[4];
// 80351CC0: using guessed type int dword_80351CC0[16];
// 80351D00: using guessed type int dword_80351D00;
// 80351D08: using guessed type float flt_80351D08;
// 80351D0C: using guessed type float flt_80351D0C;
// 80351D10: using guessed type float flt_80351D10;
// 80351D18: using guessed type float flt_80351D18;
// 80351D1C: using guessed type float flt_80351D1C;
// 80351D20: using guessed type float flt_80351D20;
