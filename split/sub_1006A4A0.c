//----- (1006A4A0) --------------------------------------------------------
FILE *__thiscall sub_1006A4A0(#483 *this, char *FileName)
{
  FILE *result; // eax
  FILE *result2; // esi

  result = fopen(FileName, aWb);
  result2 = result;
  if ( result )
  {
    if ( fwriteLock(aRcfg, strlen(aRcfg), 1u, result) == 1
      && fwriteLock(&unk_1008FA64, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 680, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 684, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 688, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 692, 0x104u, 1u, result2) == 1
      && fwriteLock((char *)this + 952, 0x400u, 1u, result2) == 1
      && fwriteLock((char *)this + 1976, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 1980, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 1984, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 1988, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 1992, 0x10u, 1u, result2) == 1
      && fwriteLock((char *)this + 2008, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2012, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2016, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2020, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2024, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2028, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2032, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2036, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2040, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2044, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2048, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2052, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2056, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2060, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 2064, 0x20u, 1u, result2) == 1
      && fwriteLock((char *)this + 2096, 0x40u, 1u, result2) == 1
      && fwriteLock((char *)this + 2160, 4u, 1u, result2) == 1
      && fwriteLock((char *)this + 672, 4u, 1u, result2) == 1
      && fwriteLock(this, 0xA8u, 1u, result2) == 1
      && fwriteLock((char *)this + 168, 0xA8u, 1u, result2) == 1
      && fwriteLock((char *)this + 336, 0xA8u, 1u, result2) == 1
      && fwriteLock((char *)this + 504, 0xA8u, 1u, result2) == 1 )
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
