//----- (100033F0) --------------------------------------------------------
void *__cdecl CHK_ReAllocateMemory_0(void *Block, size_t Size, char *a3)
{
  void *result; // eax
  CHAR OutputString[1024]; // [esp+8h] [ebp-400h] BYREF

  result = realloc(Block, Size);
  if ( !Size )
    return 0;
  if ( !result )
  {
    sprintf(OutputString, "CHK_ReAllocateMemory(): Out of memory: couldn't reallocate %s\n", a3);
    OutputDebugStringA(OutputString);
    exit(1);
  }
  return result;
}
