//----- (10069FF0) --------------------------------------------------------
int __thiscall bossRallyCfgSomething(_WORD *configBuffer, const char *cfgFilename)
{
  int res; // eax
  FILE *fp_1; // esi
  int expectedToBe2; // [esp+Ch] [ebp-888h] BYREF
  char fourCC[4]; // [esp+10h] [ebp-884h] BYREF
  _DWORD unkObjInstance[541]; // [esp+14h] [ebp-880h] BYREF
  int unk; // [esp+890h] [ebp-4h]

  res = (int)fopen(cfgFilename, readBinaryMode);
  fp_1 = (FILE *)res;
  if ( res )
  {
    sub_10069A90(unkObjInstance);
    unk = 0;
    sub_10069DE0(unkObjInstance, configBuffer);
    if ( freadLock(fourCC, 4u, 1u, fp_1) == 1
      && !strncmp(fourCC, aRcfg, strlen(aRcfg))
      && freadLock(&expectedToBe2, 4u, 1u, fp_1) == 1
      && expectedToBe2 == 2
      && freadLock(configBuffer + 340, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 342, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 344, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 346, 0x104u, 1u, fp_1) == 1
      && freadLock(configBuffer + 476, 0x400u, 1u, fp_1) == 1
      && freadLock(configBuffer + 988, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 990, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 992, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 994, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 996, 0x10u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1004, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1006, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1008, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1010, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1012, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1014, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1016, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1018, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1020, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1022, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1024, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1026, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1028, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1030, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1032, 0x20u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1048, 0x40u, 1u, fp_1) == 1
      && freadLock(configBuffer + 1080, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer + 336, 4u, 1u, fp_1) == 1
      && freadLock(configBuffer, 0xA8u, 1u, fp_1) == 1
      && freadLock(configBuffer + 84, 0xA8u, 1u, fp_1) == 1
      && freadLock(configBuffer + 168, 0xA8u, 1u, fp_1) == 1
      && freadLock(configBuffer + 252, 0xA8u, 1u, fp_1) == 1 )
    {
      fclose(fp_1);
      unk = -1;
      debugPrint(unkObjInstance);
      res = 1;
    }
    else
    {
      sub_10069DE0(configBuffer, unkObjInstance);
      fclose(fp_1);
      sub_10069C90(configBuffer);
      unk = -1;
      debugPrint(unkObjInstance);
      res = 0;
    }
  }
  return res;
}
