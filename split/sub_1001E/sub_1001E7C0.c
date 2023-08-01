//----- (1001E7C0) --------------------------------------------------------
char sub_1001E7C0()
{
  int v0; // eax
  int v1; // edx
  int v2; // edx

  LOBYTE(v0) = dword_104C5178 ^ dword_104C517C;
  if ( (((unsigned __int16)dword_104C5178 ^ (unsigned __int16)dword_104C517C) & 0x3000) != 0 )
  {
    if ( (dword_104C5178 & 0x1000) != 0 )
    {
      dword_10277388 = 2;
      v1 = dword_10277370;
      if ( dword_10277408 == 2 )
      {
        v2 = dword_10277370 & 0xFFFFFFEF;
LABEL_11:
        dword_10277370 = v2;
        goto LABEL_12;
      }
    }
    else if ( (dword_104C5178 & 0x2000) != 0 )
    {
      dword_10277388 = 3;
      v1 = dword_10277370;
      if ( dword_10277408 == 3 )
      {
        v2 = dword_10277370 & 0xFFFFFFEF;
        goto LABEL_11;
      }
    }
    else
    {
      dword_10277388 = 1;
      v1 = dword_10277370;
      if ( dword_10277408 == 1 )
      {
        v2 = dword_10277370 & 0xFFFFFFEF;
        goto LABEL_11;
      }
    }
    v2 = v1 | 0x10;
    goto LABEL_11;
  }
LABEL_12:
  if ( (v0 & 1) == 0 )
    goto LABEL_20;
  if ( (dword_104C5178 & 1) == 0 )
  {
    dword_104C16A0 = 8;
    dword_1027738C = 8;
    v0 = dword_10277370;
    if ( dword_1027740C == 8 )
    {
      LOBYTE(v0) = dword_10277370 & 0xDF;
      goto LABEL_19;
    }
LABEL_18:
    LOBYTE(v0) = v0 | 0x20;
    goto LABEL_19;
  }
  dword_104C16A0 = 2;
  v0 = dword_10277370;
  dword_1027738C = 2;
  if ( dword_1027740C != 2 )
    goto LABEL_18;
  LOBYTE(v0) = dword_10277370 & 0xDF;
LABEL_19:
  dword_10277370 = v0;
LABEL_20:
  if ( (dword_104C5178 & 1) != 0 )
  {
    if ( (dword_104C5178 & 0x20000) != 0 )
    {
      LOBYTE(v0) = dword_104C0DC0;
      if ( dword_104C0DC0 )
        off_100A7A00[0] = (int (__cdecl *)(int))sub_10022480;
      else
        off_100A7A00[0] = (int (__cdecl *)(int))sub_10021E80;
    }
    else
    {
      off_100A7A00[0] = (int (__cdecl *)(int))sub_10021BD0;
    }
    if ( (dword_104C5178 & 0x40000) != 0 )
    {
      off_100A7A00[0] = (int (__cdecl *)(int))sub_100231D0;
      if ( (dword_104C5178 & 0x80000) == 0 )
        off_100A7A00[0] = (int (__cdecl *)(int))sub_100228F0;
    }
    if ( (dword_104C5178 & 0x200) != 0 )
    {
      off_100A7CEC[0] = (int (__cdecl *)(int))sub_1001CFF0;
      off_100A7CB4[0] = (int (__cdecl *)(int))sub_1001E170;
    }
    else
    {
      off_100A7CEC[0] = (int (__cdecl *)(int))sub_1001E980;
      off_100A7CB4[0] = (int (__cdecl *)(int))sub_10020380;
    }
  }
  else
  {
    off_100A7A00[0] = (int (__cdecl *)(int))sub_10023CC0;
    if ( (dword_104C5178 & 0x20000) == 0 )
      off_100A7A00[0] = (int (__cdecl *)(int))sub_10023A10;
    if ( (dword_104C5178 & 0x200) != 0 )
    {
      off_100A7CEC[0] = (int (__cdecl *)(int))sub_1001FBE0;
      off_100A7CB4[0] = (int (__cdecl *)(int))sub_10020860;
    }
    else
    {
      off_100A7CEC[0] = (int (__cdecl *)(int))sub_1001F2B0;
      off_100A7CB4[0] = (int (__cdecl *)(int))sub_100205F0;
    }
  }
  return v0;
}
// 100A7A00: using guessed type int (__cdecl *off_100A7A00[180])(int);
// 100A7CB4: using guessed type int (__cdecl *off_100A7CB4[7])(int);
// 100A7CEC: using guessed type int (__cdecl *off_100A7CEC[65])(int);
// 10277370: using guessed type int dword_10277370;
// 10277388: using guessed type int dword_10277388;
// 1027738C: using guessed type int dword_1027738C;
// 10277408: using guessed type int dword_10277408;
// 1027740C: using guessed type int dword_1027740C;
// 104C0DC0: using guessed type int dword_104C0DC0;
// 104C16A0: using guessed type int dword_104C16A0;
// 104C5178: using guessed type int dword_104C5178;
// 104C517C: using guessed type int dword_104C517C;
