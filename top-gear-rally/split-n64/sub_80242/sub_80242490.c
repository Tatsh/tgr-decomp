#include "../../types-n64.h"
//----- (80242490) --------------------------------------------------------
int __fastcall sub_80242490(z_streamp a1, z_streamp a2, int a3)
{
  const char *v3; // $s1
  z_streamp v5; // $a3
  char *v6; // $s3
  _BYTE *v7; // $a0
  unsigned int v8; // $v1
  int v9; // $s0
  unsigned int v10; // $t8
  int (__fastcall *v11)(char *, const char *, int); // $v0
  unsigned int v12; // $v0
  _DWORD *v13; // $a3
  const char *v14; // $s1
  char *v15; // $s3
  const char *v16; // $v1
  const char *v17; // $v0
  const char *v18; // $a0
  const char *v19; // $s1
  unsigned int v20; // $v1
  int v21; // $s0
  unsigned int v22; // $t2
  int (__fastcall *v23)(_DWORD, const char *, int); // $v0
  unsigned int v24; // $v0
  z_streamp v26; // [sp+28h] [+14h]
  _DWORD *v27; // [sp+28h] [+14h]
  _DWORD *v28; // [sp+28h] [+14h]
  int v29; // [sp+30h] [+1Ch]

  v29 = a3;
  v3 = (const char *)a1->data_type;
  v5 = a1;
  v6 = a2->next_out;
  if ( a1->adler < (unsigned int)v3 )
    v7 = a1->opaque;
  else
    v7 = (_BYTE *)a1->adler;
  v8 = a2->avail_out;
  v9 = v7 - v3;
  if ( v8 < v7 - v3 )
    v9 = a2->avail_out;
  if ( v9 )
  {
    if ( a3 != -5 )
    {
      v10 = a2->total_out;
      goto LABEL_11;
    }
    v29 = 0;
  }
  v10 = a2->total_out;
LABEL_11:
  a2->avail_out = v8 - v9;
  a2->total_out = v10 + v9;
  v11 = (int (__fastcall *)(char *, const char *, int))v5->reserved;
  if ( v11 )
  {
    v26 = v5;
    v12 = v11(v5[1].next_in, v3, v9);
    v5 = v26;
    v26[1].next_in = (char *)v12;
    a2->adler = v12;
  }
  v27 = &v5->next_in;
  sub_80260B20(v6, v3, v9);
  v13 = v27;
  v14 = &v3[v9];
  v15 = &v6[v9];
  v16 = (const char *)v27[10];
  if ( v14 != v16 )
  {
    a2->next_out = v15;
    goto LABEL_27;
  }
  v17 = (const char *)v27[12];
  v18 = (const char *)v27[9];
  v19 = v18;
  if ( v16 == v17 )
  {
    v27[12] = v18;
    v17 = v18;
  }
  v20 = a2->avail_out;
  v21 = v17 - v18;
  if ( v20 < v17 - v18 )
    v21 = a2->avail_out;
  if ( !v21 )
    goto LABEL_23;
  if ( v29 == -5 )
  {
    v29 = 0;
LABEL_23:
    v22 = a2->total_out;
    goto LABEL_24;
  }
  v22 = a2->total_out;
LABEL_24:
  a2->avail_out = v20 - v21;
  a2->total_out = v22 + v21;
  v23 = (int (__fastcall *)(_DWORD, const char *, int))v27[13];
  if ( v23 )
  {
    v24 = v23(v27[14], v18, v21);
    v13 = v27;
    v27[14] = v24;
    a2->adler = v24;
  }
  v28 = v13;
  sub_80260B20(v15, v19, v21);
  v13 = v28;
  v14 = &v19[v21];
  a2->next_out = &v15[v21];
LABEL_27:
  v13[11] = v14;
  return v29;
}
