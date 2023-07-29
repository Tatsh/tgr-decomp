//----- (10069FF0) --------------------------------------------------------
int __thiscall bossRallyCfgSomething(void *Buffer, char *FileName)
{
  int result; // eax
  FILE *v4; // esi
  int Buffera; // [esp+Ch] [ebp-888h] BYREF
  char Str1[4]; // [esp+10h] [ebp-884h] BYREF
  _DWORD v7[541]; // [esp+14h] [ebp-880h] BYREF
  int v8; // [esp+890h] [ebp-4h]

  result = (int)fopen(FileName, readBinaryMode);
  v4 = (FILE *)result;
  if ( result )
  {
    sub_10069A90(v7);
    v8 = 0;
    sub_10069DE0(v7, Buffer);
    if ( freadLock(Str1, 4u, 1u, v4) == 1
      && !strncmp(Str1, aRcfg, strlen(aRcfg))
      && freadLock(&Buffera, 4u, 1u, v4) == 1
      && Buffera == 2
      && freadLock((char *)Buffer + 680, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 684, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 688, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 692, 0x104u, 1u, v4) == 1
      && freadLock((char *)Buffer + 952, 0x400u, 1u, v4) == 1
      && freadLock((char *)Buffer + 1976, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 1980, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 1984, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 1988, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 1992, 0x10u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2008, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2012, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2016, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2020, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2024, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2028, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2032, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2036, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2040, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2044, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2048, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2052, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2056, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2060, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2064, 0x20u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2096, 0x40u, 1u, v4) == 1
      && freadLock((char *)Buffer + 2160, 4u, 1u, v4) == 1
      && freadLock((char *)Buffer + 672, 4u, 1u, v4) == 1
      && freadLock(Buffer, 0xA8u, 1u, v4) == 1
      && freadLock((char *)Buffer + 168, 0xA8u, 1u, v4) == 1
      && freadLock((char *)Buffer + 336, 0xA8u, 1u, v4) == 1
      && freadLock((char *)Buffer + 504, 0xA8u, 1u, v4) == 1 )
    {
      fclose(v4);
      v8 = -1;
      debugPrint(v7);
      result = 1;
    }
    else
    {
      sub_10069DE0(Buffer, v7);
      fclose(v4);
      sub_10069C90(Buffer);
      v8 = -1;
      debugPrint(v7);
      result = 0;
    }
  }
  return result;
}
