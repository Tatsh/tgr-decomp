//----- (1006A4A0) --------------------------------------------------------
FILE *__thiscall WriteConfigFile(_DWORD *this, char *FileName)
{
  FILE *result; // eax
  FILE *result2; // esi

  result = fopen(FileName, aWb);
  result2 = result;
  if ( result )
  {
    if ( fwriteLock(aRcfg, strlen(aRcfg), 1u, result) == 1
      && fwriteLock(&unk_1008FA64, 4u, 1u, result2) == 1
      && fwriteLock(this + 170, 4u, 1u, result2) == 1
      && fwriteLock(this + 171, 4u, 1u, result2) == 1
      && fwriteLock(this + 172, 4u, 1u, result2) == 1
      && fwriteLock(this + 173, 0x104u, 1u, result2) == 1
      && fwriteLock(this + 238, 0x400u, 1u, result2) == 1
      && fwriteLock(this + 494, 4u, 1u, result2) == 1
      && fwriteLock(this + 495, 4u, 1u, result2) == 1
      && fwriteLock(this + 496, 4u, 1u, result2) == 1
      && fwriteLock(this + 497, 4u, 1u, result2) == 1
      && fwriteLock(this + 498, 0x10u, 1u, result2) == 1
      && fwriteLock(this + 502, 4u, 1u, result2) == 1
      && fwriteLock(this + 503, 4u, 1u, result2) == 1
      && fwriteLock(this + 504, 4u, 1u, result2) == 1
      && fwriteLock(this + 505, 4u, 1u, result2) == 1
      && fwriteLock(this + 506, 4u, 1u, result2) == 1
      && fwriteLock(this + 507, 4u, 1u, result2) == 1
      && fwriteLock(this + 508, 4u, 1u, result2) == 1
      && fwriteLock(this + 509, 4u, 1u, result2) == 1
      && fwriteLock(this + 510, 4u, 1u, result2) == 1
      && fwriteLock(this + 511, 4u, 1u, result2) == 1
      && fwriteLock(this + 512, 4u, 1u, result2) == 1
      && fwriteLock(this + 513, 4u, 1u, result2) == 1
      && fwriteLock(this + 514, 4u, 1u, result2) == 1
      && fwriteLock(this + 515, 4u, 1u, result2) == 1
      && fwriteLock(this + 516, 0x20u, 1u, result2) == 1
      && fwriteLock(this + 524, 0x40u, 1u, result2) == 1
      && fwriteLock(this + 540, 4u, 1u, result2) == 1
      && fwriteLock(this + 168, 4u, 1u, result2) == 1
      && fwriteLock(this, 0xA8u, 1u, result2) == 1
      && fwriteLock(this + 42, 0xA8u, 1u, result2) == 1
      && fwriteLock(this + 84, 0xA8u, 1u, result2) == 1
      && fwriteLock(this + 126, 0xA8u, 1u, result2) == 1 )
    {
      fclose(result2);
      result = (FILE *)1;
    }
    else
    {
      fclose(result2);
      result = 0;
    }
  }
  return result;
}
