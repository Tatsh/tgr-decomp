//----- (10048180) --------------------------------------------------------
int __thiscall sub_10048180(char *this)
{
  int v2; // edi
  int (__cdecl *v3)(char *); // eax
  int v4; // eax
  int result; // eax
  int v6; // ecx
  int (*v7)(); // eax
  int v8; // eax
  void (__cdecl *v9)(char *); // eax
  int v10; // ebp
  __int16 *v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  void (__cdecl *v18)(char *); // eax
  __int16 v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v19 = *((_WORD *)this + 148);
  if ( (this[28] & 0x10) != 0
    || (v2 = *(_DWORD *)this, v20 = *(_DWORD *)this, (*(int (__thiscall **)(char *))(*(_DWORD *)this + 60))(this)) )
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 8))(this);
    return 1;
  }
  if ( *((_DWORD *)this + 3590) )
    (*(void (__thiscall **)(char *))(v2 + 48))(this);
  (*(void (__thiscall **)(char *))(v2 + 4))(this);
  v3 = (int (__cdecl *)(char *))*((_DWORD *)this + 1);
  if ( !v3 )
    goto LABEL_9;
  v4 = v3(this);
  if ( v4 == -2 )
    return 1;
  if ( v4 == -1 )
    return 0;
LABEL_9:
  if ( !(*(int (__thiscall **)(char *))(v2 + 32))(this) || dword_10AA28D8 )
  {
    v17 = *((_DWORD *)this + 7);
    if ( (v17 & 0x400000) != 0 )
      *((_WORD *)this + 61702) = *((_WORD *)this + 5408);
    if ( (v17 & 4) != 0 || (v17 & 0x20000) != 0 )
    {
      v18 = (void (__cdecl *)(char *))*((_DWORD *)this + 3);
      if ( v18 )
        v18(this);
    }
    else
    {
      *((_WORD *)this + 148) = 0;
      if ( (v17 & 0x100000) != 0 && (v17 & 0x10) == 0 && *((_DWORD *)this + 3) )
      {
        *((_WORD *)this + 61702) = 3;
        this[11108] = 1;
        (*(void (__thiscall **)(char *))(v2 + 8))(this);
        return 1;
      }
    }
    goto LABEL_44;
  }
  v6 = *((_DWORD *)this + 7);
  if ( (v6 & 0x400000) != 0 && (*((_DWORD *)dword_10AA2E80 + 11) || *((_DWORD *)dword_10AA2E80 + 12)) )
    *((_WORD *)this + 61702) = *((_WORD *)this + 5409);
  if ( (v6 & 2) == 0 )
  {
    v9 = (void (__cdecl *)(char *))*((_DWORD *)this + 3);
    if ( v9 )
      v9(this);
LABEL_28:
    if ( (*((_DWORD *)this + 7) & 0x10000) != 0 && *((__int16 *)this + 5466) > 0 )
    {
      v10 = 0;
      v11 = (__int16 *)(this + 10934);
      do
      {
        v12 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2746) + 100) + 4 * *v11 + 24);
        *(_DWORD *)(v12 + 28) |= 0x20000u;
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2746) + 100) + 4 * *v11 + 24) + 296) = v19;
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2746) + 100) + 4 * *v11 + 24) + 10612) = 0;
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2746) + 100) + 4 * *v11 + 24) + 10608) = 0;
        v13 = *((_DWORD *)this + 2746);
        *((_DWORD *)this + 22) += *(__int16 *)(*(_DWORD *)(*(_DWORD *)(v13 + 100) + 4 * *v11 + 24) + 72);
        v14 = *(_DWORD *)(*(_DWORD *)(v13 + 100) + 4 * *v11 + 24);
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
        v15 = *v11++;
        v16 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2746) + 100) + 4 * v15 + 24);
        ++v10;
        *(_DWORD *)(v16 + 28) &= 0xFFFDFFFF;
      }
      while ( v10 < *((__int16 *)this + 5466) );
      (*(void (__thiscall **)(char *))(v20 + 8))(this);
      return 1;
    }
LABEL_44:
    (*(void (__thiscall **)(char *))(v2 + 8))(this);
    return 1;
  }
  v7 = (int (*)())*((_DWORD *)this + 2);
  if ( !v7 )
  {
LABEL_25:
    v8 = *((_DWORD *)this + 7);
    LOBYTE(v8) = v8 & 0xFD;
    *((_DWORD *)this + 7) = v8;
    goto LABEL_28;
  }
  if ( (char *)v7 == (char *)sub_10043760 )
  {
    sub_10072AF0(2, 0x200020u);
    dword_10AA2854 = 2;
  }
  else if ( v7 != sub_10042CF0 )
  {
    sub_10072AF0(1, 0x200020u);
    dword_10AA2854 = 1;
  }
  result = (*((int (__cdecl **)(char *))this + 2))(this);
  if ( result )
  {
    if ( *((int (**)())this + 2) == sub_10042CF0 )
    {
      sub_10072AF0(1, 0x200020u);
      dword_10AA2854 = 1;
    }
    dword_10AA33E4 = 0;
    goto LABEL_25;
  }
  return result;
}
// 100482F3: conditional instruction was optimized away because of 'ax.2>=1'
// 10043760: using guessed type int __cdecl sub_10043760(int);
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA28D8: using guessed type int dword_10AA28D8;
// 10AA33E4: using guessed type int dword_10AA33E4;
