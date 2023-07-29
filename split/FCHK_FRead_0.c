//----- (100030E0) --------------------------------------------------------
size_t __cdecl FCHK_FRead_0(void *Buffer, size_t ElementSize, size_t ElementCount, CHK_File *fp)
{
  size_t result; // eax
  CHAR OutputString[1024]; // [esp+Ch] [ebp-400h] BYREF

  if ( ElementSize * ElementCount )
  {
    result = freadLock(Buffer, ElementSize, ElementCount, fp->pfil);
    if ( !result )
      return result;
    if ( result != ElementCount )
    {
      sprintf(
        OutputString,
        "FCHK_FRead(): trying to read %d bytes, but got only %d bytes.\n",
        ElementSize * ElementCount,
        ElementSize * result);
      OutputDebugStringA(OutputString);
      exit(1);
    }
  }
  return 1;
}
