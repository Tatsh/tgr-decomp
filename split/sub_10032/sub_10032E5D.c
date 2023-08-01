//----- (10032E5D) --------------------------------------------------------
int __cdecl sub_10032E5D(__int16 a1, __int16 a2, __int16 a3, __int16 a4)
{
  int result; // eax
  unsigned int *v5; // [esp+0h] [ebp-58h]
  unsigned int *v6; // [esp+4h] [ebp-54h]
  unsigned int *v7; // [esp+8h] [ebp-50h]
  unsigned int *v8; // [esp+Ch] [ebp-4Ch]
  unsigned int *v9; // [esp+10h] [ebp-48h]
  unsigned int *v10; // [esp+14h] [ebp-44h]
  unsigned int *v11; // [esp+18h] [ebp-40h]
  unsigned int *v12; // [esp+1Ch] [ebp-3Ch]
  _DWORD *v13; // [esp+20h] [ebp-38h]
  _DWORD *v14; // [esp+24h] [ebp-34h]
  _DWORD *v15; // [esp+28h] [ebp-30h]
  _DWORD *v16; // [esp+2Ch] [ebp-2Ch]
  unsigned int *v17; // [esp+30h] [ebp-28h]
  unsigned int *v18; // [esp+34h] [ebp-24h]
  unsigned int *v19; // [esp+38h] [ebp-20h]
  unsigned int *v20; // [esp+3Ch] [ebp-1Ch]
  _DWORD *v21; // [esp+40h] [ebp-18h]
  _DWORD *v22; // [esp+44h] [ebp-14h]
  _DWORD *v23; // [esp+48h] [ebp-10h]
  _DWORD *v24; // [esp+4Ch] [ebp-Ch]
  _DWORD *v25; // [esp+50h] [ebp-8h]

  v25 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v25 = -419430400;
  v25[1] = 0;
  v24 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v24 = -1191181539;
  v24[1] = 252329984;
  v23 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v23 = -1174399998;
  v23[1] = 3145728;
  v22 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v22 = -150994944;
  v22[1] = 65537;
  v21 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v21 = -134217728;
  v21[1] = 255;
  v20 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v20 = (a2 - 1) & 0xFFF | (((a3 + a1) & 0xFFF) << 12) | 0xE1000000;
  v20[1] = (a2 - 2) & 0xFFF | (((a1 - 1) & 0xFFF) << 12);
  v19 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v19 = (a2 + a4 + 1) & 0xFFF | (((a3 + a1) & 0xFFF) << 12) | 0xE1000000;
  v19[1] = (a4 + a2) & 0xFFF | (((a1 - 1) & 0xFFF) << 12);
  v18 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v18 = (a4 + a2) & 0xFFF | (((a1 - 1) & 0xFFF) << 12) | 0xE1000000;
  v18[1] = (a2 - 1) & 0xFFF | (((a1 - 2) & 0xFFF) << 12);
  v17 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v17 = (a4 + a2) & 0xFFF | (((a1 + a3 + 1) & 0xFFF) << 12) | 0xE1000000;
  v17[1] = (a2 - 1) & 0xFFF | (((a3 + a1) & 0xFFF) << 12);
  v16 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v16 = -419430400;
  v16[1] = 0;
  v15 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v15 = -1191181539;
  v15[1] = 1426080320;
  v14 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v14 = -1174399998;
  v14[1] = 0;
  v13 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v13 = -134217728;
  v13[1] = 255;
  v12 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v12 = (a2 + 1) & 0xFFF | (((a3 + a1) & 0xFFF) << 12) | 0xE1000000;
  v12[1] = a2 & 0xFFF | ((a1 & 0xFFF) << 12);
  v11 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v11 = (a4 + a2) & 0xFFF | (((a3 + a1) & 0xFFF) << 12) | 0xE1000000;
  v11[1] = (a2 + a4 - 1) & 0xFFF | ((a1 & 0xFFF) << 12);
  v10 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v10 = (a4 + a2) & 0xFFF | (((a1 + 1) & 0xFFF) << 12) | 0xE1000000;
  v10[1] = a2 & 0xFFF | ((a1 & 0xFFF) << 12);
  v9 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v9 = (a4 + a2) & 0xFFF | (((a3 + a1) & 0xFFF) << 12) | 0xE1000000;
  v9[1] = a2 & 0xFFF | (((a1 + a3 - 1) & 0xFFF) << 12);
  v8 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v8 = (a2 - 2) & 0xFFF | (((a1 + a3 + 3) & 0xFFF) << 12) | 0xE1000000;
  v8[1] = (a2 - 3) & 0xFFF | (((a1 - 3) & 0xFFF) << 12);
  v7 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v7 = (a2 + a4 + 3) & 0xFFF | (((a1 + a3 + 3) & 0xFFF) << 12) | 0xE1000000;
  v7[1] = (a2 + a4 + 2) & 0xFFF | (((a1 - 3) & 0xFFF) << 12);
  v6 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v6 = (a2 + a4 + 3) & 0xFFF | (((a1 - 2) & 0xFFF) << 12) | 0xE1000000;
  v6[1] = (a2 - 3) & 0xFFF | (((a1 - 3) & 0xFFF) << 12);
  v5 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  *v5 = (a2 + a4 + 3) & 0xFFF | (((a1 + a3 + 3) & 0xFFF) << 12) | 0xE1000000;
  result = (a2 - 3) & 0xFFF;
  v5[1] = result | (((a1 + a3 + 2) & 0xFFF) << 12);
  return result;
}
// 106C0680: using guessed type int dword_106C0680;
