//----- (1001B690) --------------------------------------------------------
int __thiscall sub_1001B690(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // edx
  int v8; // ebx
  IID **__attribute__((__org_arrdim(0,3))) v9; // ecx
  int v10; // ebp
  int v11; // eax
  int result; // eax
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]
  IID **__attribute__((__org_arrdim(0,3))) iid; // [esp+28h] [ebp+Ch]

  v4 = a3;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( a3 )
    *a3 = 0;
  v8 = a4;
  if ( !a4 )
    v8 = this[201];
  v9 = (IID **)v8;
  iid = (IID **)v8;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v8 + 548);
      LOBYTE(v11) = sub_1001ADA0((_BYTE *)v8, (const void *)a2);
      if ( v11 )
        break;
      if ( sub_1001AD90((IID **)v8) && !v5 )
        v13 = v8;
      if ( !memcmp((const void *)(v8 + 4), &CLSID_IDirect3DRGBDevice, 0x10u) && !v15 )
        v15 = v8;
      if ( !memcmp((const void *)(v8 + 4), &CLSID_IDirect3DMMXDevice, 0x10u) && !v14 )
        v14 = v8;
      v8 = v10;
      if ( !v10 )
      {
        v4 = a3;
        v5 = v13;
        v6 = v14;
        v7 = v15;
        v9 = iid;
        goto LABEL_20;
      }
      v5 = v13;
    }
    result = v8;
  }
  else
  {
LABEL_20:
    if ( v4 )
    {
      if ( v5 )
      {
        *v4 = v5;
        return 0;
      }
      if ( v7 )
      {
        *v4 = v7;
        return 0;
      }
      if ( v6 )
      {
        *v4 = v6;
        return 0;
      }
      if ( v9 )
        *v4 = v9;
    }
    result = 0;
  }
  return result;
}
// 1001B6E9: variable 'v11' is possibly undefined
