//----- (10069AA0) --------------------------------------------------------
int __thiscall sub_10069AA0(int this, int a2)
{
  int result; // eax

  result = a2 - 1;
  if ( a2 == 1 )
  {
    qmemcpy((void *)(this + 168), &unk_100B4140, 0xA8u);
  }
  else
  {
    result = a2 - 2;
    if ( a2 == 2 )
    {
      qmemcpy((void *)(this + 336), &unk_100B41E8, 0xA8u);
    }
    else
    {
      result = a2 - 3;
      if ( a2 == 3 )
        qmemcpy((void *)(this + 504), &unk_100B4290, 0xA8u);
      else
        qmemcpy((void *)this, aE, 0xA8u);
    }
  }
  return result;
}
