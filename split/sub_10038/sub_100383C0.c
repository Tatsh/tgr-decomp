//----- (100383C0) --------------------------------------------------------
_BYTE *__cdecl sub_100383C0(_BYTE *a1)
{
  _BYTE *result; // eax
  char v2; // cl
  char v3; // dl
  char v4; // cl
  char v5; // dl
  char v6; // cl
  char v7; // dl
  char v8; // cl
  char v9; // dl
  char v10; // cl
  char v11; // dl
  char v12; // cl

  result = a1;
  v2 = a1[3];
  a1[3] = *a1;
  v3 = a1[1];
  *a1 = v2;
  v4 = a1[2];
  a1[2] = v3;
  v5 = a1[4];
  a1[1] = v4;
  v6 = a1[7];
  a1[7] = v5;
  v7 = a1[5];
  a1[4] = v6;
  v8 = a1[6];
  a1[6] = v7;
  v9 = a1[8];
  a1[5] = v8;
  v10 = a1[11];
  a1[11] = v9;
  v11 = a1[9];
  a1[8] = v10;
  v12 = a1[10];
  a1[10] = v11;
  a1[9] = v12;
  return result;
}
