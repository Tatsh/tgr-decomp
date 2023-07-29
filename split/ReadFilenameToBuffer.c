//----- (100378B0) --------------------------------------------------------
void __cdecl ReadFilenameToBuffer(void *outBuffer, char *filename, size_t ElementCount)
{
  CHK_File *v3; // esi
  size_t v4; // eax
  char Buffer[512]; // [esp+4h] [ebp-200h] BYREF

  if ( !CHK_FileExists(filename) )
  {
    sprintf(Buffer, "File %s missing", filename);
    sub_10008CF0((int)Buffer);
  }
  v3 = CHK_FReadOpen(filename);
  v4 = ElementCount;
  if ( (ElementCount & 0x80000000) != 0 )
    v4 = getFileSize(&v3->pfil);
  CHK_FReadReportError(outBuffer, 1u, v4, v3);
  CHK_FClose(v3);
}
