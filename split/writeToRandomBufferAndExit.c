//----- (10008CC0) --------------------------------------------------------
void __noreturn writeToRandomBufferAndExit(char *format, ...)
{
  char *buff; // eax
  va_list va; // [esp+8h] [ebp+8h] BYREF

  va_start(va, format);
  buff = (char *)operator new(0x400u);
  vsprintf(buff, format, va);
  exit(1);
}
