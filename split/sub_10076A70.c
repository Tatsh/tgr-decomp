//----- (10076A70) --------------------------------------------------------
int __thiscall sub_10076A70(unsigned __int8 *this, int a2, int a3)
{
  sub_10061460(this[10668], this[10669], this[10670]);
  LoadCar(a2, a3, 0);
  sub_10074E20(this + 10864);
  memset(this + 10896, 0, 0x20u);
  return sub_10076A40(a2);
}
// 10061460: using guessed type _DWORD __cdecl sub_10061460(_DWORD, _DWORD, _DWORD);
// 10074E20: using guessed type _DWORD __cdecl sub_10074E20(_DWORD);
// 10076A40: using guessed type _DWORD __stdcall sub_10076A40(_DWORD);
