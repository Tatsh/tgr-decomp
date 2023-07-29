//----- (1003D070) --------------------------------------------------------
int sub_1003D070()
{
  int result; // eax
  unsigned int v1; // esi
  unsigned int v2; // edi

  result = dword_10AA29D4;
  if ( dword_10AA29D4 )
  {
    v1 = 0;
    v2 = *(unsigned __int16 *)(dword_10AA29D4 + 123236);
    if ( (_WORD)v2 )
    {
      while ( 1 )
      {
        result = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)(result + 14392) + 44))(result + 14392, v1++);
        if ( v1 >= v2 )
          break;
        result = dword_10AA29D4;
      }
    }
  }
  return result;
}
// 10AA29D4: using guessed type int dword_10AA29D4;
