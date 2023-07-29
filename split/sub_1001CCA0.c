//----- (1001CCA0) --------------------------------------------------------
int __cdecl sub_1001CCA0(int a1)
{
  int v2; // edx
  int result; // eax
  __int64 v4; // [esp+0h] [ebp-8h]
  float v5; // [esp+Ch] [ebp+4h]
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  v5 = (float)HIBYTE(*(_DWORD *)(a1 + 4));
  flt_104C5154 = v5 * 0.0039215689;
  v6 = (float)(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 4));
  flt_104C5160 = v6 * 0.0039215689;
  v4 = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 4));
  v7 = (float)v4;
  flt_104C1690 = v7 * 0.0039215689;
  v2 = (unsigned __int8)*(_DWORD *)(a1 + 4);
  result = a1 + 8;
  LODWORD(v4) = v2;
  v8 = (float)v4;
  flt_104C0BA8 = v8 * 0.0039215689;
  return result;
}
// 104C0BA8: using guessed type float flt_104C0BA8;
// 104C1690: using guessed type float flt_104C1690;
// 104C5154: using guessed type float flt_104C5154;
// 104C5160: using guessed type float flt_104C5160;
