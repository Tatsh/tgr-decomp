//----- (100764C0) --------------------------------------------------------
void __thiscall sub_100764C0(float *this, float a2)
{
  float v3; // edi
  long double v4; // st7
  long double v5; // st7
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  float v9; // [esp+Ch] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-Ch]
  float v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]
  float v13; // [esp+1Ch] [ebp+4h]

  v11 = cos_(a2);
  v12 = sin_(a2);
  v9 = a2 - -1.5707964;
  v3 = v9;
  v10 = cos_(v9);
  v4 = sin_(v3);
  *this = v11;
  this[1] = v12;
  this[2] = 0.0;
  this[5] = v4;
  this[4] = v10;
  this[6] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  v13 = a2 * 0.5;
  this[10] = 1.0;
  this[125] = cos_(v13);
  this[126] = 0.0;
  this[127] = 0.0;
  v5 = sin_(v13);
  v6 = *((_DWORD *)this + 125);
  v7 = *((_DWORD *)this + 126);
  v8 = *((_DWORD *)this + 127);
  this[128] = v5;
  this[184] = v5;
  this[167] = v5;
  *((_DWORD *)this + 181) = v6;
  *((_DWORD *)this + 164) = v6;
  *((_DWORD *)this + 182) = v7;
  *((_DWORD *)this + 183) = v8;
  *((_DWORD *)this + 165) = v7;
  *((_DWORD *)this + 166) = v8;
  sub_10074450(this + 136, this + 119);
}
