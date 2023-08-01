//----- (10008890) --------------------------------------------------------
int __thiscall sub_10008890(unk1 *this, int a2)
{
  unk1Vtbl *v3; // edi
  int v4; // eax

  v3 = this->vtbl;
  v4 = this->vtbl->field_C(this, a2);
  return v3->field_24(this, v4);
}
