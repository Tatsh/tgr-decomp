//----- (10076AE0) --------------------------------------------------------
int __thiscall sub_10076AE0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 < 16 )
  {
    this[2669] = 0;
  }
  else
  {
    result = a2 - 16;
    this[2669] = 1;
  }
  this[2666] = result;
  return result;
}
