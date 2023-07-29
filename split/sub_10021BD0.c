//----- (10021BD0) --------------------------------------------------------
int *__cdecl sub_10021BD0(int *a1)
{
  int v1; // eax
  int *v2; // ecx
  int v3; // edi
  int a1_index1; // edx
  float *v6; // edi
  float *v7; // ecx
  int v8; // ebx
  int v9; // esi
  double v10; // st6
  double v11; // st7
  double v12; // st5
  double v13; // st4
  double v14; // st6
  int deref_a1; // [esp+20h] [ebp+4h]
  float v17; // [esp+20h] [ebp+4h]

  if ( g_indexedPrimitiveIndexCount )
  {
    g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(
      g_D3DDevice2,
      4,
      3,
      &g_vertices,
      g_vertexCount,
      &g_indexedPrimitiveIndices,
      g_indexedPrimitiveIndexCount,
      12);
    v1 = 0;
    if ( dword_104C5190 > 0 )
    {
      v2 = dword_104C0BC0;
      do
      {
        v3 = *v2;
        ++v1;
        ++v2;
        *(_DWORD *)(v3 + 104) = -1;
      }
      while ( v1 < dword_104C5190 );
    }
    g_indexedPrimitiveIndexCount = 0;
    g_vertexCount = 0;
    dword_104C5190 = 0;
  }
  a1_index1 = a1[1];
  deref_a1 = *a1;
  v6 = &flt_104C16D0[27 * BYTE2(deref_a1)];
  if ( (unsigned __int16)deref_a1 >> 10 )
  {
    v7 = v6 + 22;
    v8 = (unsigned __int16)deref_a1 >> 10;
    do
    {
      v9 = 0;
      *(v7 - 5) = flt_104C4D20 * *(float *)(a1_index1 + 4)
                + flt_104C4D30 * *(float *)(a1_index1 + 8)
                + *(float *)a1_index1 * flt_104C4D10
                + flt_104C4D40;
      *(v7 - 4) = flt_104C4D24 * *(float *)(a1_index1 + 4)
                + flt_104C4D34 * *(float *)(a1_index1 + 8)
                + *(float *)a1_index1 * flt_104C4D14
                + flt_104C4D44;
      *(v7 - 3) = flt_104C4D28 * *(float *)(a1_index1 + 4)
                + flt_104C4D38 * *(float *)(a1_index1 + 8)
                + *(float *)a1_index1 * flt_104C4D18
                + flt_104C4D48;
      *v7 = flt_104C4D2C * *(float *)(a1_index1 + 4)
          + flt_104C4D3C * *(float *)(a1_index1 + 8)
          + *(float *)a1_index1 * flt_104C4D1C
          + flt_104C4D4C;
      *(v7 - 2) = *(float *)(a1_index1 + 12);
      *(v7 - 1) = *(float *)(a1_index1 + 16);
      v7[1] = *(float *)(a1_index1 + 20) * 0.0039215689;
      v7[2] = *(float *)(a1_index1 + 24) * 0.0039215689;
      v7[3] = *(float *)(a1_index1 + 28) * 0.0039215689;
      if ( *v7 < 0.0 )
        v9 = 1;
      if ( *(v7 - 3) + *v7 < 0.0 )
        v9 |= 2u;
      if ( *v7 - *(v7 - 3) < 0.0 )
        v9 |= 4u;
      if ( *(v7 - 5) + *v7 < 0.0 )
        v9 |= 8u;
      if ( *v7 - *(v7 - 5) < 0.0 )
        v9 |= 0x10u;
      if ( *(v7 - 4) + *v7 < 0.0 )
        v9 |= 0x20u;
      if ( *v7 - *(v7 - 4) < 0.0 )
        v9 |= 0x40u;
      *((_DWORD *)v7 - 7) = v9;
      if ( !v9 )
      {
        v17 = 1.0 / *v7;
        *(v7 - 14) = v17;
        v10 = v7[1];
        v11 = v7[2];
        v12 = v7[3];
        *v6 = flt_104BBF08 * *(v7 - 5) * v17 + flt_104C0BB0;
        *(v7 - 21) = flt_104BC198 * *(v7 - 14) * *(v7 - 4) + flt_104C0BB8;
        v13 = v10;
        v14 = flt_100A79E0 * *(v7 - 14) * *(v7 - 3) + flt_100A79E4;
        *(v7 - 19) = v13;
        *(v7 - 18) = v11;
        *(v7 - 17) = v12;
        *(v7 - 20) = v14;
      }
      a1_index1 += 32;
      v6 += 27;
      v7 += 27;
      --v8;
    }
    while ( v8 );
  }
  return a1 + 2;
}
// 100A79E0: using guessed type float flt_100A79E0;
// 100A79E4: using guessed type float flt_100A79E4;
// 104BBF08: using guessed type float flt_104BBF08;
// 104BC198: using guessed type float flt_104BC198;
// 104C0BB0: using guessed type float flt_104C0BB0;
// 104C0BB8: using guessed type float flt_104C0BB8;
// 104C4D10: using guessed type float flt_104C4D10;
// 104C4D14: using guessed type float flt_104C4D14;
// 104C4D18: using guessed type float flt_104C4D18;
// 104C4D1C: using guessed type float flt_104C4D1C;
// 104C4D20: using guessed type float flt_104C4D20;
// 104C4D24: using guessed type float flt_104C4D24;
// 104C4D28: using guessed type float flt_104C4D28;
// 104C4D2C: using guessed type float flt_104C4D2C;
// 104C4D30: using guessed type float flt_104C4D30;
// 104C4D34: using guessed type float flt_104C4D34;
// 104C4D38: using guessed type float flt_104C4D38;
// 104C4D3C: using guessed type float flt_104C4D3C;
// 104C4D40: using guessed type float flt_104C4D40;
// 104C4D44: using guessed type float flt_104C4D44;
// 104C4D48: using guessed type float flt_104C4D48;
// 104C4D4C: using guessed type float flt_104C4D4C;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
