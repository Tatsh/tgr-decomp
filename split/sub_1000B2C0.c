//----- (1000B2C0) --------------------------------------------------------
int __thiscall sub_1000B2C0(LONG windowLong)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( (*(_BYTE *)(windowLong + 28) & 0x1F) != 31 )
    return -2005522669;
  v3 = *(_DWORD *)(windowLong + 68);
  if ( !v3
    || !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 96))(*(_DWORD *)(windowLong + 68))
    || (result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(windowLong + 68) + 108))(*(_DWORD *)(windowLong + 68)),
        result >= 0) )
  {
    v4 = *(_DWORD *)(windowLong + 92);
    if ( !v4
      || !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 96))(*(_DWORD *)(windowLong + 92))
      || (result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(windowLong + 92) + 108))(*(_DWORD *)(windowLong + 92)),
          result >= 0) )
    {
      v5 = *(_DWORD *)(windowLong + 88);
      if ( !v5
        || !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 96))(*(_DWORD *)(windowLong + 88))
        || (result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(windowLong + 88) + 108))(*(_DWORD *)(windowLong + 88)),
            result >= 0) )
      {
        if ( !*(_DWORD *)(windowLong + 136) || (result = sub_10001190(), result >= 0) )
          result = 0;
      }
    }
  }
  return result;
}
