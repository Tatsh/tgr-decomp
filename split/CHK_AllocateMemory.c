//----- (10003390) --------------------------------------------------------
void *__cdecl CHK_AllocateMemory(size_t Size, const char *debugName)
{
  void *result; // eax
  CHAR OutputString[1024]; // [esp+0h] [ebp-400h] BYREF

  result = (void *)Size;
  if ( Size )
  {
    result = malloc(Size);
    if ( !result )
    {
      sprintf(OutputString, "CHK_AllocateMemory(): Out of memory: couldn't allocate %s\n", debugName);
      OutputDebugStringA(OutputString);
      exit(1);
    }
  }
  return result;
}
