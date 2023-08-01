//----- (1001CA90) --------------------------------------------------------
int __cdecl sub_1001CA90(float *a1)
{
  int result; // eax
  int v2; // eax
  int v3; // ebx
  int v4; // esi
  _DWORD *v5; // esi
  __int64 v6; // rax

  if ( a1 >= flt_104C16D0 && a1 < flt_104C4CD0 )
  {
    result = *((_DWORD *)a1 + 26);
    if ( result != -1 )
      return result;
    *((_DWORD *)a1 + 26) = g_vertexCount;
    v2 = dword_104C5190;
    dword_104C0BC0[dword_104C5190] = (int)a1;
    dword_104C5190 = v2 + 1;
  }
  v3 = g_vertexCount;
  v4 = g_vertexCount++;
  v5 = (_DWORD *)((char *)&g_vertices + 32 * v4);
  *v5 = *(_DWORD *)a1;
  v5[1] = *((_DWORD *)a1 + 1);
  v5[2] = *((_DWORD *)a1 + 2);
  v5[3] = *((_DWORD *)a1 + 8);
  v5[4] = dword_104C0BB4;
  v6 = (__int64)(flt_104C15C8 * a1[8]);
  if ( (int)v6 < dword_104BBE30 )
    LODWORD(v6) = 0;
  if ( (int)v6 > 255 )
    LODWORD(v6) = 255;
  v5[5] = (_DWORD)v6 << 24;
  v5[6] = *((_DWORD *)a1 + 9);
  v5[7] = *((_DWORD *)a1 + 10);
  return v3;
}
// 104BBE30: using guessed type int dword_104BBE30;
// 104C0BB4: using guessed type int dword_104C0BB4;
// 104C15C8: using guessed type float flt_104C15C8;
// 104C5188: using guessed type int g_vertexCount;
// 104C5190: using guessed type int dword_104C5190;
