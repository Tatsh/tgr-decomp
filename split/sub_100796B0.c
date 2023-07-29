//----- (100796B0) --------------------------------------------------------
HINSTANCE sub_100796B0()
{
  HINSTANCE result; // eax
  unsigned int v1; // [esp+0h] [ebp-8h] BYREF
  char v2[4]; // [esp+4h] [ebp-4h] BYREF

  result = GetModuleHandleA(0);
  hInst = result;
  if ( result )
  {
    getDirectXVersion(&v1, v2);
    if ( v1 >= 0x600 )
    {
      result = (HINSTANCE)bringWindowToFront();
      if ( result )
        result = (HINSTANCE)(sub_100798F0() != 0);
    }
    else
    {
      MessageBoxA(0, Text, Caption, 0x10u);
      result = 0;
    }
  }
  return result;
}
