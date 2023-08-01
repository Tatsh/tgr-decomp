//----- (1005C2C0) --------------------------------------------------------
int __thiscall sub_1005C2C0(__int16 *this, int a2)
{
  int v3; // ebx
  __int16 v4; // ax
  int v5; // eax
  __int16 *v6; // edi
  int v7; // ebp
  __int16 v8; // ax
  int v9; // edx
  __int16 v10; // ax
  __int16 v11; // ax
  float v13; // [esp+2Ch] [ebp-20h]
  float v14; // [esp+2Ch] [ebp-20h]
  float v15; // [esp+2Ch] [ebp-20h]
  float v16; // [esp+2Ch] [ebp-20h]
  float v17; // [esp+2Ch] [ebp-20h]
  float v18; // [esp+30h] [ebp-1Ch]
  float v19; // [esp+30h] [ebp-1Ch]
  float v20; // [esp+30h] [ebp-1Ch]
  float v21; // [esp+30h] [ebp-1Ch]
  float v22; // [esp+30h] [ebp-1Ch]
  int v23; // [esp+44h] [ebp-8h]
  int v24; // [esp+48h] [ebp-4h]
  int v25; // [esp+48h] [ebp-4h]
  int v26; // [esp+50h] [ebp+4h]

  v3 = 0;
  v4 = this[54427];
  v23 = 0;
  if ( v4 >= 0 )
    (*(void (__thiscall **)(__int16 *, __int16, _DWORD, _DWORD))(*(_DWORD *)this + 4))(
      this,
      v4,
      *((_DWORD *)this + 9),
      *((_DWORD *)this + 10));
  if ( (*((_DWORD *)this + 6) & 0x1000000) == 0 && a2 >= 0 && (this[540 * a2 + 24] & 0x10) == 0 )
    LOBYTE(this[540 * a2 + 26]) = 4;
  v24 = 0;
  if ( this[54424] )
  {
    v26 = 0;
    do
    {
      v5 = this[54423] + v3;
      if ( v5 >= 0 && v5 < (unsigned __int16)this[54422] )
      {
        v6 = &this[540 * v5];
        if ( v6 != (__int16 *)-53 )
        {
          v7 = *((_DWORD *)v6 + 11);
          (*(void (__thiscall **)(__int16 *))(v7 + 4))(v6 + 22);
          *((_DWORD *)v6 + 276) = *((_DWORD *)this + 27215);
          *((_DWORD *)v6 + 278) = *((_DWORD *)this + 27217);
          v23 = v26 + *((_DWORD *)this + 27216);
          *((_DWORD *)v6 + 277) = v23;
          *((_DWORD *)v6 + 279) = v23 + 18;
          v18 = (float)v23;
          v13 = (float)*((int *)this + 27215);
          (*(void (__thiscall **)(__int16 *, _DWORD, _DWORD))(v7 + 12))(v6 + 22, LODWORD(v13), LODWORD(v18));
          v3 = v24;
        }
        if ( (*((_DWORD *)this + 6) & 0x2000000) != 0 )
        {
          v25 = *((_DWORD *)this + 27215) - 19;
          if ( sub_100586D0(*((_DWORD *)v6 + 280)) )
          {
            v19 = (float)v23;
            v14 = (float)v25;
            (*(void (__thiscall **)(__int16 *, int, _DWORD, _DWORD))(*(_DWORD *)this + 4))(
              this,
              139,
              LODWORD(v14),
              LODWORD(v19));
          }
          else
          {
            v20 = (float)v23;
            v15 = (float)v25;
            (*(void (__thiscall **)(__int16 *, int, _DWORD, _DWORD))(*(_DWORD *)this + 4))(
              this,
              138,
              LODWORD(v15),
              LODWORD(v20));
          }
        }
      }
      v24 = ++v3;
      v26 += 19;
    }
    while ( v3 < (unsigned __int16)this[54424] );
  }
  if ( (*((_DWORD *)this + 6) & 0x200000) == 0 )
  {
    v8 = this[54425];
    if ( v8 > 0 )
    {
      v9 = *(_DWORD *)this;
      v21 = (float)*((int *)this + 27220);
      v16 = (float)*((int *)this + 27219);
      if ( *((_DWORD *)this + 27239) )
        (*(void (__thiscall **)(__int16 *, int, float, float))(v9 + 4))(
          this,
          47,
          COERCE_FLOAT(LODWORD(v16)),
          COERCE_FLOAT(LODWORD(v21)));
      else
        (*(void (__thiscall **)(__int16 *, __int16, float, float))(v9 + 4))(
          this,
          v8,
          COERCE_FLOAT(LODWORD(v16)),
          COERCE_FLOAT(LODWORD(v21)));
    }
    v10 = this[54426];
    if ( v10 > 0 )
    {
      v22 = (float)*((int *)this + 27224);
      v17 = (float)*((int *)this + 27223);
      if ( *((_DWORD *)this + 27240) )
        (*(void (__thiscall **)(__int16 *, int, float, float))(*(_DWORD *)this + 4))(
          this,
          45,
          COERCE_FLOAT(LODWORD(v17)),
          COERCE_FLOAT(LODWORD(v22)));
      else
        (*(void (__thiscall **)(__int16 *, __int16, float, float))(*(_DWORD *)this + 4))(
          this,
          v10,
          COERCE_FLOAT(LODWORD(v17)),
          COERCE_FLOAT(LODWORD(v22)));
    }
    v11 = this[54428];
    if ( v11 > 0 )
      (*(void (__thiscall **)(__int16 *, __int16, _DWORD, _DWORD))(*(_DWORD *)this + 4))(
        this,
        v11,
        *((_DWORD *)this + 27243),
        *((_DWORD *)this + 27244));
  }
  return 1;
}
