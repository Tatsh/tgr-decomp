#include "../../types-n64.h"
//----- (80268DC0) --------------------------------------------------------
int sub_80268DC0(char *(__fastcall *callback)(char *, char *, int), char *buffer, char *format, ...)
{
  char *format_1; // $s2
  char *v7; // $s0
  int v8; // $v0
  char *i; // $v0
  int v10; // $s1
  char *v12; // $s2
  unsigned __int8 *j; // $s0
  int *v14; // $t9
  int v15; // $t8
  int v16; // $a1
  int k; // $t8
  int v18; // $a1
  int v19; // $t7
  unsigned int v20; // $t9
  int l; // $t9
  int v22; // $a0
  char v23; // $t9
  int v24; // $t9
  int v25; // $t9
  int v26; // $s1
  BOOL kk; // $at
  int v28; // $s0
  int v29; // $t9
  int v30; // $t9
  int v31; // $s1
  BOOL m; // $at
  int v33; // $s0
  int v34; // $t9
  int v35; // $t9
  int v36; // $s1
  BOOL n; // $at
  int v38; // $s0
  char v39; // $t9
  int v40; // $s1
  BOOL ii; // $at
  int v42; // $s0
  int v43; // $s1
  BOOL jj; // $at
  int v45; // $s0
  char v46[44]; // [sp+74h] [-64h] BYREF
  char *v47; // [sp+A8h] [-30h]
  int v48; // [sp+ACh] [-2Ch]
  int v49; // [sp+B0h] [-28h]
  int v50; // [sp+B4h] [-24h]
  int v51; // [sp+B8h] [-20h]
  int v52; // [sp+BCh] [-1Ch]
  unsigned int v53; // [sp+C0h] [-18h]
  int v54; // [sp+C4h] [-14h]
  int v55; // [sp+C8h] [-10h]
  int v56; // [sp+CCh] [-Ch]
  int v57; // [sp+D0h] [-8h]
  char v58; // [sp+D4h] [-4h]
  va_list va_1a; // [sp+E4h] [+Ch] BYREF
  va_list va1; // [sp+E8h] [+10h] BYREF

  va_start(va1, format);
  va_start(va_1a, format);
  va_1a = va_arg(va1, int *);
  v56 = 0;
  while ( 1 )
  {
    format_1 = format;
    v7 = (char *)(unsigned __int8)*format;
    if ( *format )
    {
      if ( *format == 37 )
      {
        v8 = 0;
        goto LABEL_10;
      }
      for ( i = (char *)(unsigned __int8)format[1]; ; i = (char *)(unsigned __int8)format_1[1] )
      {
        ++format_1;
        v7 = i;
        if ( !i || i == (char *)37 )
          break;
      }
    }
    v8 = format_1 - format;
LABEL_10:
    if ( v8 > 0 )
    {
      v10 = v8;
      buffer = callback(buffer, format, v8);
      if ( !buffer )
        return v56;
      v56 += v10;
    }
    v12 = format_1 + 1;
    if ( !v7 )
      return v56;
    v57 = 0;
    for ( j = sub_80260B74(" +-#0", *v12); j; j = sub_80260B74(" +-#0", *v12) )
    {
      ++v12;
      v57 |= *(_DWORD *)(4 * (j - " +-#0") - 0x7FD54674);
    }
    if ( *v12 == 42 )
    {
      v14 = (int *)(((unsigned int)va_1a + 3) & 0xFFFFFFFC);
      va_1a = v14 + 1;
      v15 = *v14;
      ++v12;
      v55 = *v14;
      if ( v55 < 0 )
      {
        v55 = -v15;
        v57 |= 4u;
      }
      v16 = (unsigned __int8)*v12;
    }
    else
    {
      v55 = 0;
      v16 = (unsigned __int8)*v12;
      if ( (unsigned int)v16 >= 0x30 && (unsigned __int8)*v12 < 0x3Au )
      {
        for ( k = v55; ; k = v55 )
        {
          if ( k < 999 )
            v55 = v16 + 10 * k - 48;
          v16 = (unsigned __int8)*++v12;
          if ( v16 < 48 || v16 >= 58 )
            break;
        }
      }
    }
    if ( v16 == 46 )
    {
      v19 = (unsigned __int8)*++v12;
      v20 = (unsigned int)va_1a + 3;
      if ( v19 == 42 )
      {
        va_1a = (int *)((v20 & 0xFFFFFFFC) + 4);
        ++v12;
        v54 = *(_DWORD *)(v20 & 0xFFFFFFFC);
        LOBYTE(v18) = *v12;
      }
      else
      {
        v54 = 0;
        v18 = (unsigned __int8)*v12;
        if ( (unsigned int)v18 >= 0x30 && (unsigned __int8)*v12 < 0x3Au )
        {
          for ( l = v54; ; l = v54 )
          {
            if ( l < 999 )
              v54 = v18 + 10 * l - 48;
            v18 = (unsigned __int8)*++v12;
            if ( v18 < 48 || v18 >= 58 )
              break;
          }
        }
      }
    }
    else
    {
      v54 = -1;
      LOBYTE(v18) = *v12;
    }
    if ( sub_80260B74((unsigned __int8 *)&dword_802AB980, v18) )
    {
      v23 = *v12++;
      v58 = v23;
    }
    else
    {
      v58 = 0;
    }
    if ( v58 == 108 && *v12 == 108 )
    {
      v58 = 76;
      ++v12;
    }
    sub_80268750(v22, *v12, (unsigned int *)va_1a, (int)v46);
    v24 = v55 - v48 - v49 - v50 - v51 - v52 - v53;
    v55 = v24;
    if ( (v57 & 4) == 0 )
      break;
LABEL_59:
    v25 = v48;
LABEL_60:
    if ( v25 > 0 )
    {
      buffer = callback(buffer, v46, v25);
      if ( !buffer )
        return v56;
      v56 += v48;
      v29 = v49;
    }
    else
    {
      v29 = v49;
    }
    if ( v29 > 0 )
    {
      v31 = v29;
      for ( m = (unsigned int)v29 < 0x21; ; m = (unsigned int)v31 < 0x21 )
      {
        v33 = v31;
        if ( !m )
          v33 = 32;
        buffer = callback(buffer, "00000000000000000000000000000000", v33);
        if ( !buffer )
          return v56;
        v56 += v33;
        v31 -= v33;
        if ( v31 <= 0 )
          break;
      }
      v30 = v50;
    }
    else
    {
      v30 = v50;
    }
    if ( v30 > 0 )
    {
      buffer = callback(buffer, v47, v30);
      if ( !buffer )
        return v56;
      v56 += v50;
      v34 = v51;
    }
    else
    {
      v34 = v51;
    }
    if ( v34 > 0 )
    {
      v36 = v34;
      for ( n = (unsigned int)v34 < 0x21; ; n = (unsigned int)v36 < 0x21 )
      {
        v38 = v36;
        if ( !n )
          v38 = 32;
        buffer = callback(buffer, "00000000000000000000000000000000", v38);
        if ( !buffer )
          return v56;
        v56 += v38;
        v36 -= v38;
        if ( v36 <= 0 )
          break;
      }
      v35 = v52;
    }
    else
    {
      v35 = v52;
    }
    if ( v35 > 0 )
    {
      buffer = callback(buffer, &v47[v50], v35);
      if ( !buffer )
        return v56;
      v56 += v52;
    }
    if ( (int)v53 > 0 )
    {
      v40 = v53;
      for ( ii = v53 < 0x21; ; ii = (unsigned int)v40 < 0x21 )
      {
        v42 = v40;
        if ( !ii )
          v42 = 32;
        buffer = callback(buffer, "00000000000000000000000000000000", v42);
        if ( !buffer )
          return v56;
        v56 += v42;
        v40 -= v42;
        if ( v40 <= 0 )
          break;
      }
      v39 = v57;
    }
    else
    {
      v39 = v57;
    }
    if ( (v39 & 4) != 0 && v55 > 0 )
    {
      v43 = v55;
      for ( jj = (unsigned int)v55 < 0x21; ; jj = (unsigned int)v43 < 0x21 )
      {
        v45 = v43;
        if ( !jj )
          v45 = 32;
        buffer = callback(buffer, "                                ", v45);
        if ( !buffer )
          break;
        v56 += v45;
        v43 -= v45;
        if ( v43 <= 0 )
          goto LABEL_117;
      }
      return v56;
    }
LABEL_117:
    format = v12 + 1;
  }
  if ( v24 <= 0 )
  {
    v25 = v48;
    goto LABEL_60;
  }
  v26 = v24;
  for ( kk = (unsigned int)v24 < 0x21; ; kk = (unsigned int)v26 < 0x21 )
  {
    v28 = v26;
    if ( !kk )
      v28 = 32;
    buffer = callback(buffer, "                                ", v28);
    if ( !buffer )
      break;
    v56 += v28;
    v26 -= v28;
    if ( v26 <= 0 )
      goto LABEL_59;
  }
  return v56;
}
// 802690F4: conditional instruction was optimized away because of '$t9.4>=1'
// 80269110: conditional instruction was optimized away because of '$s0.4>=1'
// 802691A0: conditional instruction was optimized away because of '$t9.4>=1'
// 802691BC: conditional instruction was optimized away because of '$s0.4>=1'
// 8026924C: conditional instruction was optimized away because of '$t9.4>=1'
// 80269268: conditional instruction was optimized away because of '$s0.4>=1'
// 802692FC: conditional instruction was optimized away because of '%var_18.4>=1'
// 80269318: conditional instruction was optimized away because of '$s0.4>=1'
// 80269374: conditional instruction was optimized away because of '%var_10.4>=1'
// 80269390: conditional instruction was optimized away because of '$s0.4>=1'
// 8026909C: variable 'v22' is possibly undefined
// 802AB980: using guessed type int dword_802AB980;
