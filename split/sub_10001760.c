//----- (10001760) --------------------------------------------------------
int __thiscall sub_10001760(#480 *this)
{
  int result; // eax
  double v3; // st7
  int v4; // edx
  double v5; // st7
  double v7; // st7
  char v8; // c0
  unsigned __int8 v10; // c0
  unsigned __int8 v11; // c3
  char v13; // c0
  float v14; // [esp+8h] [ebp-4h]

  if ( *((_DWORD *)this + 991) )
    return sub_1003AFE0((int)this + 10464, (int)this + 48, (int)this + 32, 1.1);
  v3 = *((float *)this + 14) - -0.66000003;
  v4 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 2617) = *((_DWORD *)this + 13);
  *((float *)this + 2618) = v3;
  *((_DWORD *)this + 2616) = v4;
  v5 = sub_1003B170((float *)this + 129);
  result = g_GameMode;
  v14 = v5;
  if ( g_GameMode != 5 )
  {
    v7 = 0.0;
    if ( v8 )
    {
      v7 = 2.0;
    }
    else if ( v14 < 7.0 )
    {
      v7 = 4.0 - v14 * 0.5714286;
    }
    if ( v7 <= *((float *)this + 2615) )
    {
      if ( v7 < *((float *)this + 2615) )
      {
        *((float *)this + 2615) = *((float *)this + 2615) - 0.1;
        if ( v13 )
          *((float *)this + 2615) = v7;
      }
    }
    else
    {
      *((float *)this + 2615) = *((float *)this + 2615) - -0.1;
      if ( !(v10 | v11) )
        *((float *)this + 2615) = v7;
    }
    result = sub_1003B020((int)this + 10464, (int)this, *((float *)this + 2615));
  }
  return result;
}
// 100017E8: variable 'v8' is possibly undefined
// 1000183A: variable 'v10' is possibly undefined
// 1000183A: variable 'v11' is possibly undefined
// 1000186D: variable 'v13' is possibly undefined
// 100AA010: using guessed type int g_GameMode;
