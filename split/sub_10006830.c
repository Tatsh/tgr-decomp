//----- (10006830) --------------------------------------------------------
int __cdecl sub_10006830(int a1, float *a2, float *a3)
{
  __int16 v3; // ax
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int16 v9; // cx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int16 v13; // cx
  unsigned int v14; // ebx
  unsigned __int16 v15; // bx
  unsigned __int16 v16; // ax
  __int16 v17; // cx
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  int v20; // ebx
  int v21; // eax
  __int16 v22; // cx
  unsigned int v23; // ebx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // al
  unsigned __int8 v26; // al
  int result; // eax

  v3 = sub_100065E0(*a2);
  sub_10073E70((_DWORD *)a1, v3 >> 8, 8);
  v4 = sub_100065E0(a2[1]);
  sub_10073E70((_DWORD *)a1, v4 >> 8, 8);
  v5 = sub_100065E0(a2[2]);
  sub_10073E70((_DWORD *)a1, v5 >> 8, 8);
  v6 = sub_100065E0(a2[3]);
  sub_10073E70((_DWORD *)a1, v6 >> 8, 8);
  v7 = (unsigned int)sub_100066E0(a3[4]) >> 7;
  v8 = (unsigned int)sub_100066E0(a2[4]) >> 7;
  if ( ((v7 ^ v8) & 0x1F000) != 0 )
  {
    v10 = v7 & 0x1F000;
    if ( v10 + 4096 == (v8 & 0x1F000) )
      v9 = 4096;
    else
      v9 = v10 < (v8 & 0x1F000) ? 0x2000 : 12288;
  }
  else
  {
    v9 = 0;
  }
  sub_10073E70((_DWORD *)a1, v8 & 0xFFF | v9 & 0x3000, 14);
  v11 = (unsigned int)sub_100066E0(a3[5]) >> 7;
  v12 = (unsigned int)sub_100066E0(a2[5]) >> 7;
  if ( ((v11 ^ v12) & 0x1F000) != 0 )
  {
    v14 = v11 & 0x1F000;
    if ( v14 + 4096 == (v12 & 0x1F000) )
      v13 = 4096;
    else
      v13 = v14 < (v12 & 0x1F000) ? 0x2000 : 12288;
  }
  else
  {
    v13 = 0;
  }
  sub_10073E70((_DWORD *)a1, v12 & 0xFFF | v13 & 0x3000, 14);
  v15 = (__int16)sub_10006770(a3[6]) >> 1;
  v16 = (__int16)sub_10006770(a2[6]) >> 1;
  if ( ((v15 ^ v16) & 0x7E00) != 0 )
  {
    v18 = v15 & 0x7E00;
    v19 = v16 & 0x7E00;
    if ( v18 + 512 == v19 )
      v17 = 512;
    else
      v17 = v18 < v19 ? 1024 : 1536;
  }
  else
  {
    v17 = 0;
  }
  sub_10073E70((_DWORD *)a1, v17 & 0x600 | v16 & 0x1FF, 11);
  v20 = sub_10006730(a3[30]);
  v21 = sub_10006730(a2[30]);
  if ( ((v20 ^ v21) & 0xFFFF80) != 0 )
  {
    v23 = v20 & 0xFFFF80;
    if ( v23 + 128 == (v21 & 0xFFFF80) )
      v22 = 128;
    else
      v22 = v23 < (v21 & 0xFFFF80u) ? 256 : 384;
  }
  else
  {
    v22 = 0;
  }
  sub_10073E70((_DWORD *)a1, v22 & 0x180 | v21 & 0x7F, 9);
  v24 = sub_10006660(a2[31]);
  sub_10073E70((_DWORD *)a1, v24, 6);
  v25 = sub_100066A0(a2[32]);
  sub_10073E70((_DWORD *)a1, v25, 2);
  v26 = sub_100066A0(a2[33]);
  sub_10073E70((_DWORD *)a1, v26, 2);
  sub_10073E70((_DWORD *)a1, a2[34] != 0.0, 1);
  sub_10073E70((_DWORD *)a1, a2[35] != 0.0, 1);
  sub_10073E70((_DWORD *)a1, a2[36] != 0.0, 1);
  sub_10073E70((_DWORD *)a1, a2[37] != 0.0, 1);
  sub_10073E70((_DWORD *)a1, a2[38] != 0.0, 1);
  if ( a2[39] == 0.0 )
    result = sub_10073E70((_DWORD *)a1, 0, 1);
  else
    result = sub_10073E70((_DWORD *)a1, 1, 1);
  return result;
}
