//----- (10033E83) --------------------------------------------------------
_DWORD *__cdecl sub_10033E83(int a1, float a2, int a3, float a4, float a5)
{
  float v6; // [esp+0h] [ebp-18h]
  float v7; // [esp+4h] [ebp-14h]
  float v8; // [esp+4h] [ebp-14h]
  float v9; // [esp+8h] [ebp-10h]
  float v10; // [esp+8h] [ebp-10h]

  v9 = *(float *)(a1 + 56) + *(float *)(a1 + 8);
  v7 = *(float *)(a1 + 52) + *(float *)(a1 + 4);
  v6 = *(float *)(a1 + 48) + *(float *)a1;
  sub_100309A0(
    (int)flt_106C58C0,
    *(float *)(a1 + 48),
    *(float *)(a1 + 52),
    *(float *)(a1 + 56),
    v6,
    v7,
    v9,
    *(float *)(a1 + 32),
    *(float *)(a1 + 36),
    *(float *)(a1 + 40));
  LODWORD(dword_106C5AB4) = a3;
  dword_106C3360 = 0.80000001;
  v10 = a4 / a5;
  v8 = a2 * 1.3333334 * (a5 / a4) * 57.295776;
  sub_10030930((int)flt_106C0218, (int)&word_106C067C, v8, v10, 0.80000001, *(float *)&a3);
  sub_100306C0(flt_106C58C0, flt_106C0218, &flt_106C29A8);
  dword_106C32D0 = (int)sub_10069490();
  return sub_100307A0((int)&flt_106C29A8, (_DWORD *)dword_106C32D0);
}
// 106C067C: using guessed type __int16 word_106C067C;
// 106C29A8: using guessed type float flt_106C29A8;
// 106C32D0: using guessed type int dword_106C32D0;
