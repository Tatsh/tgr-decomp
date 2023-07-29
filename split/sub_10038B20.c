//----- (10038B20) --------------------------------------------------------
int __cdecl sub_10038B20(_BYTE *a1)
{
  _BYTE *v1; // ebx
  unsigned __int16 v2; // ax
  int v3; // ebp
  int result; // eax
  _BYTE *v5; // esi
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  unsigned __int16 v12; // ax
  int v13; // eax
  _BYTE *v14; // edi
  int v15; // ebx
  char v16; // al
  char v17; // al
  _BYTE *v18; // edi
  int v19; // ebx
  unsigned __int16 v20; // ax
  int v21; // [esp+8h] [ebp-4h]

  v1 = a1;
  LOBYTE(v2) = a1[549];
  HIBYTE(v2) = a1[548];
  v3 = 0;
  result = (unsigned __int8)a1[551] | (((unsigned __int8)a1[550] | (v2 << 8)) << 8);
  v21 = 0;
  *((_DWORD *)a1 + 137) = result;
  if ( result > 0 )
  {
    v5 = a1 + 361;
    do
    {
      switch ( v5[3] )
      {
        case 0:
        case 1:
        case 2:
          v6 = *(v5 - 2);
          *(v5 - 2) = *(v5 - 5);
          *(v5 - 5) = v6;
          v7 = *(v5 - 3);
          *(v5 - 3) = *(v5 - 4);
          *(v5 - 4) = v7;
          v8 = v5[2];
          v5[2] = *(v5 - 1);
          *(v5 - 1) = v8;
          v9 = v5[1];
          v5[1] = *v5;
          *v5 = v9;
          break;
        case 3:
        case 6:
        case 7:
          HIBYTE(v20) = *(v5 - 5);
          LOBYTE(v20) = *(v5 - 4);
          *(_DWORD *)(v5 - 5) = (unsigned __int8)*(v5 - 2) | (((unsigned __int8)*(v5 - 3) | (v20 << 8)) << 8);
          break;
        case 4:
          v10 = *(v5 - 2);
          *(v5 - 2) = *(v5 - 5);
          *(v5 - 5) = v10;
          v11 = *(v5 - 3);
          *(v5 - 3) = *(v5 - 4);
          *(v5 - 4) = v11;
          sub_1002B970((int *)(v5 - 5));
          HIBYTE(v12) = *(v5 - 1);
          LOBYTE(v12) = *v5;
          v13 = (unsigned __int8)v5[2] | (((unsigned __int8)v5[1] | (v12 << 8)) << 8);
          *(_DWORD *)(v5 - 1) = v13;
          v14 = *(_BYTE **)(v5 - 5);
          v3 = v13;
          if ( v13 > 0 )
          {
            v15 = v13;
            do
            {
              sub_100383C0(v14);
              v14 += 12;
              --v15;
            }
            while ( v15 );
            v1 = a1;
          }
          break;
        case 5:
          v16 = *(v5 - 2);
          *(v5 - 2) = *(v5 - 5);
          *(v5 - 5) = v16;
          v17 = *(v5 - 3);
          *(v5 - 3) = *(v5 - 4);
          *(v5 - 4) = v17;
          sub_1002B970((int *)(v5 - 5));
          v18 = *(_BYTE **)(v5 - 5);
          if ( v3 > 0 )
          {
            v19 = v3;
            do
            {
              sub_100383C0(v18);
              v18 += 12;
              --v19;
            }
            while ( v19 );
            v1 = a1;
          }
          break;
        default:
          break;
      }
      result = v21 + 1;
      v5 += 12;
      ++v21;
    }
    while ( v21 < *((_DWORD *)v1 + 137) );
  }
  return result;
}
