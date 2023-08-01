//----- (10069FF0) --------------------------------------------------------
int __thiscall ReadBossRallyCfg(_WORD *this, const char *cfgFilename)
{
  int res; // eax
  FILE *fp_1; // esi
  int expectedToBe2; // [esp+Ch] [ebp-888h] BYREF
  char fourCC[4]; // [esp+10h] [ebp-884h] BYREF
  _DWORD unkObjInstance[541]; // [esp+14h] [ebp-880h] BYREF
  int unk; // [esp+890h] [ebp-4h]

  res = (int)fopen(cfgFilename, kFileModeReadBinary);
  fp_1 = (FILE *)res;
  if ( res )
  {
    sub_10069A90(unkObjInstance);
    unk = 0;
    sub_10069DE0(unkObjInstance, this);
    if ( freadLock(fourCC, 4u, 1u, fp_1) == 1
      && !strncmp(fourCC, aRcfg, strlen(aRcfg))
      && freadLock(&expectedToBe2, 4u, 1u, fp_1) == 1
      && expectedToBe2 == 2
      && freadLock(this + 0x154, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x156, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x158, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x15A, 0x104u, 1u, fp_1) == 1
      && freadLock(this + 0x1DC, 0x400u, 1u, fp_1) == 1
      && freadLock(this + 0x3DC, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3DE, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3E0, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3E2, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3E4, 0x10u, 1u, fp_1) == 1
      && freadLock(this + 0x3EC, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3EE, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3F0, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3F2, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3F4, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3F6, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3F8, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3FA, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3FC, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x3FE, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x400, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x402, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x404, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x406, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x408, 0x20u, 1u, fp_1) == 1
      && freadLock(this + 0x418, 0x40u, 1u, fp_1) == 1
      && freadLock(this + 0x438, 4u, 1u, fp_1) == 1
      && freadLock(this + 0x150, 4u, 1u, fp_1) == 1
      && freadLock(this, 0xA8u, 1u, fp_1) == 1
      && freadLock(this + 0x54, 0xA8u, 1u, fp_1) == 1
      && freadLock(this + 0xA8, 0xA8u, 1u, fp_1) == 1
      && freadLock(this + 0xFC, 0xA8u, 1u, fp_1) == 1 )
    {
      fclose(fp_1);
      unk = -1;
      debugPrint(unkObjInstance);
      res = 1;
    }
    else
    {
      sub_10069DE0(this, unkObjInstance);
      fclose(fp_1);
      meth_10069C90(this);
      unk = -1;
      debugPrint(unkObjInstance);
      res = 0;
    }
  }
  return res;
}
