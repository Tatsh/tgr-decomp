//----- (1001A990) --------------------------------------------------------
BOOL __stdcall ddrawEnumerateCallback(GUID *lpGUID, LPSTR a2, LPSTR Source, LPVOID a4)
{
  #468 *mem; // eax
  #468 *memo; // edx
  int v6; // eax
  #468 *v7; // edi

  if ( a4 )
  {
    mem = (#468 *)operator new(0x334u);
    memo = mem;
    if ( mem )
    {
      v6 = *(_DWORD *)mem;
      LOBYTE(v6) = *(_DWORD *)memo & 0xFE;
      *(_DWORD *)memo = v6;
      memset((char *)memo + 28, 0, 0x17Cu);
      *((_DWORD *)memo + 7) = 380;
      memset((char *)memo + 408, 0, 0x17Cu);
      *((_DWORD *)memo + 102) = 380;
      *((_DWORD *)memo + 197) = 0;
      *((_DWORD *)memo + 198) = 0;
      *((_DWORD *)memo + 199) = 0;
      *((_DWORD *)memo + 200) = 0;
      *((_DWORD *)memo + 201) = 0;
      *((_DWORD *)memo + 202) = 0;
      *((_DWORD *)memo + 203) = 0;
      *((_DWORD *)memo + 204) = 0;
      v7 = memo;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
    {
      if ( sub_1001B090(v7, lpGUID, Source, a2) < 0 || sub_1001BA10(v7) < 0 )
      {
        sub_1001B280((void **)v7);
        operator delete(v7);
        return 1;
      }
      ++*((_DWORD *)a4 + 1);
    }
  }
  return 1;
}
