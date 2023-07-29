//----- (1000A390) --------------------------------------------------------
HRESULT __thiscall sub_1000A390(gameSpecificUnk0 *this)
{
  HRESULT result; // eax
  gameSpecificUnk1 *gsu1; // ecx
  gameSpecificUnk1 *guid; // eax
  IID *v5; // ecx
  int v6; // ebx
  gameSpecificUnk1 *v7; // esi
  unk0 *v8; // ecx
  IID *refclsid; // ecx
  int v10; // [esp+10h] [ebp-18h] BYREF
  int v11; // [esp+14h] [ebp-14h] BYREF
  int v12; // [esp+18h] [ebp-10h] BYREF
  int v13; // [esp+1Ch] [ebp-Ch] BYREF
  unk0 *v14; // [esp+20h] [ebp-8h] BYREF
  IID *v15; // [esp+24h] [ebp-4h] BYREF

  if ( (g_hasCalledDDrawEnum & 1) != 0 || (result = sub_1001B970(), result >= 0) )
  {
    gsu1 = this->gameSpecificUnk1_instance;
    if ( gsu1 )
      guid = (gameSpecificUnk1 *)getDirectDrawLPGUID(gsu1);
    else
      guid = 0;
    v5 = this->refclsid;
    if ( v5 )
      v6 = (int)&v5->Data2;
    else
      v6 = 0;
    v7 = sub_1001A550(guid);
    if ( v7 )
    {
      v8 = this->u0;
      if ( v8 )
      {
        sub_1001AC80(v8, &v13, &v12, &v11, &v10);
      }
      else
      {
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
      }
      if ( sub_1001A6E0((int)v7, v6, v13, v12, v11, v10, &v14, &v15) )
      {
        refclsid = v15;
        this->u0 = v14;
        this->gameSpecificUnk1_instance = v7;
        this->refclsid = refclsid;
        result = 0;
      }
      else
      {
        result = -2005522671;
      }
    }
    else
    {
      result = -2005522670;
    }
  }
  return result;
}
// 104BBE18: using guessed type int g_hasCalledDDrawEnum;
