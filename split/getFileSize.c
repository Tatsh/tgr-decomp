//----- (10002F90) --------------------------------------------------------
int __cdecl getFileSize(FILE **a1)
{
  int v1; // edi
  int v2; // ebx

  v1 = ftell(*a1);
  fseek(*a1, 0, 2);
  v2 = ftell(*a1);
  fseek(*a1, v1, 0);
  return v2;
}
