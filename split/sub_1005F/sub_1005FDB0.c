//----- (1005FDB0) --------------------------------------------------------
int sub_1005FDB0()
{
  int v0; // ebx
  char *v1; // esi
  const char *v2; // eax
  const char *v3; // eax
  int v4; // edi
  char *v5; // esi
  const char *v6; // eax
  int result; // eax
  const char *v8; // eax

  memset(&unk_10B4E7A8, 0, 0xDCu);
  memset(&unk_10B4E910, 0, 0x158u);
  v0 = 0;
  v1 = byte_10B4E7AC;
  do
  {
    if ( (int)v1 >= (int)&unk_10B4E83C )
    {
      *((_DWORD *)v1 - 1) = (unsigned __int8)(v0 - 126);
      switch ( (char)v0 )
      {
        case 4:
          v3 = getCaptionString(0xC4u);
          goto LABEL_11;
        case 5:
          v3 = getCaptionString(0xC5u);
          goto LABEL_11;
        case 6:
          v3 = getCaptionString(0xC6u);
          goto LABEL_11;
        case 7:
          v3 = getCaptionString(0xC7u);
          goto LABEL_11;
        case 8:
          v3 = getCaptionString(0xC8u);
          goto LABEL_11;
        case 9:
          v3 = getCaptionString(0xC9u);
LABEL_11:
          sprintf(v1, v3);
          break;
        default:
          break;
      }
    }
    else
    {
      *((_DWORD *)v1 - 1) = v0;
      v2 = getCaptionString(0xC3u);
      sprintf(v1, v2, v0);
    }
    v1 += 36;
    ++v0;
  }
  while ( (int)v1 < (int)byte_10B4E914 );
  v4 = 0;
  v5 = byte_10B4E914;
  do
  {
    if ( (int)v5 >= (int)&unk_10B4FB14 )
    {
      *((_DWORD *)v5 - 1) = (unsigned __int8)v4;
      result = (unsigned __int8)v4 - 128;
      switch ( (char)v4 )
      {
        case -128:
          v8 = getCaptionString(0xC4u);
          goto LABEL_23;
        case -127:
          v8 = getCaptionString(0xC5u);
          goto LABEL_23;
        case -126:
          v8 = getCaptionString(0xC6u);
          goto LABEL_23;
        case -125:
          v8 = getCaptionString(0xC7u);
          goto LABEL_23;
        case -124:
          v8 = getCaptionString(0xC8u);
          goto LABEL_23;
        case -123:
          v8 = getCaptionString(0xC9u);
LABEL_23:
          result = sprintf(v5, v8);
          break;
        default:
          break;
      }
    }
    else
    {
      *((_DWORD *)v5 - 1) = v4;
      v6 = getCaptionString(0xC3u);
      result = sprintf(v5, v6, v4);
    }
    v5 += 36;
    ++v4;
  }
  while ( (int)v5 < (int)&unk_10B4FBEC );
  return result;
}
