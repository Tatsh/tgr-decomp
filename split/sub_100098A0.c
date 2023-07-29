//----- (100098A0) --------------------------------------------------------
char *__cdecl sub_100098A0(_WORD *a1, unsigned __int8 *a2, int a3, int a4)
{
  DDPIXELFORMAT *v4; // edi
  int v5; // ebx
  int v6; // eax
  unsigned __int8 v8; // dl
  unsigned __int8 *v9; // ebp
  unsigned __int8 v10; // dl
  int v11; // edx
  int v12; // edx
  int v13; // esi
  int v14; // edx
  int v15; // esi
  int v16; // edx
  int v17; // esi
  int v18; // edx
  _WORD *v19; // ecx
  unsigned __int8 v21; // [esp+8h] [ebp-18h]
  unsigned int v22; // [esp+Ch] [ebp-14h]
  int v23; // [esp+10h] [ebp-10h]
  int v24; // [esp+14h] [ebp-Ch]
  DWORD v25; // [esp+18h] [ebp-8h]
  char *v26; // [esp+1Ch] [ebp-4h]
  unsigned __int8 v27; // [esp+28h] [ebp+8h]
  unsigned __int8 v28; // [esp+2Ch] [ebp+Ch]
  unsigned __int8 a1a; // [esp+30h] [ebp+10h]

  v26 = (char *)a1;
  v4 = GetDDPixelFormatPtr(a4);
  v25 = v4->dwRGBBitCount >> 3;
  v23 = sub_10009880(v4->dwRBitMask) - 8;
  v24 = sub_10009880(v4->dwGBitMask) - 8;
  v5 = sub_10009880(v4->dwBBitMask) - 8;
  v6 = sub_10009880(v4->dwRGBAlphaBitMask) - 8;
  if ( a3 > 0 )
  {
    v22 = (unsigned int)(a3 + 3) >> 2;
    while ( 1 )
    {
      v8 = a2[1];
      a1a = *a2;
      v9 = a2 + 2;
      v28 = v8;
      v10 = v9[1];
      v27 = *v9;
      a2 = v9 + 2;
      v21 = v10;
      v11 = v23 < 0 ? a1a >> -(char)v23 : a1a << v23;
      v12 = v4->dwRBitMask & v11;
      v13 = v24 < 0 ? v28 >> -(char)v24 : v28 << v24;
      v14 = v4->dwGBitMask & v13 | v12;
      v15 = v5 < 0 ? v27 >> -(char)v5 : v27 << v5;
      v16 = v4->dwBBitMask & v15 | v14;
      v17 = v6 < 0 ? v21 >> -(char)v6 : v21 << v6;
      v18 = v4->dwRGBAlphaBitMask & v17 | v16;
      if ( v25 == 1 )
        break;
      if ( v25 == 2 )
      {
        *a1 = v18;
        v19 = a1 + 1;
        goto LABEL_21;
      }
      if ( v25 == 4 )
      {
        *(_DWORD *)a1 = v18;
        v19 = a1 + 2;
        goto LABEL_21;
      }
LABEL_22:
      if ( !--v22 )
        return (char *)((char *)a1 - v26);
    }
    *(_BYTE *)a1 = v18;
    v19 = (_WORD *)((char *)a1 + 1);
LABEL_21:
    a1 = v19;
    goto LABEL_22;
  }
  return (char *)((char *)a1 - v26);
}
