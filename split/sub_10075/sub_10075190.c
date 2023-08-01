//----- (10075190) --------------------------------------------------------
DWORD __thiscall sub_10075190(LARGE_INTEGER *this)
{
  DWORD result; // eax
  LONG v3; // edx

  if ( dword_118AB144 )
  {
    result = QueryPerformanceCounter(this + 1);
    v3 = this->HighPart;
    this[2].LowPart = this->LowPart;
    this[2].HighPart = v3;
  }
  else
  {
    this[3].HighPart = getTicks();
    result = this[3].LowPart;
    this[4].LowPart = result;
  }
  return result;
}
// 118AB144: using guessed type int dword_118AB144;
