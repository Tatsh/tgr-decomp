//----- (100664C0) --------------------------------------------------------
void __thiscall sub_100664C0(int this)
{
  int i; // edi

  for ( i = 0; i < *(_DWORD *)(this + 124); ++i )
  {
    free(*(void **)(*(_DWORD *)(this + 120) + 4 * i));
    *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * i) = 0;
  }
  free(*(void **)(this + 120));
  *(_DWORD *)(this + 120) = 0;
  *(_DWORD *)(this + 124) = 0;
}
