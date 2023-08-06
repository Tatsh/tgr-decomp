#include "../../types-n64.h"
//----- (80268750) --------------------------------------------------------
void __fastcall sub_80268750(int a1, unsigned __int8 a2, unsigned int *a3, int a4)
{
  int v4; // $s0
  int v5; // $t6
  unsigned int v6; // $t7
  int v7; // $v0
  unsigned int v8; // $t6
  unsigned int v9; // $t7
  unsigned int v10; // $t7
  int v11; // $t9
  int v12; // $v0
  int v13; // $t9
  int v14; // $v0
  int *v15; // $t9
  unsigned int v16; // $t6
  int *v17; // $t6
  int v18; // $t8
  int v19; // $t7
  int v20; // $t7
  int v21; // $t9
  int v22; // $t8
  unsigned int v23; // $v0
  unsigned int v24; // $v1
  unsigned int v25; // $v0
  unsigned int v26; // $a0
  unsigned int v27; // $v0
  unsigned int v28; // $a0
  int v29; // $v0
  int v30; // $t8
  int v31; // $v0
  _WORD **v32; // $t8
  _DWORD **v33; // $t7
  unsigned int v34; // $t9
  _DWORD *v35; // $t6
  int v36; // $t7
  _DWORD **v37; // $t9
  unsigned int v38; // $t8
  int v39; // $t7
  unsigned int v40; // $t9
  _BYTE *v41; // $a0
  int v42; // $v0
  int v43; // $v1

  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 0;
  if ( a2 < 0x26u )
  {
    if ( a2 == 37 )
    {
      *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 37;
    }
    else
    {
      v5 = *(_DWORD *)(v4 + 12);
LABEL_82:
      *(_BYTE *)(a4 + v5) = a2;
      ++*(_DWORD *)(v4 + 12);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        if ( *(_BYTE *)(v4 + 52) == 76 )
        {
          v24 = *a3;
          if ( (*a3 & 1) != 0 )
          {
            *a3 = v24 + 7;
            v25 = v24 - 15;
          }
          else
          {
            if ( (v24 & 2) != 0 )
            {
              *a3 = v24 + 10;
              v26 = v24 - 30;
            }
            else
            {
              v26 = ((*a3 + 7) & 0xFFFFFFF8) + 8;
              *a3 = v26;
            }
            v25 = v26;
          }
          *(_QWORD *)v4 = *(_QWORD *)(v25 - 8);
        }
        else
        {
          v23 = *a3;
          if ( (v23 & 1) != 0 )
          {
            *a3 = v23 + 7;
            v27 = v23 - 15;
          }
          else
          {
            if ( (v23 & 2) != 0 )
            {
              *a3 = v23 + 10;
              v28 = v23 - 30;
            }
            else
            {
              v28 = ((v23 + 7) & 0xFFFFFFF8) + 8;
              *a3 = v28;
            }
            v27 = v28;
          }
          *(_QWORD *)v4 = *(_QWORD *)(v27 - 8);
        }
        if ( (*(_WORD *)v4 & 0x8000) != 0 )
        {
          *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 45;
        }
        else
        {
          v29 = *(_DWORD *)(v4 + 48);
          if ( (v29 & 2) != 0 )
          {
            *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 43;
          }
          else
          {
            if ( (v29 & 1) == 0 )
            {
              v30 = *(_DWORD *)(v4 + 12);
              goto LABEL_69;
            }
            *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 32;
          }
        }
        v30 = *(_DWORD *)(v4 + 12);
LABEL_69:
        *(_DWORD *)(v4 + 8) = v30 + a4;
        sub_8026D660(v4, a2);
        return;
      case 'X':
      case 'o':
      case 'u':
      case 'x':
        v14 = *(unsigned __int8 *)(v4 + 52);
        if ( v14 == 108 )
        {
          v15 = (int *)((*a3 + 3) & 0xFFFFFFFC);
          *a3 = (unsigned int)(v15 + 1);
          *(_QWORD *)v4 = *v15;
        }
        else if ( v14 == 76 )
        {
          v17 = (int *)((*a3 + 7) & 0xFFFFFFF8);
          *a3 = (unsigned int)(v17 + 2);
          v18 = *v17;
          *(_DWORD *)(v4 + 4) = v17[1];
          *(_DWORD *)v4 = v18;
        }
        else
        {
          v16 = *a3;
          *a3 = ((*a3 + 3) & 0xFFFFFFFC) + 4;
          *(_QWORD *)v4 = *(int *)((v16 + 3) & 0xFFFFFFFC);
        }
        if ( *(_BYTE *)(v4 + 52) == 104 )
        {
          v19 = *(_DWORD *)(v4 + 4);
          *(_DWORD *)v4 = 0;
          *(_DWORD *)(v4 + 4) = (unsigned __int16)v19;
        }
        else
        {
          if ( *(_BYTE *)(v4 + 52) )
          {
            v20 = *(_DWORD *)(v4 + 48);
            goto LABEL_37;
          }
          v21 = *(_DWORD *)(v4 + 4);
          *(_DWORD *)v4 = 0;
          *(_DWORD *)(v4 + 4) = v21;
        }
        v20 = *(_DWORD *)(v4 + 48);
LABEL_37:
        if ( (v20 & 8) != 0 )
        {
          *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 48;
          if ( a2 == 120 || a2 == 88 )
          {
            *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = a2;
            v22 = *(_DWORD *)(v4 + 12);
          }
          else
          {
            v22 = *(_DWORD *)(v4 + 12);
          }
        }
        else
        {
          v22 = *(_DWORD *)(v4 + 12);
        }
        *(_DWORD *)(v4 + 8) = v22 + a4;
        sub_8026CE50((_DWORD *)v4, a2);
        return;
      case 'c':
        v6 = ((*a3 + 3) & 0xFFFFFFFC) + 4;
        *a3 = v6;
        *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = *(_DWORD *)(v6 - 4);
        return;
      case 'd':
      case 'i':
        v7 = *(unsigned __int8 *)(v4 + 52);
        if ( v7 == 108 )
        {
          v8 = ((*a3 + 3) & 0xFFFFFFFC) + 4;
          *a3 = v8;
          *(_QWORD *)v4 = *(int *)(v8 - 4);
        }
        else if ( v7 == 76 )
        {
          v10 = *a3 + 7;
          *a3 = (v10 & 0xFFFFFFF8) + 8;
          v11 = *(_DWORD *)((v10 & 0xFFFFFFF8) + 4);
          *(_DWORD *)v4 = *(_DWORD *)(v10 & 0xFFFFFFF8);
          *(_DWORD *)(v4 + 4) = v11;
        }
        else
        {
          v9 = *a3;
          *a3 = ((*a3 + 3) & 0xFFFFFFFC) + 4;
          *(_QWORD *)v4 = *(int *)((v9 + 3) & 0xFFFFFFFC);
        }
        if ( *(_BYTE *)(v4 + 52) == 104 )
          *(_QWORD *)v4 = (__int16)*(_DWORD *)(v4 + 4);
        if ( *(int *)v4 <= 0 )
        {
          if ( *(int *)v4 < 0 )
          {
            *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 45;
            goto LABEL_24;
          }
          v12 = *(_DWORD *)(v4 + 48);
        }
        else
        {
          v12 = *(_DWORD *)(v4 + 48);
        }
        if ( (v12 & 2) != 0 )
        {
          *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 43;
        }
        else
        {
          if ( (v12 & 1) == 0 )
          {
            v13 = *(_DWORD *)(v4 + 12);
            goto LABEL_25;
          }
          *(_BYTE *)(a4 + (*(_DWORD *)(v4 + 12))++) = 32;
        }
LABEL_24:
        v13 = *(_DWORD *)(v4 + 12);
LABEL_25:
        *(_DWORD *)(v4 + 8) = v13 + a4;
        sub_8026CE50((_DWORD *)v4, a2);
        break;
      case 'n':
        v31 = *(unsigned __int8 *)(v4 + 52);
        switch ( v31 )
        {
          case 'h':
            v32 = (_WORD **)((*a3 + 3) & 0xFFFFFFFC);
            *a3 = (unsigned int)(v32 + 1);
            **v32 = *(_DWORD *)(v4 + 44);
            break;
          case 'l':
            v33 = (_DWORD **)((*a3 + 3) & 0xFFFFFFFC);
            *a3 = (unsigned int)(v33 + 1);
            **v33 = *(_DWORD *)(v4 + 44);
            break;
          case 'L':
            v34 = *a3 + 3;
            *a3 = (v34 & 0xFFFFFFFC) + 4;
            v35 = *(_DWORD **)(v34 & 0xFFFFFFFC);
            v36 = *(_DWORD *)(v4 + 44);
            *v35 = 0;
            v35[1] = v36;
            break;
          default:
            v37 = (_DWORD **)((*a3 + 3) & 0xFFFFFFFC);
            *a3 = (unsigned int)(v37 + 1);
            **v37 = *(_DWORD *)(v4 + 44);
            break;
        }
        return;
      case 'p':
        v38 = ((*a3 + 3) & 0xFFFFFFFC) + 4;
        *a3 = v38;
        v39 = *(_DWORD *)(v4 + 12);
        *(_QWORD *)v4 = *(int *)(v38 - 4);
        *(_DWORD *)(v4 + 8) = v39 + a4;
        sub_8026CE50((_DWORD *)v4, 120);
        return;
      case 's':
        v40 = *a3 + 3;
        *a3 = (v40 & 0xFFFFFFFC) + 4;
        v41 = *(_BYTE **)(v40 & 0xFFFFFFFC);
        *(_DWORD *)(v4 + 8) = v41;
        v42 = sub_80260B4C(v41);
        v43 = *(_DWORD *)(v4 + 36);
        *(_DWORD *)(v4 + 20) = v42;
        if ( v43 >= 0 && v43 < v42 )
          *(_DWORD *)(v4 + 20) = v43;
        return;
      default:
        v5 = *(_DWORD *)(v4 + 12);
        goto LABEL_82;
    }
  }
}
// 80268768: variable 'v4' is possibly undefined
