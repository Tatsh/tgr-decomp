//----- (1001CA10) --------------------------------------------------------
int __cdecl sub_1001CA10(float *a1)
{
  int result; // eax
  int v2; // eax
  _DWORD *v3; // ecx

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
  result = g_vertexCount++;
  v3 = (_DWORD *)((char *)&g_vertices + 32 * result);
  *v3 = *(_DWORD *)a1;
  v3[1] = *((_DWORD *)a1 + 1);
  v3[2] = *((_DWORD *)a1 + 2);
  v3[3] = *((_DWORD *)a1 + 8);
  v3[4] = dword_104C0BB4;
  v3[6] = *((_DWORD *)a1 + 9);
  v3[7] = *((_DWORD *)a1 + 10);
  return result;
}
// 104C0BB4: using guessed type int dword_104C0BB4;
// 104C5188: using guessed type int g_vertexCount;
// 104C5190: using guessed type int dword_104C5190;
