//----- (10024BF0) --------------------------------------------------------
int __cdecl sub_10024BF0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  char *v18; // eax
  int v19; // esi
  _DWORD *v20; // ebp
  int v21; // eax
  char *v22; // eax
  unsigned __int8 *v23; // eax
  _DWORD *v25; // eax
  int v26; // ecx
  _DWORD *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  char *v33; // eax
  int v34; // esi
  _DWORD *v35; // ebp
  int v36; // eax
  char *v37; // eax
  unsigned __int8 *v38; // eax
  _DWORD *v39; // eax
  int v40; // ecx
  unsigned __int8 *v41; // eax
  unsigned int v42; // edx
  int v43; // [esp-10h] [ebp-2Ch]
  int v44; // [esp-Ch] [ebp-28h]
  int v45; // [esp-Ch] [ebp-28h]
  int v46; // [esp-8h] [ebp-24h]
  _DWORD *v47; // [esp-4h] [ebp-20h]
  int v48; // [esp+10h] [ebp-Ch] BYREF
  int v49; // [esp+14h] [ebp-8h] BYREF
  int v50; // [esp+18h] [ebp-4h] BYREF
  int v51; // [esp+20h] [ebp+4h]
  int v52; // [esp+20h] [ebp+4h]

  v3 = a3;
  a3[155] = 0;
  if ( dword_118AA088 != 2 )
    return 0;
  v4 = sub_10060F70(dword_10AA3444, ++dword_10AA3460, 0);
  if ( !v4 )
    return 0;
  sub_10060FB0(dword_10AA3444, dword_10AA3460, &v50, &v49, &v48, &a3);
  v5 = v50;
  if ( v50 )
  {
    v7 = a3;
    v6 = v49;
  }
  else
  {
    v6 = v49;
    if ( v49 )
    {
      v7 = a3;
    }
    else
    {
      v7 = a3;
      if ( !v48 && !a3 )
      {
        v8 = v3[169];
        v9 = v3[170];
        v5 = 0;
        v48 = 0;
        v6 = 2 * v8;
        v7 = (_DWORD *)(2 * v9);
        v50 = 0;
        v49 = v6;
        a3 = v7;
      }
    }
  }
  v10 = v3[169];
  if ( v10 == v3[2] )
  {
    v11 = v3[170];
    if ( v11 == v3[3] && dword_100B8C90 <= 0 )
    {
      if ( sub_10061480(v4, v5, v6, v48, v7, byte_11829870, 2 * v10, 2 * v11) )
      {
        v12 = 2 * v3[3];
        v46 = 2 * v3[2];
        v13 = 4 * v3[16];
        v3[2] = v46;
        v3[3] = v12;
        v3[16] = v13;
        pow2ExponentToAdd(v3 + 7, v46, v12);
        v3[6] = v3[7];
        *a1 *= 2;
        *a2 *= 2;
        v14 = a3;
        v3[155] = 1;
        v3[156] = dword_10AA3444;
        v15 = v48;
        v3[157] = dword_10AA3460;
        v44 = v49;
        v43 = v50;
        v3[158] = 0;
        v16 = sub_100615B0(v4, v43, v44, v15, v14);
        v17 = v3[15];
        v3[159] = v16;
        if ( v17 )
          v18 = (char *)sub_10009660(byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
        else
          v18 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
        v3[164] = v18;
        if ( sub_10061000() >= 0 )
        {
          v19 = 3;
          v20 = v3 + 163;
          v51 = 3;
          do
          {
            v21 = sub_10060F70(dword_10AA3444, dword_10AA3460, v19);
            if ( v21 )
            {
              if ( sub_10061480(v21, v50, v49, v48, a3, byte_11829870, 2 * v3[169], 2 * v3[170]) )
              {
                if ( v3[15] )
                  v22 = (char *)sub_10009660(byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
                else
                  v22 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
                v3[164] = v22;
              }
              v23 = (unsigned __int8 *)malloc(v3[164]);
              *v20 = v23;
              qmemcpy(v23, byte_11829870, v3[164]);
              v19 = v51;
            }
            else
            {
              *v20 = 0;
            }
            --v19;
            --v20;
            v51 = v19;
          }
          while ( v19 >= 0 );
          return 1;
        }
        v25 = v3 + 163;
        v26 = 3;
        do
        {
          *v25-- = 0;
          --v26;
        }
        while ( v26 );
        goto LABEL_50;
      }
      return 1;
    }
  }
  if ( !sub_10061480(v4, v5, v6, v48, v7, &unk_104D51D0, 2 * v10, 2 * v3[170]) )
    return 1;
  v27 = a3;
  v3[155] = 1;
  v47 = v27;
  v28 = v50;
  v3[156] = dword_10AA3444;
  v29 = v48;
  v3[157] = dword_10AA3460;
  v45 = v49;
  v3[158] = 0;
  v30 = sub_100615B0(v4, v28, v45, v29, v47);
  v31 = v3[170];
  v32 = v3[4];
  v3[159] = v30;
  sub_10025350((int)byte_11829870, v3[2], v3[3], COERCE_FLOAT(&unk_104D51D0), 2 * v3[169], 2 * v31, v32);
  if ( v3[15] )
    v33 = (char *)sub_10009660(byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
  else
    v33 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
  v3[164] = v33;
  if ( sub_10061000() < 0 )
  {
    v39 = v3 + 163;
    v40 = 3;
    do
    {
      *v39-- = 0;
      --v40;
    }
    while ( v40 );
LABEL_50:
    v41 = (unsigned __int8 *)malloc(v3[164]);
    v42 = v3[164];
    v3[160] = v41;
    qmemcpy(v41, byte_11829870, v42);
    return 1;
  }
  v34 = 3;
  v35 = v3 + 163;
  v52 = 3;
  do
  {
    v36 = sub_10060F70(dword_10AA3444, dword_10AA3460, v34);
    if ( v36 )
    {
      if ( sub_10061480(v36, v50, v49, v48, a3, &unk_104D51D0, 2 * v3[169], 2 * v3[170]) )
      {
        sub_10025350((int)byte_11829870, v3[2], v3[3], COERCE_FLOAT(&unk_104D51D0), 2 * v3[169], 2 * v3[170], v3[4]);
        if ( v3[15] )
          v37 = (char *)sub_10009660(byte_11829870, byte_11829870, v3[16], v3[4], v3 + 15);
        else
          v37 = sub_100098A0(byte_11829870, byte_11829870, v3[16], v3[4]);
        v3[164] = v37;
      }
      v38 = (unsigned __int8 *)malloc(v3[164]);
      *v35 = v38;
      qmemcpy(v38, byte_11829870, v3[164]);
      v34 = v52;
    }
    else
    {
      *v35 = 0;
    }
    --v34;
    --v35;
    v52 = v34;
  }
  while ( v34 >= 0 );
  return 1;
}
// 10009660: using guessed type _DWORD __cdecl sub_10009660(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10060FB0: using guessed type _DWORD __cdecl sub_10060FB0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10061000: using guessed type int sub_10061000(void);
// 10061480: using guessed type _DWORD __cdecl sub_10061480(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100615B0: using guessed type _DWORD __cdecl sub_100615B0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100B8C90: using guessed type int dword_100B8C90;
// 10AA3444: using guessed type int dword_10AA3444;
// 10AA3460: using guessed type int dword_10AA3460;
// 118AA088: using guessed type int dword_118AA088;
