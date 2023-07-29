//----- (10008C60) --------------------------------------------------------
size_t __stdcall sub_10008C60(FILE *Stream, void *Buffer, size_t ElementCount)
{
  size_t result; // eax

  result = freadLock(Buffer, 1u, ElementCount, Stream);
  if ( result != ElementCount )
    writeToRandomBufferAndExit(aFileReadFailur);
  return result;
}
