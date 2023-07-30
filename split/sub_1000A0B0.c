//----- (1000A0B0) --------------------------------------------------------
int __thiscall sub_1000A0B0(unk3 *this)
{
  int v2; // eax
  int result; // eax

  if ( this->field_a )
    (*(void (__stdcall **)(unk4 *))(this->field_a->field_b + 8))(this->field_a);
  v2 = this->field_b;
  this->field_a = 0;
  if ( v2 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  result = this->field_8;
  this->field_b = 0;
  if ( result )
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
  this->field_8 = 0;
  this->field_C = 0;
  return result;
}
