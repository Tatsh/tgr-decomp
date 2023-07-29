//----- (10001970) --------------------------------------------------------
float *__thiscall sub_10001970(#481 *this)
{
  float *result; // eax

  *((_DWORD *)this + 2509) = (char *)this + 10248;
  sub_1003AFE0((int)this + 10296, (int)this + 48, (int)this, 6.0);
  sub_1003B020((int)this + 10296, (int)this + 16, 2.0);
  result = sub_1003AF70((float *)this + 2574, (float *)this + 8);
  *((_DWORD *)this + 990) = 2;
  return result;
}
