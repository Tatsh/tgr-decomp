//----- (10071130) --------------------------------------------------------
char __cdecl sub_10071130(int a1, FILE *Stream)
{
  char result; // al
  const char *v3; // eax
  size_t v4; // esi
  FILE *v5; // eax
  FILE *v6; // ebx
  BOOL v7; // eax
  _DWORD *v8; // ecx
  int v9[5]; // [esp+Ch] [ebp-14h] BYREF

  switch ( a1 )
  {
    case 4:
      return sub_10070610(4, Stream);
    case 0:
      return sub_10070610(0, Stream);
    case 1:
      return sub_10070E60((int)Stream);
    case 2:
    case 3:
      v3 = aCRallyconfigDa;
      v4 = 256;
      break;
    default:
      v3 = (const char *)Stream;
      v4 = (size_t)Stream;
      break;
  }
  v5 = fopen(v3, readBinaryMode);
  v6 = v5;
  if ( !v5 )
    return (_BYTE)Stream != 0;
  if ( a1 == 2 )
    v7 = freadLock(Str1, 1u, 0x80u, v5) == 128;
  else
    v7 = freadLock(Str1, 1u, v4, v5) == v4;
  if ( !v7 )
    goto LABEL_17;
  if ( a1 == 2 )
  {
    dword_100ADF58 = *(_DWORD *)Str1;
    dword_100ADF5C = (int)dword_11782E2C;
    dword_100ADF60 = dword_11782E30;
    debugPrint(dword_11782E2C);
    if ( freadLock(Str1, 1u, 0x80u, v6) != 128 )
    {
LABEL_17:
      fclose(v6);
      return 0;
    }
    qmemcpy(v9, Str1, sizeof(v9));
    (*(&dword_10ACED34 + 2778 * dword_10690A18))->handlingType = v9[0];
    (*(&dword_10ACED34 + 2778 * dword_10690A18))->transmissionType = v9[1];
    (*(&dword_10ACED34 + 2778 * dword_10690A18))->ultraCarHeader = v9[2];
    (*(&dword_10ACED34 + 2778 * dword_10690A18))->suspensionType = v9[3];
    v8 = *(&dword_10ACED34 + 2778 * dword_10690A18);
    v8[66] = v9[4];
    debugPrint(v8);
    fclose(v6);
    result = 1;
  }
  else
  {
    fclose(v6);
    result = 1;
  }
  return result;
}
// 100ADF58: using guessed type int dword_100ADF58;
// 100ADF5C: using guessed type int dword_100ADF5C;
// 100ADF60: using guessed type int dword_100ADF60;
// 10690A18: using guessed type int dword_10690A18;
// 11782E30: using guessed type int dword_11782E30;
