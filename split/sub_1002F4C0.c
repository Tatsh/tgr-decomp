//----- (1002F4C0) --------------------------------------------------------
int sub_1002F4C0()
{
  int result; // eax
  int v1; // ebp
  struct_dword_10ACED34 **v2; // esi
  int v3; // edx
  int v4; // edi
  unsigned __int16 *v5; // ecx
  unsigned __int16 v6; // bx
  struct_dword_10ACED34 *v7; // eax
  int v8; // ecx
  _BYTE *v9; // edx
  __int16 v10; // cx
  struct_dword_10ACED34 *v11; // eax
  int v12; // ecx
  struct_dword_10ACED34 *v13; // eax
  char v14; // cl
  int v15; // edx

  result = g_GameMode;
  if ( !g_GameMode )
  {
    result = dword_106909B8;
    if ( dword_106909B8 )
    {
      result = dword_100B4050;
      v1 = 0;
      if ( dword_100B4050 > 0 )
      {
        v2 = &dword_10ACED34;
        while ( 1 )
        {
          v3 = 0;
          v4 = 4;
          v5 = (unsigned __int16 *)&(*v2)->gap0[8 * (unsigned __int8)(*v2)->gap0[4] + 30];
          do
          {
            v6 = *v5++;
            v3 += v6;
            --v4;
          }
          while ( v4 );
          if ( (unsigned __int8)++(*v2)->gap0[5] == dword_100B3814[6 * (unsigned __int8)(*v2)->gap0[4]] )
          {
            (*v2)->gap0[5] = 0;
            if ( v3 >= dword_100B3818[6 * (unsigned __int8)(*v2)->gap0[4]] )
            {
              (*v2)->wordF0 |= word_100B381E[12 * (unsigned __int8)(*v2)->gap0[4]++];
              v7 = *v2;
              if ( (*v2)->gap0[4] == 6 )
                break;
            }
          }
LABEL_31:
          v13 = *v2;
          v14 = byte_100B3820[24 * (unsigned __int8)(*v2)->gap0[4] + 2 * (unsigned __int8)(*v2)->gap0[5]];
          v15 = -((*(_DWORD *)(*v2)->gap0 & 1) != 0);
          v2 += 2778;
          v13->wordF2 |= 1 << ((v15 & 6) + v14);
          (*(v2 - 2778))->wordF4 |= 1 << byte_100B3821[24 * (unsigned __int8)(*(v2 - 2778))->gap0[4]
                                                     + 2 * (unsigned __int8)(*(v2 - 2778))->gap0[5]];
          result = dword_100B4050;
          if ( ++v1 >= dword_100B4050 )
            return result;
        }
        v8 = 0;
        if ( dword_100B388C > 0 )
        {
          v9 = &v7->gap0[26];
          while ( !*v9 )
          {
            ++v8;
            ++v9;
            if ( v8 >= dword_100B388C )
              goto LABEL_14;
          }
          goto LABEL_20;
        }
LABEL_14:
        v10 = v7->wordF2;
        if ( (v7->gap0[0] & 1) != 0 )
        {
          if ( (v10 & 0x200) == 0 )
          {
            HIBYTE(v10) |= 2u;
LABEL_19:
            v7->wordF2 = v10;
            goto LABEL_20;
          }
        }
        else if ( (v10 & 8) == 0 )
        {
          v10 |= 8u;
          goto LABEL_19;
        }
LABEL_20:
        v11 = *v2;
        v12 = *(_DWORD *)(*v2)->gap0;
        if ( v12 )
        {
          switch ( v12 )
          {
            case 1:
              HIBYTE(v11->wordF0) |= 0x22u;
              break;
            case 2:
              HIBYTE(v11->wordF0) |= 8u;
              break;
            case 3:
              HIBYTE(v11->wordF0) |= 0x50u;
              break;
            case 4:
              HIBYTE(v11->wordF0) |= 0x80u;
              break;
          }
        }
        else
        {
          HIBYTE(v11->wordF0) |= 4u;
        }
        (*v2)->gap0[4] = 0;
        ++*(_DWORD *)(*v2)->gap0;
        goto LABEL_31;
      }
    }
  }
  return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B3814: using guessed type int dword_100B3814[];
// 100B3818: using guessed type int dword_100B3818[];
// 100B381E: using guessed type __int16 word_100B381E[];
// 100B388C: using guessed type int dword_100B388C;
// 100B4050: using guessed type int dword_100B4050;
// 106909B8: using guessed type int dword_106909B8;
