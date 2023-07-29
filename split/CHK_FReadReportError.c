//----- (10003170) --------------------------------------------------------
void *__cdecl CHK_FReadReportError(void *Buffer, size_t ElementSize, size_t ElementCount, CHK_File *fp)
{
  CHAR OutputString[1024]; // [esp+Ch] [ebp-400h] BYREF

  if ( !FCHK_FRead_0(Buffer, ElementSize, ElementCount, fp) )
  {
    sprintf(OutputString, "CHK_FRead(): trying to read %u bytes, but got EOF.\n", ElementSize * ElementCount);
    OutputDebugStringA(OutputString);
    exit(1);
  }
  return Buffer;
}
