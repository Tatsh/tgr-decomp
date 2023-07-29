//----- (10008890) --------------------------------------------------------
int __thiscall sub_10008890(int *this, int a2)
{
  int v3; // edi
  int v4; // eax

  v3 = *this;
  v4 = (*(int (__thiscall **)(int *, int))(*this + 12))(this, a2);
  return (*(int (__thiscall **)(int *, int))(v3 + 36))(this, v4);
}
