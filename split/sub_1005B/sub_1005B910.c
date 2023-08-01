//----- (1005B910) --------------------------------------------------------
int __thiscall sub_1005B910(int this, int a2, int *a3, __int16 a4, __int16 a5, __int16 a6)
{
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int v14; // ebp
  double v15; // st6
  int v16; // ecx
  int v17; // ebp
  double v18; // st7
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // st7
  int v26; // ebp
  int v28; // [esp+20h] [ebp+10h]

  *(float *)(this + 28) = (float)*a3;
  *(float *)(this + 32) = (float)a3[1];
  *(_DWORD *)(this + 108860) = *a3;
  *(_DWORD *)(this + 108864) = a3[1];
  *(_DWORD *)(this + 108868) = a3[2];
  *(_DWORD *)(this + 108872) = a3[3];
  *(_DWORD *)(this + 24) = a2;
  *(_WORD *)(this + 108848) = a4;
  *(_WORD *)(this + 108846) = a5;
  *(_WORD *)(this + 108854) = a6;
  *(_WORD *)(this + 108850) = 48;
  *(_WORD *)(this + 108852) = 46;
  *(_WORD *)(this + 108856) = 58;
  v7 = dword_100AB9F4 - dword_100AB9EC;
  v8 = dword_100AB9F8 - dword_100AB9F0;
  if ( dword_100AB9F4 - dword_100AB9EC < 0 )
    v7 = 0;
  if ( v8 < 0 )
    v8 = 0;
  if ( *(_DWORD *)(this + 108984) )
  {
    v9 = *a3;
    *(_DWORD *)(this + 108908) = *a3;
    v10 = a3[3] + 3;
    v11 = v7 + v9;
    *(_DWORD *)(this + 108912) = v10;
    v28 = v10;
    *(_DWORD *)(this + 108916) = v11;
    *(_DWORD *)(this + 108920) = v8 + v10;
    v12 = a3[2] - v7;
    *(_DWORD *)(this + 108924) = v12;
    v13 = (double)v11 - -1.0;
    *(_DWORD *)(this + 108928) = a3[3] + 3;
    v14 = *(_DWORD *)(this + 108928);
    *(float *)(this + 108972) = v13;
    *(_DWORD *)(this + 108932) = v7 + v12;
    *(float *)(this + 108976) = (float)v28;
    v15 = (double)(v12 - v7);
    *(_DWORD *)(this + 108936) = v14 + v8;
    *(float *)(this + 109008) = v15 - v13;
    *(float *)(this + 108992) = (float)(v11 + 1);
    *(float *)(this + 108996) = v15;
  }
  else if ( *(_DWORD *)(this + 108988) )
  {
    v16 = a3[2] + 3;
    *(_DWORD *)(this + 108876) = v16;
    *(_DWORD *)(this + 108880) = a3[1];
    v17 = *(_DWORD *)(this + 108880);
    *(_DWORD *)(this + 108884) = v16 + dword_100AB9F4;
    *(_DWORD *)(this + 108888) = v17 + dword_100AB9F8;
    *(_DWORD *)(this + 108892) = a3[2] + 3;
    v18 = (double)v16;
    *(_DWORD *)(this + 108896) = a3[3] - dword_100AB9C8;
    v19 = v16 + dword_100AB9C4;
    v20 = *(_DWORD *)(this + 108896);
    *(_DWORD *)(this + 108900) = v19;
    v21 = a3[3];
    *(float *)(this + 108972) = v18;
    *(_DWORD *)(this + 108904) = v21;
    v22 = *(_DWORD *)(this + 108888);
    v23 = (double)v22 - -1.0;
    *(float *)(this + 108976) = v23;
    v24 = (double)(v20 - v8);
    *(float *)(this + 109008) = v24 - v23;
    *(float *)(this + 109000) = (float)(v22 + 1);
    *(float *)(this + 109004) = v24;
  }
  v25 = *(float *)(this + 108976);
  v26 = (__int64)*(float *)(this + 108972);
  *(_DWORD *)(this + 108940) = v26;
  *(_DWORD *)(this + 108948) = v26 + v7;
  *(_DWORD *)(this + 108944) = (__int64)v25;
  *(_DWORD *)(this + 108952) = (__int64)v25 + v8;
  return 1;
}
// 100AB9C4: using guessed type int dword_100AB9C4;
// 100AB9C8: using guessed type int dword_100AB9C8;
// 100AB9EC: using guessed type int dword_100AB9EC;
// 100AB9F0: using guessed type int dword_100AB9F0;
// 100AB9F4: using guessed type int dword_100AB9F4;
// 100AB9F8: using guessed type int dword_100AB9F8;
