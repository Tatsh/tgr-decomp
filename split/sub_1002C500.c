//----- (1002C500) --------------------------------------------------------
int __usercall sub_1002C500@<eax>(double a1@<st0>)
{
  int v1; // esi
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // esi
  void *v7; // ecx
  int v8; // eax
  void *v9; // ecx
  void *v10; // ecx
  int v11; // eax
  void *v12; // ecx
  int v13; // eax
  int *v14; // eax
  int v15; // ecx
  void **v16; // eax
  _DWORD *v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  char *v21; // ecx
  _DWORD *v22; // ecx
  int v23; // edi
  void **v24; // eax
  int v25; // ecx
  char *v26; // esi
  char *v27; // edx
  _BYTE *v28; // edx
  void *v29; // ecx
  void *v30; // ecx
  int v31; // eax
  bool v32; // zf
  int v33; // eax
  void *v34; // ecx
  void *v35; // ecx
  int v36; // edi
  _DWORD *v37; // esi
  int v38; // ecx
  void *v39; // eax
  int v40; // ecx
  struct_dword_10ACED34 **v41; // eax
  struct_dword_10ACED34 *v42; // edx
  int v43; // edx
  int *v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // edi
  void (__cdecl **v48)(int); // esi
  int v49; // eax
  bool v50; // cc
  char *v51; // esi
  char *v52; // ebx
  char v53; // al
  _DWORD *v54; // ebp
  _WORD *v55; // edi
  char v56; // al
  unsigned __int16 v57; // ax
  char *v58; // ebp
  char *v59; // edi
  int v60; // eax
  LPCSTR v61; // eax
  LPCSTR v62; // eax
  int v63; // eax
  double v64; // st7
  int v65; // edx
  int v66; // edi
  char *v67; // esi
  int v68; // eax
  int v69; // edx
  void *v70; // ecx
  int v71; // eax
  int v72; // edi
  _DWORD *v73; // esi
  _DWORD *v74; // ecx
  int v75; // edx
  int *v76; // eax
  int v77; // edi
  int *v78; // esi
  LPCSTR v79; // eax
  int v80; // edi
  int *v81; // esi
  LPCSTR v82; // eax
  int v83; // edi
  char *v84; // esi
  __int16 v85; // dx
  char *v86; // eax
  int v87; // edi
  int v88; // esi
  int j; // edi
  int *v90; // eax
  int v91; // edx
  int v92; // edx
  int v93; // eax
  int v94; // esi
  _DWORD *v95; // edi
  int v96; // eax
  int v97; // esi
  char *v98; // edi
  int v99; // esi
  char *v100; // edi
  int v101; // esi
  char *v102; // edi
  int v103; // edi
  _DWORD *v104; // esi
  void *v105; // ecx
  void *v106; // ecx
  void *v107; // ecx
  int v108; // edx
  int *v109; // esi
  int v110; // eax
  int v111; // ebx
  int v112; // ecx
  float *v113; // edi
  double v114; // st7
  double v116; // st7
  unsigned __int8 v117; // c0
  unsigned __int8 v118; // c3
  int v119; // edi
  _DWORD *v120; // esi
  int *v121; // ebx
  void *v122; // ecx
  int v123; // edi
  int v124; // ebp
  int *v125; // esi
  void *v126; // ecx
  int v127; // ebx
  int v128; // ebp
  unsigned int k; // eax
  int v130; // ecx
  int v131; // edx
  char *v132; // ecx
  char *v133; // ecx
  int v134; // ebx
  _DWORD *v135; // ebp
  int v136; // eax
  int v137; // eax
  int v138; // edi
  int v139; // edx
  int **v140; // esi
  int v141; // ecx
  int v142; // eax
  int *v143; // esi
  double v144; // st7
  int v145; // ecx
  void **v146; // esi
  int v147; // edx
  int v148; // eax
  int v149; // edi
  int *v150; // esi
  int v151; // eax
  int v152; // ecx
  int v153; // edi
  int v154; // esi
  int *v155; // ebx
  int v156; // edx
  int v157; // ecx
  void **v158; // esi
  int v159; // ebx
  char *v160; // edx
  int v161; // ebp
  void **v162; // ebx
  int v163; // esi
  int v164; // edi
  int v165; // eax
  void **v166; // eax
  _DWORD *v167; // ecx
  int v168; // edx
  int v169; // eax
  int result; // eax
  int v171; // esi
  int v172; // eax
  unsigned int v173; // eax
  int v174; // ecx
  int v175; // [esp+0h] [ebp-48h]
  float v176; // [esp+0h] [ebp-48h]
  float v177; // [esp+0h] [ebp-48h]
  float v178; // [esp+0h] [ebp-48h]
  _DWORD *v179; // [esp+14h] [ebp-34h]
  int v180; // [esp+14h] [ebp-34h]
  int v181; // [esp+18h] [ebp-30h]
  int v182; // [esp+18h] [ebp-30h]
  float v183; // [esp+18h] [ebp-30h]
  int *v184; // [esp+18h] [ebp-30h]
  int v185; // [esp+1Ch] [ebp-2Ch]
  int i; // [esp+1Ch] [ebp-2Ch]
  int v187; // [esp+1Ch] [ebp-2Ch]
  int *v188; // [esp+20h] [ebp-28h]
  int v189; // [esp+20h] [ebp-28h]
  int v190; // [esp+20h] [ebp-28h]
  int v191; // [esp+20h] [ebp-28h]
  int v192; // [esp+20h] [ebp-28h]
  int v193[3]; // [esp+24h] [ebp-24h] BYREF
  int v194[3]; // [esp+30h] [ebp-18h] BYREF
  float v195[3]; // [esp+3Ch] [ebp-Ch] BYREF

  getTicks();
  v1 = dword_106909E8;
  v3 = v2;
  dword_106909E8 = v2;
  v4 = dword_100AA00C;
  v5 = v3 - v1;
  v6 = dword_100AA008;
  if ( dword_100AA00C < 0 )
  {
    v4 = 0;
    if ( dword_100AA008 > 0 )
    {
      memset32(dword_10680758, v5, dword_100AA008);
      v4 = v6;
    }
  }
  v7 = (void *)++dword_1068093C;
  if ( dword_1068093C )
    dword_106909D4 += v5;
  else
    dword_106909D4 = 0;
  v8 = v4 + 1;
  dword_100AA00C = v8;
  if ( v8 >= v6 )
  {
    v8 = 0;
    dword_100AA00C = 0;
  }
  dword_10680758[v8] = v5;
  if ( dword_106909EC )
  {
    if ( g_NetworkPlay )
    {
      sub_10005D90();
      if ( v71 >= 0 && !dword_106909E0 )
        sub_1002F230(v71);
    }
    goto LABEL_177;
  }
  dword_106C65F4 = 1;
  debugPrint(v7);
  sub_1000F620();
  if ( !dword_106909E0 )
  {
    debugPrint(v9);
    debugPrint(v10);
    dword_10B501CC();
    dword_118AA0D0();
    off_100B8C94();
    v11 = 12;
    if ( g_GameMode != 5 )
      v11 = g_chosenTrack;
    sub_10037A90(v11);
    sub_10074DD0();
    dword_10B501C8();
    sub_1002B950();
  }
  sub_10032873(dword_106C1628);
  debugPrint(v12);
  sub_10032873(dword_106C1628);
  sub_1003BD40(123);
  dword_106909E4 = 0;
  if ( g_GameMode != 1 && g_GameMode != 6 && g_GameMode != 2 )
    dword_100BD3E0 = 3;
  dword_117554E8 = 0;
  switch ( g_GameMode )
  {
    case 0:
      dword_100B36F8 = 20;
      dword_100B36FC = 3;
      sub_10076AE0(dword_10ACDEA8, g_chosenCar);
      goto LABEL_31;
    case 1:
      dword_100B36F8 = 2;
      dword_100B36FC = 2;
      sub_10076AE0(dword_10ACDEA8, g_chosenCar);
      sub_10076AE0(dword_10AD0A10, g_chosenCar);
      dword_10AD33C4 = 0;
      goto LABEL_31;
    case 2:
      sub_10076AE0(dword_10ACDEA8, g_chosenCar);
      dword_106909E4 = 0;
      dword_10680610 = 1;
      dword_100B36F8 = dword_100B4050 + 1;
      dword_100B36FC = dword_100B4050 + 1;
      v18 = 1389 * dword_100B4050;
      *((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17) = &unk_117554F0;
      debugPrint((void *)v18);
      qmemcpy(*((void **)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17), &dword_10680738, ElementCount);
      v19 = 2778 * dword_100B4050;
      v20 = *(char *)(*((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17) + 1);
      dword_10AD084C[v19] = v20;
      sub_10076AE0(&dword_10ACDEA8[v19], v20);
      sub_1006ABB0();
      v21 = (char *)*((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17);
      if ( *v21 == g_chosenTrack && (v21 = (char *)v21[7], v21 == (char *)g_ChosenWeather) )
      {
        debugPrint(v21);
        v22 = *(&dword_10AD0868 + 2778 * dword_100B4050);
        v22[18] = 8;
        debugPrint(v22);
        *((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 19) = ElementCount;
      }
      else
      {
        debugPrint(v21);
        *((_DWORD *)*(&dword_10AD0868 + 2778 * dword_100B4050) + 17) = 0;
        dword_100B36FC = 1;
        dword_100B36F8 = 1;
      }
      v23 = 0;
      if ( dword_100B4050 > 0 )
      {
        v24 = &dword_10AD0868;
        v25 = 44;
        v26 = (char *)&unk_117644F0;
        do
        {
          v27 = (char *)*v24;
          ++v23;
          v24 += 2778;
          *(_DWORD *)&v27[v25] = v26;
          v26 += 61440;
          v28 = *(_BYTE **)((char *)*(v24 - 2778) + v25);
          v25 += 4;
          *v28 = g_chosenTrack;
          *(_BYTE *)(*(_DWORD *)((char *)*(v24 - 2778) + v25 - 4) + 1) = *((_BYTE *)v24 - 11136);
          *(_BYTE *)(*(_DWORD *)((char *)*(v24 - 2778) + v25 - 4) + 2) = *((_BYTE *)*(v24 - 4519) + 248);
          *(_BYTE *)(*(_DWORD *)((char *)*(v24 - 2778) + v25 - 4) + 3) = *((_BYTE *)*(v24 - 4519) + 252);
          *(_BYTE *)(*(_DWORD *)((char *)*(v24 - 2778) + v25 - 4) + 4) = *((_BYTE *)*(v24 - 4519) + 256);
          *(_BYTE *)(*(_DWORD *)((char *)*(v24 - 2778) + v25 - 4) + 5) = *((_BYTE *)*(v24 - 4519) + 260);
          *(_BYTE *)(*(_DWORD *)((char *)*(v24 - 2778) + v25 - 4) + 6) = *((_BYTE *)*(v24 - 4519) + 264);
          *(_BYTE *)(*(_DWORD *)((char *)*(v24 - 2778) + v25 - 4) + 7) = g_ChosenWeather;
          *(_DWORD *)((char *)*(v24 - 2778) + v25 + 4) = 8;
          *(_DWORD *)((char *)*(v24 - 2778) + v25 + 12) = 56924;
        }
        while ( v23 < dword_100B4050 );
      }
      goto LABEL_61;
    case 4:
      dword_104BBE08 = 1;
      dword_100B4050 = 1;
      dword_100B36F8 = 1;
      dword_100B36FC = 1;
      dword_106909E4 = 0;
      dword_10ACED30 = 0;
      *((_DWORD *)dword_10AD0868 + 17) = &dword_10680738;
      if ( dword_106805B8 )
      {
        if ( dword_106805B8 == 1 )
        {
          sub_10070AF0(aRallycreditsDa, 0);
        }
        else
        {
          if ( dword_106805B8 != 2 )
            goto LABEL_51;
          sub_1002C3C0();
          sub_10070AF0(FileName, 0);
        }
      }
      else
      {
        if ( dword_106909F4 )
          sub_10070AF0(aRallyintro2Dat, 0);
        else
          sub_10070AF0(aRallyintro1Dat, 0);
        if ( ++dword_106909F4 > 1 )
          dword_106909F4 = 0;
      }
      sub_1006ABB0();
      dword_10680938 = 0;
LABEL_51:
      *((_DWORD *)dword_10AD0868 + 11) = 0;
      *((_DWORD *)dword_10AD0868 + 12) = 0;
      byte_10AD0854[0] = -1;
      byte_10AD0855[0] = -1;
      byte_10AD0856[0] = -1;
      g_chosenTrack = **((char **)dword_10AD0868 + 17);
      dword_10AD084C[0] = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 1);
      sub_10076AE0(dword_10ACDEA8, dword_10AD084C[0]);
      dword_10ACED40 = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 2);
      dword_10ACED44 = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 3);
      dword_10ACED38 = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 4);
      dword_10ACED3C[0] = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 5);
      *((_BYTE *)dword_10AD0868 + 37) = *(_BYTE *)(*((_DWORD *)dword_10AD0868 + 17) + 6);
      g_ChosenWeather = *(char *)(*((_DWORD *)dword_10AD0868 + 17) + 7);
      dword_104BBE08 = g_ChosenWeather;
LABEL_61:
      if ( g_GameMode == 5 )
        dword_106C3364 = 0;
      else
        dword_106C3364 = ((unsigned int)stringOffsets[g_chosenTrack][1] >> 4) & 1;
      sub_10069740(dword_104BBE08);
      if ( g_GameMode != 4 && !dword_106909E0 )
      {
        debugPrint(v29);
        debugPrint(v30);
      }
      MakeEnemyCarColorPanels();
      v31 = dword_106909E0;
      v32 = dword_106909E0 == 0;
      if ( !dword_106909E0 )
      {
        v33 = 12;
        if ( g_GameMode != 5 )
          v33 = g_chosenTrack;
        sub_10037B10(v33);
        v31 = dword_106909E0;
        v32 = dword_106909E0 == 0;
        if ( !dword_106909E0 )
        {
          dword_10680624 = 0;
          dword_1068061C = 0;
          dword_10680618 = 0;
          dword_10680638 = 0;
          dword_10680634 = 0;
          dword_1068063C = 0;
          dword_10680640 = 0;
          dword_10680628 = 0;
          dword_1068062C = 0;
          debugPrint(v34);
          v36 = 0;
          dword_10680940 = 0;
          if ( dword_106C7E6C > 0 )
          {
            v37 = &unk_106C7DAC;
            do
            {
              switch ( *((_BYTE *)v37 + 8) )
              {
                case 3:
                  dword_10680618 = (void *)*v37;
                  goto LABEL_79;
                case 4:
                  dword_1068062C = v37[1];
                  dword_10680634 = *v37;
                  goto LABEL_79;
                case 5:
                  dword_10680638 = *v37;
                  goto LABEL_79;
                case 6:
                  dword_1068061C = *v37;
                  goto LABEL_79;
                case 7:
                  v38 = dword_10680940;
                  dword_106805D0[dword_10680940] = *v37;
                  v35 = (void *)(v38 + 1);
                  dword_10680940 = (int)v35;
LABEL_79:
                  debugPrint(v35);
                  break;
                default:
                  break;
              }
              ++v36;
              v37 += 3;
            }
            while ( v36 < dword_106C7E6C );
          }
          if ( dword_1068061C && dword_10680634 && dword_10680638 )
          {
            v39 = dword_10680618;
          }
          else
          {
            v39 = 0;
            dword_10680618 = 0;
          }
          if ( v39 )
          {
            v194[0] = 1065353216;
            v194[1] = 0;
            v194[2] = 0;
            sub_1003B1F0((float *)v194, (float *)v194, (float *)(dword_106C7CA8 + 84 * (_DWORD)v39));
            flt_10680630 = sub_1003B170((float *)v194);
          }
          v31 = dword_106909E0;
          v32 = dword_106909E0 == 0;
          dword_10680620 = dword_100BD3E0 - 1;
        }
      }
      dword_100AA8B4 = 1;
      if ( v32 )
        dword_100AA8B4 = dword_100B4050;
      dword_106C1638 = v31 != 0 ? dword_10680668 : 0;
      dword_106C1690 = dword_106C1638 == 0;
      if ( g_GameMode == 4 )
      {
        dword_10AD05DC[0] = (int)&unk_10AD0628;
        dword_10AF9BB0 = 180;
        goto LABEL_108;
      }
      v40 = 0;
      if ( dword_100B4050 <= 0 )
        goto LABEL_102;
      v41 = &dword_10ACED34;
      break;
    case 5:
      dword_100B4050 = 1;
      dword_100B36F8 = 1;
      dword_100B36FC = 1;
      dword_106909E4 = 0;
      dword_106909E0 = 0;
      dword_10ACED30 = 0;
      dword_10AD05DC[0] = (int)&unk_10AD0628;
      dword_10AF9BB0 = 0;
      goto LABEL_61;
    case 6:
      if ( dword_106909E0 )
        goto LABEL_32;
      dword_100B4050 = 1;
      if ( dword_1022AF1C )
      {
        dword_100B36F8 = 0;
        dword_100B36FC = 0;
      }
      else
      {
        dword_100B36F8 = 1;
        dword_100B36FC = 1;
      }
      sub_10076AE0(dword_10ACDEA8, g_chosenCar);
      if ( g_NetworkPlay )
      {
        sub_10005960();
        atomic_sub_10006090();
        sub_10004A90();
        dword_10ACDFEC[0] = sub_10005D30();
        strcpy(byte_10ACDFF0, dplay4aShortName);
        sub_10005EE0(dword_10ACDFEC[0], dplay4aShortName);
      }
      while ( dword_100B36FC < (unsigned int)sub_1000C670() )
      {
        v13 = sub_10005D40();
        if ( v13 >= 0 )
          sub_1002F130(v13);
      }
LABEL_31:
      if ( dword_106909E0 )
      {
LABEL_32:
        sub_10067960((int)&unk_1020AB98 - 89992 * dword_10680668);
        v14 = dword_118AC730;
        do
        {
          v14[1] = 0;
          *v14 = 0;
          v14 += 6;
        }
        while ( (int)v14 < (int)&unk_118AC898 );
      }
      else
      {
        v15 = 0;
        if ( dword_100B4050 > 0 )
        {
          v16 = &dword_10AD0868;
          do
          {
            v17 = *v16;
            ++v15;
            v16 += 2778;
            v17[17] = 0;
            *((_DWORD *)*(v16 - 2778) + 11) = 0;
            *((_DWORD *)*(v16 - 2778) + 12) = 0;
          }
          while ( v15 < dword_100B4050 );
        }
      }
      dword_106909E4 = dword_106909E0 == 0;
      goto LABEL_61;
    default:
      sub_10076AE0(dword_10ACDEA8, g_chosenCar);
      dword_106909E4 = 0;
      dword_100B36F8 = dword_100B4050;
      dword_100B36FC = dword_100B4050;
      goto LABEL_61;
  }
  do
  {
    v41[4] = (struct_dword_10ACED34 *)(*v41)->transmissionType;
    v41[2] = (struct_dword_10ACED34 *)(*v41)->suspensionType;
    v41[1] = (struct_dword_10ACED34 *)(*v41)->ultraCarHeader;
    v41[3] = (struct_dword_10ACED34 *)(*v41)->handlingType;
    if ( g_ReadJoystick == 1 || g_ReadJoystick == 2 )
    {
      v42 = v41[1741];
    }
    else
    {
      v42 = v41[1741];
      if ( g_ReadJoystick != 3 )
      {
        v42->gap0[37] = 2;
        goto LABEL_101;
      }
    }
    v42->gap0[37] = 5;
LABEL_101:
    ++v40;
    v41 += 2778;
  }
  while ( v40 < dword_100B4050 );
LABEL_102:
  if ( g_GameMode == 2 && (v43 = *(_DWORD *)(dword_10AD33D0 + 68)) != 0 )
  {
    dword_10AD18A8 = *(char *)(v43 + 2);
    dword_10AD18AC = *(char *)(*(_DWORD *)(dword_10AD33D0 + 68) + 3);
    dword_10AD18A0 = *(char *)(*(_DWORD *)(dword_10AD33D0 + 68) + 4);
    dword_10AD18A4 = *(char *)(*(_DWORD *)(dword_10AD33D0 + 68) + 5);
    *(_BYTE *)(dword_10AD33D0 + 37) = *(_BYTE *)(*(_DWORD *)(dword_10AD33D0 + 68) + 6);
  }
  else if ( v40 < dword_100B36FC )
  {
    v44 = &dword_10ACED3C[2778 * v40];
    do
    {
      v44[2] = 1;
      *v44 = 1;
      *(v44 - 1) = 2;
      v44[1] = 0;
      v45 = v44[1739];
      ++v40;
      v44 += 2778;
      *(_BYTE *)(v45 + 37) = 0;
    }
    while ( v40 < dword_100B36FC );
  }
LABEL_108:
  if ( !dword_106909E0 )
  {
    v46 = dword_100B36FC;
    v47 = 0;
    dword_106909B8 = 0;
    if ( dword_100B36FC > 0 )
    {
      v48 = (void (__cdecl **)(int))&unk_10ACEDB0;
      while ( 1 )
      {
        v49 = g_GameMode;
        v50 = v47 < dword_100B4050;
        v48[1706] = (void (__cdecl *)(int))1065353216;
        if ( v50 )
          break;
        if ( v49 != 2 )
        {
          if ( v49 == 6 )
          {
            *v48 = (void (__cdecl *)(int))sub_1002C430;
          }
          else
          {
            sub_10063420(v48 - 962);
            *v48 = sub_10065620;
          }
          goto LABEL_118;
        }
        *v48 = sub_10063FE0;
        *((_BYTE *)v48 + 6823) = 2;
        v48[1706] = (void (__cdecl *)(int))1052770304;
LABEL_119:
        if ( !*(v48 - 32) )
          sub_10076A70((unsigned __int8 *)v48 - 3848, v47, (int)v48[1704]);
        sub_10065740((int)(v48 - 962));
        v46 = dword_100B36FC;
        v48[29] = 0;
        v48[61] = 0;
        v48[63] = 0;
        ++v47;
        v48 += 2778;
        if ( v47 >= v46 )
          goto LABEL_122;
      }
      *v48 = sub_10063FE0;
LABEL_118:
      *((_BYTE *)v48 + 6823) = 0;
      goto LABEL_119;
    }
LABEL_122:
    if ( !v46 )
    {
      memset(&unk_100C12A0, 0, 0x15F88u);
      sub_10076A40(dword_10ACDEA8, 0);
      sub_10065740((int)dword_10ACDEA8);
      sub_100019D0((#479 *)dword_10ACDEA8);
      flt_10AD061C = flt_10AD061C - -1.0;
    }
    v181 = 0;
    if ( dword_100AA8B4 > 0 )
    {
      v188 = dword_100A73A8;
      v179 = &unk_106C163C;
      do
      {
        v51 = (char *)&unk_100C12A0 + 89992 * *(v179 - 1);
        v52 = v51 + 768;
        if ( dword_104BBE08 != 4 )
          v52 = v51 + 256;
        *v179 = dword_118AA0AC(v51 + 1280, v52, v51[228], v51[229], v51[228], 1, 2, 0, 0, 1, 1, 0, 0, 0, 0);
        v53 = v51[219];
        if ( v53 == 1 || v53 == 2 )
        {
          v54 = v179 + 1;
          dword_118AA09C = 1;
          v55 = v52 + 510;
          v185 = 15;
          do
          {
            v56 = v51[219];
            if ( v56 == 1 )
            {
              v57 = *v55 & 0x3000;
              HIBYTE(v57) |= 8u;
              *v55 = (unsigned __int8)((unsigned __int16)((32 * (*v55 & 0xC6)) | (v57 >> 11)) >> 8);
            }
            else if ( v56 == 2 )
            {
              *v55 &= 0xFEFFu;
            }
            *v54++ = dword_118AA0AC(v51 + 1280, v52, v51[228], v51[229], v51[228], 1, 2, 0, 0, 1, 1, 0, 0, 0, 0);
            --v55;
            --v185;
          }
          while ( v185 );
          dword_118AA09C = 0;
        }
        v58 = v51 + 1280;
        v179[16] = dword_118AA0AC(
                     &v51[v51[229] * v51[228] + 1280],
                     v52,
                     v51[232],
                     v51[233],
                     v51[232],
                     1,
                     2,
                     0,
                     0,
                     1,
                     1,
                     0,
                     0,
                     1,
                     0);
        v59 = &v51[-(v51[233] * v51[232] * (v51[216] + 2)) + 0x8000];
        memcpy(v59, &v51[v51[229] * v51[228] + 1280], v51[233] * v51[232] * (v51[216] + 2));
        for ( i = 0; i < v51[216] + 2; ++i )
        {
          v60 = dword_118AA0A8(v58, v59, v52, v51[232], v51[233], v51[232], 1, 2);
          v58 += v60;
          *((_DWORD *)v51 + 63) = v60;
          if ( v58 > v59 )
          {
            v61 = getCaptionString(0x12Cu);
            sub_10008CF0((int)v61);
          }
          v59 += v51[233] * v51[232];
          if ( v58 - v51 > 0x8000 )
          {
            v62 = getCaptionString(0x12Du);
            sub_10008CF0((int)v62);
          }
        }
        *v188++ = -1;
        ++v181;
        v179 += 22;
      }
      while ( v181 < dword_100AA8B4 );
    }
  }
  if ( dword_106909E0 )
    v63 = 4;
  else
    v63 = g_GameMode != 5 ? 0 : 4;
  v64 = flt_100AA22C[2 * v63];
  v65 = dword_100AA228[2 * v63];
  dword_106805A8 = v63;
  flt_106806D8 = v64;
  dword_10680750 = v65;
  if ( !dword_106909E0 )
  {
    v66 = 0;
    dword_118AB470 = 0;
    if ( dword_100B36F8 > 0 )
    {
      v67 = (char *)&unk_10ACD498;
      do
      {
        sub_100662A0((size_t)v67);
        ++v66;
        v67 += 128;
      }
      while ( v66 < dword_100B36F8 );
    }
  }
  sub_100697C0(dword_104BBE08);
  if ( !dword_106C661C && (!g_chosenTrack || g_chosenTrack == 6) )
    dword_10680618 = 0;
  sub_1002B130(1.0, 0.2);
  sub_1002B1C0(1.0, 0.2);
  sub_1002B220(1.0, 0.2);
  dword_106909EC = 1;
  if ( !dword_106909E0 )
  {
    C = (unsigned int)&unk_10680950;
    sub_10036BD0((int)&unk_10680950, (int)aMiscModellight);
    _ismbbkprint(C);
  }
  sub_1003A4D0();
  sub_1006AE20();
  dword_106909B4 = 0;
  dword_106909F0 = 0;
  dword_106806E0 = -1;
  dword_106806DC = 0;
  dword_106805C0 = 0;
  dword_106C6648 = 1;
  if ( !dword_106909E0 )
  {
    _cfltcvt_init();
    sub_10067DC0();
  }
  dword_106C65F4 = 0;
  if ( dword_106909E0 )
  {
    sub_1006ABB0();
  }
  else
  {
    sub_1006AA50();
    v68 = g_GameMode;
    if ( g_GameMode == 4 )
    {
      __setargv_0();
      v68 = g_GameMode;
    }
    if ( byte_100BBAD8 )
    {
      if ( v68 == 4 && dword_106805B8 == 2 )
      {
        pm_sub_100027C0(12);
      }
      else if ( v68 == 4 && dword_106805B8 == 1 )
      {
        pm_sub_100027C0(13);
      }
      else
      {
        v175 = pm_sub_100028D0();
        pm_sub_100027C0(v175);
      }
      LOBYTE(v69) = byte_100BBAD8;
      pm_sub_100029F0(v69);
    }
  }
  sub_10016910();
  debugPrint(v70);
  a1 = sub_1002C4D0();
LABEL_177:
  word_11782BC0 = 0;
  if ( dword_10680750 == 4 )
  {
    v72 = 0;
    if ( dword_100B4050 > 0 )
    {
      v73 = dword_10ACDEA8;
      do
      {
        sub_100679C0(v73);
        ++v72;
        v73 += 2778;
      }
      while ( v72 < dword_100B4050 );
    }
  }
  if ( g_GameMode != 4 && !dword_106909B4 )
    dword_117554E8 ^= 1u;
  sub_10034AD5();
  dword_106909B0 = 0;
  v180 = dword_106909B4;
  dword_106909D0 = 0;
  if ( dword_10680750 < 3 )
  {
    if ( g_usingGameMode4 )
    {
      v75 = dword_100B4050;
      if ( dword_100B4050 > 0 )
      {
        v76 = &dword_10ACEEB0;
        v74 = (_DWORD *)dword_100B4050;
        do
        {
          *(v76 - 1) = 0;
          *v76 = 1008981770;
          v76 += 2778;
          v74 = (_DWORD *)((char *)v74 - 1);
        }
        while ( v74 );
      }
    }
    else if ( g_NetworkPlay && dword_118ABDC0 )
    {
      v75 = dword_100B4050;
      v77 = 0;
      if ( dword_100B4050 > 0 )
      {
        v78 = &dword_10ACEEB0;
        do
        {
          v79 = getCaptionString(0xEDu);
          v75 = dword_100B4050;
          *(v78 - 1) = (int)v79;
          *v78 = 1008981770;
          ++v77;
          v78 += 2778;
        }
        while ( v77 < v75 );
      }
    }
    else
    {
      v75 = dword_100B4050;
      v80 = 0;
      if ( dword_100B4050 > 0 )
      {
        v81 = &dword_10ACEEB0;
        do
        {
          v82 = getCaptionString(0xEEu);
          v75 = dword_100B4050;
          *(v81 - 1) = (int)v82;
          *v81 = 1008981770;
          ++v80;
          v81 += 2778;
        }
        while ( v80 < v75 );
      }
    }
    v83 = 0;
    dword_106909D0 = 1;
    if ( dword_100B36F8 > 0 )
    {
      v84 = byte_10ACD500;
      while ( 1 )
      {
        *(_DWORD *)v84 |= 1u;
        v74 = (_DWORD *)*((_DWORD *)v84 - 2);
        if ( v74 && v74[80] < v75 )
        {
          if ( g_GameMode == 1 || g_GameMode == 6 )
          {
            v85 = dword_104BBE08 - 1;
            if ( (__int16)(dword_104BBE08 - 1) > 2 || v85 < 0 )
              v85 = 0;
            v74[1020] = (&stringOffsets[g_chosenTrack][21 * v74[921]])[7 * v85 + 17];
          }
          v74[1024] = 1065353216;
          if ( dword_10680750 )
          {
            if ( dword_10680750 == 2 )
            {
              v74 = (_DWORD *)dword_106909CC;
              dword_106909B0 = 1;
              a1 = flt_100AA1F8[dword_106909CC];
              if ( a1 > flt_106806D8 )
              {
                if ( ++dword_106909CC == 4 )
                  sub_10067D90();
                else
                  sub_10067D80();
              }
            }
          }
          else
          {
            dword_106909B0 = -1;
            dword_106909CC = 0;
          }
        }
        ++v83;
        v84 += 128;
        if ( v83 >= dword_100B36F8 )
          break;
        v75 = dword_100B4050;
      }
    }
    dword_106805BC = 0;
    goto LABEL_263;
  }
  switch ( dword_10680750 )
  {
    case 3:
      v74 = (_DWORD *)dword_100B36F8;
      dword_106909B0 = 1;
      dword_106909D0 = 1;
      if ( dword_100B36F8 > 0 )
      {
        v86 = byte_10ACD500;
        do
        {
          v87 = *(_DWORD *)v86;
          v86 += 128;
          v74 = (_DWORD *)((char *)v74 - 1);
          *((_DWORD *)v86 - 32) = v87 & 0xFFFFFFFE;
        }
        while ( v74 );
      }
      a1 = (flt_100AA22C[2 * dword_106805A8] - flt_106806D8) / flt_100AA22C[2 * dword_106805A8];
      *(float *)&dword_106805BC = a1 * a1 * 15.0;
LABEL_263:
      if ( !dword_106909B4 )
      {
        a1 = flt_106806D8 - *(float *)&dword_106C2CFC;
        flt_106806D8 = a1;
        if ( a1 < 0.0 )
        {
LABEL_265:
          if ( g_usingGameMode4 )
          {
            ++dword_106805A8;
            a1 = flt_100AA22C[2 * dword_106805A8];
            v74 = (_DWORD *)dword_100AA228[2 * dword_106805A8];
            flt_106806D8 = flt_100AA22C[2 * dword_106805A8];
            dword_10680750 = (int)v74;
          }
        }
      }
      goto LABEL_272;
    case 4:
      v88 = g_GameMode;
      v182 = 1;
      if ( g_GameMode == 4 )
      {
        if ( dword_106805B8 == 2 )
        {
          a1 = flt_10ACEE94;
          if ( flt_10ACEE94 <= 140.0 )
            goto LABEL_230;
LABEL_232:
          if ( !sub_1002B2A0() )
          {
            sub_1002B130(0.0, 0.2);
            sub_1002B1C0(0.0, 0.2);
            dword_106909F0 = 1;
            dword_106909E0 = 0;
            dword_106909E4 = 0;
            v182 = 0;
          }
          v88 = g_GameMode;
LABEL_235:
          v74 = (_DWORD *)dword_100B4050;
          for ( j = 0; j < (int)v74; ++j )
          {
            if ( (byte_10ACD500[128 * j] & 2) != 0 )
            {
              if ( v88 == 2 && *((_DWORD *)*(&dword_10AD0868 + 2778 * j) + j + 11) )
              {
                if ( !j && (!dword_10ACEEA0 || (char)dword_10680738 != g_chosenTrack || (int)ElementCount <= 8) )
                {
                  debugPrint((void *)(*((_DWORD *)dword_10AD0868 + 13) < (int)ElementCount));
                  ElementCount = 16;
                  v90 = (int *)*((_DWORD *)dword_10AD0868 + 11);
                  dword_10680738 = *v90;
                  v91 = v90[1];
                  dword_10680740 = 0;
                  dword_1068073C = v91;
                  dword_10680744 = 0;
                  dword_10ACEEA4 = (int)getCaptionString(0xEFu);
                  dword_10ACEEA8 = 1065353216;
                  sub_100020D0(byte_10ACEEB4, flt_10ACEE94);
                  dword_10ACEEAC = (int)byte_10ACEEB4;
                  dword_10ACEEB0 = 1065353216;
                  dword_10680610 = 1;
                }
                *((_DWORD *)*(&dword_10AD0868 + 2778 * j) + j + 11) = 0;
                v88 = g_GameMode;
                v74 = (_DWORD *)dword_100B4050;
              }
              else if ( v88 == 1 || v88 == 6 )
              {
                v92 = 0;
                if ( (int)v74 > 0 )
                {
                  v93 = 60;
                  do
                  {
                    ++v92;
                    *(_DWORD *)((char *)*(&dword_10AD0868 + 2778 * j) + v93) = *(_DWORD *)((char *)*(&dword_10AD0868 + 2778 * j)
                                                                                         + v93
                                                                                         - 8);
                    v74 = (_DWORD *)dword_100B4050;
                    v93 += 4;
                  }
                  while ( v92 < dword_100B4050 );
                  v88 = g_GameMode;
                }
              }
            }
            else
            {
              v182 = 0;
            }
          }
          if ( v182 )
            goto LABEL_265;
          goto LABEL_272;
        }
        a1 = flt_10ACEE94;
        if ( flt_10ACEE94 > 39.599998 )
          goto LABEL_232;
      }
LABEL_230:
      if ( g_GameMode == 5 )
      {
        a1 = flt_10ACEE94;
        if ( flt_10ACEE94 > 16.0 )
          goto LABEL_232;
      }
      goto LABEL_235;
    case 5:
      if ( (g_GameMode == 2 || g_GameMode == 1 || !g_GameMode || g_GameMode == 6) && !dword_106909E0 )
        sub_1002F2A0();
      goto LABEL_265;
    case 6:
      goto LABEL_263;
  }
  if ( dword_10680750 == 7 && !dword_106909F0 )
  {
    sub_1002B1C0(0.0, 0.2);
    if ( !dword_106909E4 )
      sub_1002B220(0.0, 0.2);
    sub_1002B130(0.0, 0.2);
    dword_106909F0 = 1;
  }
LABEL_272:
  debugPrint(v74);
  sub_100633E0();
  v94 = 0;
  if ( dword_100B36FC > 0 )
  {
    v95 = dword_10ACDEA8;
    do
    {
      sub_100683C0(v95);
      ++v94;
      v95 += 2778;
    }
    while ( v94 < dword_100B36FC );
  }
  v96 = dword_100B36F8;
  v97 = 0;
  if ( dword_100B36F8 > 0 )
  {
    v98 = (char *)&unk_10ACD498;
    do
    {
      sub_10068EF0((int)v98);
      v96 = dword_100B36F8;
      ++v97;
      v98 += 128;
    }
    while ( v97 < dword_100B36F8 );
  }
  if ( g_NetworkPlay || dword_106909E0 )
  {
    v99 = 0;
    if ( v96 > 0 )
    {
      v100 = (char *)&unk_10ACD498;
      do
      {
        sub_10069330((int)v100, a1);
        v96 = dword_100B36F8;
        ++v99;
        v100 += 128;
      }
      while ( v99 < dword_100B36F8 );
    }
  }
  v101 = 0;
  if ( v96 > 0 )
  {
    v102 = (char *)&unk_10ACD498;
    do
    {
      sub_10069370((int)v102);
      ++v101;
      v102 += 128;
    }
    while ( v101 < dword_100B36F8 );
  }
  if ( !g_GameMode )
  {
    v103 = 0;
    if ( dword_100B4050 > 0 )
    {
      v104 = dword_10ACDEA8;
      do
      {
        sub_10066650((int)v104);
        ++v103;
        v104 += 2778;
      }
      while ( v103 < dword_100B4050 );
    }
  }
  sub_10066510();
  if ( !dword_106909B4 && dword_106909E0 != 2 )
  {
    debugPrint(v105);
    sub_1003A530();
    debugPrint(v106);
    sub_100196D0(v107);
    if ( dword_10680618
      && !dword_10680624
      && (!dword_106C6624 && !dword_106C6620 && !dword_106C661C || g_chosenTrack != 2 && g_chosenTrack != 8)
      && dword_100B4050 > 0 )
    {
      v108 = 0;
      v109 = (int *)&unk_10AD07F4;
      v189 = dword_100B4050;
      do
      {
        v110 = 0;
        if ( *v109 > 0 )
        {
          while ( *(v109 - 1641) != dword_10680620 || (unsigned __int16)word_10AD07B4[v110 + v108] != dword_1068061C )
          {
            if ( ++v110 >= *v109 )
              goto LABEL_307;
          }
          dword_10680624 = 1;
        }
LABEL_307:
        v108 += 5556;
        v109 += 2778;
        --v189;
      }
      while ( v189 );
    }
    v111 = 0;
    if ( dword_106C7E6C > 0 )
    {
      v112 = dword_10680628;
      v113 = (float *)&unk_106C7DAC;
      do
      {
        switch ( *((_BYTE *)v113 + 8) )
        {
          case 0:
            sub_10030EE0((int)flt_106C08E0, v113[1], 0.0, 0.0, 1.0);
            goto LABEL_314;
          case 1:
            sub_10030EE0((int)flt_106C08E0, v113[1], 1.0, 0.0, 0.0);
            goto LABEL_314;
          case 2:
            sub_10030EE0((int)flt_106C08E0, v113[1], 0.0, 1.0, 0.0);
LABEL_314:
            sub_100306C0(
              flt_106C08E0,
              (float *)(dword_106C7CA8 + 84 * *(_DWORD *)v113),
              (float *)(dword_106C7CA8 + 84 * *(_DWORD *)v113));
            *(_WORD *)(dword_106C7CA8 + 84 * *(_DWORD *)v113 + 76) &= 0xDFFFu;
            goto LABEL_337;
          case 3:
            if ( !dword_10680618 || !dword_10680624 )
              goto LABEL_338;
            if ( g_chosenTrack == 1 || g_chosenTrack == 7 )
              v114 = *(float *)&dword_106C2CFC * -18.0;
            else
              v114 = *(float *)&dword_106C2CFC * -50.0;
            *(float *)&dword_1068063C = *(float *)&dword_1068063C - v114;
            if ( *(float *)&dword_1068063C <= (double)*(float *)&dword_10680640 )
              goto LABEL_332;
            break;
          default:
            goto LABEL_338;
        }
        while ( 1 )
        {
          dword_10680628 = ++v112;
          *(float *)&dword_1068063C = *(float *)&dword_1068063C - *(float *)&dword_10680640;
          if ( v112 >= dword_1068062C )
            break;
          sub_1003B050(
            (float *)v194,
            (float *)(dword_10680634 + 12 * v112 - 12),
            (float *)(dword_10680638 + 12 * v112 - 12));
          sub_1003B050(
            (float *)v193,
            (float *)(12 * dword_10680628 + dword_10680634),
            (float *)(12 * dword_10680628 + dword_10680638));
          *(float *)&dword_10680640 = sub_1003B0E0((float *)v194, (float *)v193);
          sub_1003AEE0((float *)&dword_10680650, (float *)v193, (float *)v194);
          sub_1003AE50((float *)&dword_10680650);
          v112 = dword_10680628;
          if ( dword_10680628 >= 2 )
          {
            sub_1003B050(
              v195,
              (float *)(12 * (dword_10680628 - 2) + dword_10680634),
              (float *)(12 * (dword_10680628 - 2) + dword_10680638));
            sub_1003AEE0((float *)&dword_10680644, (float *)v194, v195);
            sub_1003AE50((float *)&dword_10680644);
            v112 = dword_10680628;
          }
          else
          {
            dword_10680644 = dword_10680650;
            dword_10680648 = dword_10680654;
            dword_1068064C = dword_10680658;
          }
          if ( v112 + 1 == dword_1068062C )
          {
            dword_1068065C = dword_10680650;
            dword_10680660 = dword_10680654;
            dword_10680664 = dword_10680658;
          }
          else
          {
            sub_1003B050(v195, (float *)(12 * (v112 + 1) + dword_10680634), (float *)(12 * (v112 + 1) + dword_10680638));
            sub_1003AEE0((float *)&dword_1068065C, v195, (float *)v193);
            sub_1003AE50((float *)&dword_1068065C);
            v112 = dword_10680628;
          }
          if ( *(float *)&dword_1068063C <= (double)*(float *)&dword_10680640 )
            goto LABEL_332;
        }
        dword_10680618 = 0;
LABEL_332:
        if ( dword_10680618 )
        {
          v183 = *(float *)&dword_1068063C / *(float *)&dword_10680640;
          sub_1003AFA0((int)v194, dword_10680634 + 12 * v112, dword_10680634 + 12 * v112 - 12, v183);
          sub_1003AFA0((int)v193, dword_10680638 + 12 * dword_10680628, dword_10680638 + 12 * dword_10680628 - 12, v183);
          sub_1003B050((float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 48), (float *)v194, (float *)v193);
          v116 = v183;
          if ( v117 | v118 )
          {
            v177 = v116 - -0.5;
            sub_1003AFA0(dword_106C7CA8 + 84 * (_DWORD)dword_10680618, (int)&dword_10680650, (int)&dword_10680644, v177);
          }
          else
          {
            v176 = v116 - 0.5;
            sub_1003AFA0(dword_106C7CA8 + 84 * (_DWORD)dword_10680618, (int)&dword_1068065C, (int)&dword_10680650, v176);
          }
          sub_1003AE50((float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618));
          sub_1003AEE0((float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 32), (float *)v194, (float *)v193);
          sub_1003AC30(
            (float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 16),
            (float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618),
            (float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 32));
          sub_1003AE50((float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 16));
          sub_1003AC30(
            (float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 32),
            (float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 16),
            (float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618));
          sub_1003AE50((float *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 32));
          sub_1003AD10(dword_106C7CA8 + 84 * (_DWORD)dword_10680618, flt_10680630);
          v178 = -flt_10680630;
          sub_1003AD10(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 32, v178);
          sub_1003AD10(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 16, flt_10680630);
LABEL_337:
          v112 = dword_10680628;
        }
LABEL_338:
        ++v111;
        v113 += 3;
      }
      while ( v111 < dword_106C7E6C );
    }
  }
  v119 = 0;
  if ( dword_100B36FC > 0 )
  {
    v120 = dword_10ACDEA8;
    do
    {
      sub_10068400((int)v120);
      ++v119;
      v120 += 2778;
    }
    while ( v119 < dword_100B36FC );
  }
  sub_10067DA0();
  v190 = 0;
  if ( dword_100AA8B4 > 0 )
  {
    v121 = &dword_106C1638;
    do
    {
      v122 = dword_10680618;
      v123 = dword_10AD05DC[2778 * *v121];
      if ( dword_10680618 && dword_10680624 )
      {
        sub_10068180(
          (int)dword_10680618,
          (int *)(dword_106C7CA8 + 84 * (_DWORD)dword_10680618 + 48),
          dword_10AD05DC[2778 * *v121]);
        v122 = dword_10680618;
      }
      v124 = 0;
      if ( v123 )
      {
        v125 = dword_106805D0;
        while ( v124 < dword_10680940 )
        {
          sub_10068210((int)v122, (int *)(dword_106C7CA8 + 84 * *v125 + 48), v123);
          v122 = dword_10680618;
          ++v124;
          ++v125;
        }
      }
      debugPrint(v122);
      v121 += 22;
      ++v190;
    }
    while ( v190 < dword_100AA8B4 );
  }
  sub_10067ED0();
  sub_1002C320(v126);
  v127 = sub_100169B0();
  v128 = 0;
  v187 = v127;
  for ( k = 0; ; k += 11112 )
  {
LABEL_353:
    v130 = dword_100B36FC;
    if ( !dword_100B36FC )
      v130 = 1;
    if ( v128 >= v130 )
      break;
    v131 = 188656 * v127 + k;
    qmemcpy((char *)flt_1039C168 + v131, &dword_10ACDEA8[k / 4], 0x2B68u);
    v132 = (char *)dword_10AD05DC[k / 4];
    if ( v132 )
    {
      if ( v132 == (char *)&unk_10AD05E4 + k )
      {
        *(int *)((char *)&dword_1039E89C + v131) = (int)&flt_1039E8A4 + v131;
      }
      else if ( v132 == (char *)&unk_10AD0738 + k )
      {
        *(int *)((char *)&dword_1039E89C + v131) = (int)&unk_1039E9F8 + v131;
      }
      else if ( v132 == (char *)&unk_10AD0628 + k )
      {
        *(int *)((char *)&dword_1039E89C + v131) = (int)&flt_1039E8E8 + v131;
      }
      else if ( v132 == (char *)&unk_10AD066C + k )
      {
        *(int *)((char *)&dword_1039E89C + v131) = (int)&flt_1039E92C + v131;
      }
      else if ( v132 == (char *)&unk_10AD06B0 + k )
      {
        *(int *)((char *)&dword_1039E89C + v131) = (int)&flt_1039E970 + v131;
      }
      else
      {
        *(int *)((char *)&dword_1039E89C + v131) = 0;
      }
    }
    v133 = (char *)dword_10AD05E0[k / 4];
    if ( v133 )
    {
      if ( v133 == (char *)&unk_10AD05E4 + k )
      {
        ++v128;
        *(int *)((char *)&dword_1039E8A0 + v131) = (int)&flt_1039E8A4 + v131;
        k += 11112;
        goto LABEL_353;
      }
      if ( v133 == (char *)&unk_10AD0738 + k )
      {
        ++v128;
        *(int *)((char *)&dword_1039E8A0 + v131) = (int)&unk_1039E9F8 + v131;
        k += 11112;
        goto LABEL_353;
      }
      if ( v133 == (char *)&unk_10AD0628 + k )
      {
        ++v128;
        *(int *)((char *)&dword_1039E8A0 + v131) = (int)&flt_1039E8E8 + v131;
        k += 11112;
        goto LABEL_353;
      }
      if ( v133 == (char *)&unk_10AD066C + k )
      {
        ++v128;
        *(int *)((char *)&dword_1039E8A0 + v131) = (int)&flt_1039E92C + v131;
        k += 11112;
        goto LABEL_353;
      }
      if ( v133 == (char *)&unk_10AD06B0 + k )
      {
        ++v128;
        *(int *)((char *)&dword_1039E8A0 + v131) = (int)&flt_1039E970 + v131;
        k += 11112;
        goto LABEL_353;
      }
      *(int *)((char *)&dword_1039E8A0 + v131) = 0;
    }
    ++v128;
  }
  if ( dword_100B36F8 > 0 )
  {
    v184 = &dword_10ACD4F8;
    v191 = dword_100B36F8;
    v134 = 47164 * v127;
    v135 = (_DWORD *)((char *)&unk_1039B7C4 + 188656 * v187);
    do
    {
      v136 = *v184;
      v32 = *v184 == 0;
      qmemcpy(v135 - 24, v184 - 24, 0x80u);
      if ( !v32 )
        *v135 = &flt_1039C168[2778 * ((v136 - (int)dword_10ACDEA8) / 11112) + v134];
      v135 += 32;
      v32 = v191 == 1;
      v184 += 32;
      --v191;
    }
    while ( !v32 );
  }
  qmemcpy((char *)&unk_103C77E8 + 188656 * v187, dword_106C1628, 0x58u);
  sub_1003A610(&word_103C7844[94328 * v187]);
  if ( dword_100A66E8 )
  {
    getTicks();
    dword_10680948 = v137;
    dword_106805C4 = 0;
    dword_100A66E8 = 0;
    dword_106909F8 = 0;
  }
  else
  {
    v171 = 1;
    v50 = dword_106805C4 + 1 <= 2;
    dword_10680948 += dword_100AA268[dword_106805C4++];
    if ( !v50 )
      dword_106805C4 = 0;
    if ( ++dword_106909F8 <= 3 )
    {
      getTicks();
LABEL_562:
      v174 = dword_106909FC;
      while ( (v173 < dword_10680948 || v173 > v174 + 333) && v171 )
      {
        v171 = sub_10015C70(v174 + 333 < v173);
        getTicks();
        if ( !v171 )
          goto LABEL_562;
        v174 = v173;
        dword_106909F8 = 0;
        dword_106909FC = v173;
      }
    }
    else if ( sub_10015C70(1) )
    {
      dword_106909F8 = 0;
      getTicks();
      dword_106909FC = v172;
    }
  }
  if ( dword_106909B4 != 2 )
  {
    if ( !dword_106909B4 )
    {
      if ( g_GameMode == 4 || g_GameMode == 5 )
      {
        if ( !sub_1002B2A0() )
        {
          v143 = (int *)&unk_106C6678;
          do
          {
            if ( (dword_118ABAD0 & 0x4000) != 0 )
            {
              sub_10035FA0(v143, 49168);
              dword_10680938 = 1;
              dword_106909F0 = 1;
              dword_106909E4 = 0;
              sub_1002B1C0(0.0, 0.2);
              sub_1002B130(0.0, 0.2);
            }
            v143 += 87;
          }
          while ( (int)v143 < (int)&unk_106C6930 );
        }
      }
      else
      {
        v142 = 0;
        if ( dword_100B4050 > 0 )
        {
          while ( !dword_1022AF20 )
          {
            if ( ++v142 >= dword_100B4050 )
              goto LABEL_469;
          }
          dword_1022AF20 = 0;
          if ( dword_106909E0 )
          {
            sub_1002B130(0.0, 0.2);
            dword_106909E4 = 0;
            dword_106909F0 = 1;
          }
          else
          {
            v180 = 1;
            dword_10680734 = 0;
          }
          sub_1002B1C0(0.0, 0.2);
          sub_1002B220(0.0, 0.2);
          sub_10035FA0((int *)dword_10AD0868, 0x4000);
          sub_10035FA0((int *)dword_10AD33D0, 0x4000);
        }
      }
      goto LABEL_469;
    }
    v138 = 0;
    if ( dword_100B4050 <= 0 )
      goto LABEL_451;
    v139 = dword_10680734;
    v140 = (int **)&dword_10AD0868;
    while ( 1 )
    {
      if ( (dword_118ABAD0 & 0x8000) != 0
        || !v139 && (dword_118ABAD0 & 4) != 0 && (dword_118ABAD0 & 0x3000) == 0 && (dword_118ABAD0 & 3) == 0 )
      {
        if ( v139 || (*(_BYTE *)*v140 & 0x10) == 0 )
        {
          sub_10035FA0(*v140, 49168);
          v139 = dword_10680734;
        }
        switch ( v139 )
        {
          case 0:
            if ( g_NetworkPlay && g_usingGameMode4 )
            {
              sub_10004C20();
            }
            else
            {
              sub_1002B1C0(1.0, 0.2);
              sub_1002B220(1.0, 0.2);
              dword_106909BC = 2;
              v180 = 0;
            }
            goto LABEL_427;
          case 1:
            sub_1002B130(0.0, 0.2);
            dword_106909F0 = 0;
            dword_106909E4 = 0;
            dword_106909EC = 0;
            sub_1002C4A0();
            g_usingGameMode4 = 0;
            sub_100734F0();
            sub_10016990();
            goto LABEL_427;
          case 4:
            sub_1002B130(0.0, 0.2);
            sub_1002B1C0(0.0, 0.2);
            sub_1002B220(0.0, 0.2);
            dword_106909E4 = 0;
            dword_106909F0 = 1;
            if ( byte_100BBAD8 )
            {
              pm_sub_10002BD0();
              LOBYTE(v141) = byte_100BBAD8;
              pm_sub_100029F0(v141);
            }
            if ( g_GameMode == 6 )
            {
              sub_1003DAE0();
              sub_100060C0();
            }
LABEL_427:
            v139 = dword_10680734;
            break;
          case 5:
            v139 = 1;
            v180 = 2;
            dword_106909B4 = 2;
            dword_10680734 = 1;
            break;
          default:
            break;
        }
      }
      if ( dword_106909D8 )
      {
        dword_106909D8 = 0;
        sub_1002B1C0(1.0, 0.2);
        sub_1002B220(1.0, 0.2);
        v139 = dword_10680734;
        dword_106909BC = 2;
        v180 = 0;
      }
      if ( (dword_118ABAD0 & 0x1000) != 0 )
      {
        v139 = (v139 + 5) % 6;
        dword_10680734 = v139;
        if ( g_NetworkPlay )
        {
          if ( v139 == 1 )
          {
            v139 = 0;
            dword_10680734 = 0;
          }
        }
      }
      if ( (dword_118ABAD0 & 0x2000) != 0 )
      {
        v139 = (v139 + 1) % 6;
        dword_10680734 = v139;
        if ( g_NetworkPlay )
        {
          if ( v139 == 1 )
          {
            v139 = 2;
            dword_10680734 = 2;
          }
        }
      }
      if ( (dword_118ABAD0 & 1) != 0 )
      {
        if ( v139 == 2 )
        {
          sub_10060D70();
        }
        else
        {
          if ( v139 != 3 )
            goto LABEL_444;
          sub_10060DE0();
        }
        v139 = dword_10680734;
      }
LABEL_444:
      if ( (dword_118ABAD0 & 2) != 0 )
      {
        if ( v139 == 2 )
        {
          sub_10060D50();
          goto LABEL_449;
        }
        if ( v139 == 3 )
        {
          sub_10060DC0();
LABEL_449:
          v139 = dword_10680734;
          goto LABEL_450;
        }
      }
LABEL_450:
      ++v138;
      v140 += 2778;
      if ( v138 >= dword_100B4050 )
        goto LABEL_451;
    }
  }
  if ( (dword_118ABAD0 & 0x8000) != 0 )
  {
    if ( dword_10680734 )
    {
      if ( dword_10680734 == 1 )
      {
        if ( g_NetworkPlay && g_usingGameMode4 )
        {
          sub_10004C20();
        }
        else
        {
          sub_1002B1C0(1.0, 0.2);
          sub_1002B220(1.0, 0.2);
          dword_106909BC = 2;
          v180 = 0;
        }
      }
    }
    else
    {
      sub_1002B130(0.0, 0.2);
      sub_1002B1C0(0.0, 0.2);
      sub_1002B220(0.0, 0.2);
      dword_106909E4 = 0;
      dword_106909F0 = 2;
    }
  }
  if ( (dword_118ABAD0 & 0x1000) != 0 )
    dword_10680734 = 1 - dword_10680734;
  if ( (dword_118ABAD0 & 0x2000) != 0 )
    dword_10680734 = 1 - dword_10680734;
  if ( dword_106909D8 )
  {
    dword_106909D8 = 0;
    sub_1002B1C0(1.0, 0.2);
    sub_1002B220(1.0, 0.2);
    dword_106909BC = 2;
    v180 = 0;
    if ( g_NetworkPlay && g_usingGameMode4 )
      goto LABEL_404;
    goto LABEL_469;
  }
LABEL_451:
  if ( g_NetworkPlay && g_usingGameMode4 )
LABEL_404:
    sub_10005090();
LABEL_469:
  if ( g_GameMode == 4 )
  {
    if ( dword_106805B8 == 2 )
      sub_1002C410();
    if ( g_GameMode == 4 && dword_106805B8 == 1 )
    {
      if ( (&off_100AA018)[8 * dword_106805C0] )
      {
        v144 = *(float *)&dword_106806DC + *(float *)&dword_106C2CFC;
        *(float *)&dword_106806DC = v144;
        if ( v144 > flt_100AA01C[8 * dword_106805C0] )
        {
          dword_106806DC = 0;
          ++dword_106805C0;
        }
      }
    }
  }
  if ( !sub_1002B2A0() || !sub_1002B2D0() )
    goto LABEL_533;
  v145 = dword_100B4050;
  v146 = &dword_10AD0868;
  do
  {
    v147 = 0;
    if ( v145 > 0 )
    {
      v148 = 60;
      do
      {
        ++v147;
        *(_DWORD *)((char *)*v146 + v148) = *(_DWORD *)((char *)*v146 + v148 - 8);
        v145 = dword_100B4050;
        v148 += 4;
      }
      while ( v147 < dword_100B4050 );
    }
    v146 += 2778;
  }
  while ( (int)v146 < (int)&unk_10AFBEE8 );
  dword_118290F4 = 0;
  v149 = 0;
  v150 = dword_118AC730;
  do
  {
    v150[1] = 0;
    *v150 = 0;
    *(v150 - 2) = 0;
    *(v150 - 1) = 0;
    *(v150 - 4) = (int)&unk_118AC70C;
    sub_10072580(v149);
    v150 += 6;
    ++v149;
  }
  while ( (int)v150 < (int)&unk_118AC898 );
  dword_106C6648 = 0;
  if ( !dword_106909F0 )
    goto LABEL_531;
  if ( !dword_106909E4 )
  {
    sub_1003348E();
    dword_106C3364 = 0;
    if ( g_GameMode == 5 )
    {
      if ( dword_10ACED34->gap0[4] )
      {
        g_GameMode = 0;
        sub_1002F460();
        byte_11782DDC = 1;
        sub_10034C66((int)sub_10071120);
      }
      else
      {
        sub_1002C390();
      }
      goto LABEL_527;
    }
    if ( g_GameMode != 4 || dword_106805B8 != 2 )
    {
      if ( dword_106909B8 && (g_GameMode == 2 || g_GameMode == 1 || !g_GameMode || g_GameMode == 6) )
      {
        sub_1002F320();
        sub_10034C66((int)sub_10002140);
LABEL_527:
        v165 = 0;
        goto LABEL_528;
      }
      if ( (g_GameMode != 4 || dword_106805B8 != 1 && (dword_106805B8 || dword_10680938)) && dword_106909F0 == 2 )
      {
        if ( dword_106C56D0 != dword_10B4E708 || dword_106C29A4 != dword_10B4E70C )
          sub_1006A4A0((#483 *)g_Config, g_bossRallyCfgPath);
        cleanUpAndExitWithCode(0);
      }
    }
    sub_10034C66((int)sub_10039000);
    goto LABEL_527;
  }
  if ( !dword_106909E0 )
  {
    v151 = dword_100B4050;
    v152 = 1;
    v153 = *((_DWORD *)dword_10AD0868 + 13);
    dword_106909C8 = v153;
    dword_10680668 = 0;
    if ( dword_100B4050 > 1 )
    {
      v154 = 56;
      v155 = &dword_10AD33D0;
      do
      {
        v156 = *(_DWORD *)(*v155 + v154);
        if ( v153 > v156 )
        {
          v153 = *(_DWORD *)(*v155 + v154);
          dword_10680668 = v152;
          dword_106909C8 = v156;
        }
        ++v152;
        v154 += 4;
        v155 += 2778;
      }
      while ( v152 < dword_100B4050 );
    }
    v157 = 0;
    if ( dword_100B4050 > 0 )
    {
      v158 = &dword_10AD0868;
      v159 = 4 * dword_10680668 + 44;
      v192 = 4 * dword_10680668 + 52;
      do
      {
        v160 = (char *)*v158;
        ++v157;
        v158 += 2778;
        dword_1068066C[v157] = *(_DWORD *)&v160[v159];
        dword_106806E4[v157] = *(_DWORD *)&v160[v192];
      }
      while ( v157 < v151 );
      v161 = 0;
      if ( v151 > 0 )
      {
        v162 = &dword_10AD0868;
        do
        {
          v163 = 0;
          if ( v151 > 0 )
          {
            v164 = 44;
            do
            {
              debugPrint((void *)v157);
              v157 = (int)*v162;
              ++v163;
              *(_DWORD *)((char *)*v162 + v164) = 0;
              v151 = dword_100B4050;
              v164 += 4;
            }
            while ( v163 < dword_100B4050 );
          }
          ++v161;
          v162 += 2778;
        }
        while ( v161 < v151 );
      }
    }
    debugPrint((void *)v157);
  }
  v165 = 1;
LABEL_528:
  dword_106909E0 = v165;
  dword_106909EC = 0;
  if ( !v165 )
    sub_1002C4A0();
  sub_10016990();
LABEL_531:
  word_11782BC0 = 1;
  v166 = &dword_10AD0868;
  do
  {
    v167 = *v166;
    v166 += 2778;
    v167[17] = 0;
  }
  while ( (int)v166 < (int)&unk_10AFBEE8 );
LABEL_533:
  if ( dword_106909B4 != v180 )
  {
    if ( v180 )
    {
      sub_10067980();
      pm_sub_10002B70();
      sub_10072E00();
      sub_100683D0();
    }
    else
    {
      sub_100679A0();
      if ( byte_100BBAD8 )
      {
        pm_sub_10002BD0();
        LOBYTE(v168) = byte_100BBAD8;
        pm_sub_100029F0(v168);
      }
    }
    dword_106909B4 = v180;
  }
  if ( g_GameMode == 6 )
    sub_100060F0();
  v169 = *(_DWORD *)(dword_10ACE010 + 436) || *(_DWORD *)(dword_10ACE014 + 436);
  sub_10078F20((unsigned __int8)byte_10ACE215, v169, dword_10ACED38);
  if ( g_Playsfx && !dword_106909B4 )
    sub_10072E60();
  if ( dword_106909E0 )
    sub_1006AD10();
  else
    sub_1006AB20();
  sub_10017740();
  result = sub_10075150();
  if ( !g_usingGameMode4 )
  {
    if ( g_NetworkPlay )
      sub_10006160();
    result = sub_10075100();
  }
  return result;
}
// 1002C512: variable 'v2' is possibly undefined
// 1002C5AA: variable 'v9' is possibly undefined
// 1002C5AF: variable 'v10' is possibly undefined
// 1002C601: variable 'v12' is possibly undefined
// 1002CCF9: variable 'v29' is possibly undefined
// 1002CCFE: variable 'v30' is possibly undefined
// 1002CD88: variable 'v34' is possibly undefined
// 1002CE1D: variable 'v35' is possibly undefined
// 1002D5DD: variable 'v69' is possibly undefined
// 1002D5EA: variable 'v70' is possibly undefined
// 1002D60F: variable 'v71' is possibly undefined
// 1002DC0D: variable 'v74' is possibly undefined
// 1002DD1A: variable 'v105' is possibly undefined
// 1002DD38: variable 'v106' is possibly undefined
// 1002DD40: variable 'v107' is possibly undefined
// 1002E168: variable 'v117' is possibly undefined
// 1002E168: variable 'v118' is possibly undefined
// 1002E40B: variable 'v126' is possibly undefined
// 1002E6AA: variable 'v137' is possibly undefined
// 1002E951: variable 'v141' is possibly undefined
// 1002EF64: variable 'v168' is possibly undefined
// 1002F073: variable 'v172' is possibly undefined
// 1002F08E: variable 'v173' is possibly undefined
// 10005D90: using guessed type double sub_10005D90(void);
// 1002C430: using guessed type int __cdecl sub_1002C430(int);
// 1002C4D0: using guessed type double sub_1002C4D0(void);
// 1002F230: using guessed type double __cdecl sub_1002F230(_DWORD);
// 10034A8A: using guessed type int _cfltcvt_init(void);
// 10039000: using guessed type int sub_10039000();
// 100679C0: using guessed type double __thiscall sub_100679C0(_DWORD);
// 1006AA90: using guessed type int __setargv_0(void);
// 10071120: using guessed type int sub_10071120();
// 10075020: using guessed type double getTicks(void);
// 100A66E8: using guessed type int dword_100A66E8;
// 100A73A8: using guessed type int dword_100A73A8[];
// 100AA008: using guessed type int dword_100AA008;
// 100AA00C: using guessed type int dword_100AA00C;
// 100AA010: using guessed type int g_GameMode;
// 100AA018: using guessed type char (*off_100AA018)[8];
// 100AA01C: using guessed type float flt_100AA01C[];
// 100AA228: using guessed type int dword_100AA228[];
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 100B380C: using guessed type int g_chosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 100B5DE8: using guessed type int g_Playsfx;
// 100B8C94: using guessed type int (*off_100B8C94)(void);
// 100BBAD8: using guessed type char byte_100BBAD8;
// 100BD2A8: using guessed type char **stringOffsets[16];
// 1022AF14: using guessed type int g_usingGameMode4;
// 1022AF18: using guessed type int g_NetworkPlay;
// 1022AF1C: using guessed type int dword_1022AF1C;
// 1022AF20: using guessed type int dword_1022AF20;
// 1022B34C: using guessed type int g_chosenCar;
// 1022B350: using guessed type int g_ChosenWeather;
// 1039C168: using guessed type float flt_1039C168[];
// 1039E89C: using guessed type int dword_1039E89C;
// 1039E8A0: using guessed type int dword_1039E8A0;
// 1039E8A4: using guessed type float flt_1039E8A4;
// 1039E8E8: using guessed type float flt_1039E8E8;
// 1039E92C: using guessed type float flt_1039E92C;
// 1039E970: using guessed type float flt_1039E970;
// 104BBE08: using guessed type int dword_104BBE08;
// 106805A8: using guessed type int dword_106805A8;
// 106805B8: using guessed type int dword_106805B8;
// 106805BC: using guessed type int dword_106805BC;
// 106805C0: using guessed type int dword_106805C0;
// 106805C4: using guessed type int dword_106805C4;
// 10680610: using guessed type int dword_10680610;
// 1068061C: using guessed type int dword_1068061C;
// 10680620: using guessed type int dword_10680620;
// 10680624: using guessed type int dword_10680624;
// 10680628: using guessed type int dword_10680628;
// 1068062C: using guessed type int dword_1068062C;
// 10680634: using guessed type int dword_10680634;
// 10680638: using guessed type int dword_10680638;
// 1068063C: using guessed type int dword_1068063C;
// 10680640: using guessed type int dword_10680640;
// 10680644: using guessed type int dword_10680644;
// 10680648: using guessed type int dword_10680648;
// 1068064C: using guessed type int dword_1068064C;
// 10680650: using guessed type int dword_10680650;
// 10680654: using guessed type int dword_10680654;
// 10680658: using guessed type int dword_10680658;
// 1068065C: using guessed type int dword_1068065C;
// 10680660: using guessed type int dword_10680660;
// 10680664: using guessed type int dword_10680664;
// 10680668: using guessed type int dword_10680668;
// 106806D8: using guessed type float flt_106806D8;
// 106806DC: using guessed type int dword_106806DC;
// 106806E0: using guessed type int dword_106806E0;
// 10680734: using guessed type int dword_10680734;
// 10680738: using guessed type int dword_10680738;
// 1068073C: using guessed type int dword_1068073C;
// 10680740: using guessed type int dword_10680740;
// 10680744: using guessed type int dword_10680744;
// 10680750: using guessed type int dword_10680750;
// 10680938: using guessed type int dword_10680938;
// 1068093C: using guessed type int dword_1068093C;
// 10680940: using guessed type int dword_10680940;
// 10680948: using guessed type int dword_10680948;
// 106909B0: using guessed type int dword_106909B0;
// 106909B4: using guessed type int dword_106909B4;
// 106909B8: using guessed type int dword_106909B8;
// 106909BC: using guessed type int dword_106909BC;
// 106909C8: using guessed type int dword_106909C8;
// 106909CC: using guessed type int dword_106909CC;
// 106909D0: using guessed type int dword_106909D0;
// 106909D4: using guessed type int dword_106909D4;
// 106909D8: using guessed type int dword_106909D8;
// 106909E0: using guessed type int dword_106909E0;
// 106909E4: using guessed type int dword_106909E4;
// 106909E8: using guessed type int dword_106909E8;
// 106909EC: using guessed type int dword_106909EC;
// 106909F0: using guessed type int dword_106909F0;
// 106909F4: using guessed type int dword_106909F4;
// 106909F8: using guessed type int dword_106909F8;
// 106909FC: using guessed type int dword_106909FC;
// 106C1638: using guessed type int dword_106C1638;
// 106C1690: using guessed type int dword_106C1690;
// 106C29A4: using guessed type int dword_106C29A4;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 106C3364: using guessed type int dword_106C3364;
// 106C56D0: using guessed type int dword_106C56D0;
// 106C65F4: using guessed type int dword_106C65F4;
// 106C661C: using guessed type int dword_106C661C;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 106C6648: using guessed type int dword_106C6648;
// 106C7CA8: using guessed type int dword_106C7CA8;
// 106C7E6C: using guessed type int dword_106C7E6C;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
// 10ACDFEC: using guessed type int dword_10ACDFEC[];
// 10ACE010: using guessed type int dword_10ACE010;
// 10ACE014: using guessed type int dword_10ACE014;
// 10ACE215: using guessed type char byte_10ACE215;
// 10ACED30: using guessed type int dword_10ACED30;
// 10ACED38: using guessed type int dword_10ACED38;
// 10ACED3C: using guessed type int dword_10ACED3C[];
// 10ACED40: using guessed type int dword_10ACED40;
// 10ACED44: using guessed type int dword_10ACED44;
// 10ACEEA0: using guessed type int dword_10ACEEA0;
// 10ACEEA4: using guessed type int dword_10ACEEA4;
// 10ACEEA8: using guessed type int dword_10ACEEA8;
// 10ACEEAC: using guessed type int dword_10ACEEAC;
// 10ACEEB0: using guessed type int dword_10ACEEB0;
// 10AD05DC: using guessed type int dword_10AD05DC[];
// 10AD05E0: using guessed type int dword_10AD05E0[];
// 10AD061C: using guessed type float flt_10AD061C;
// 10AD084C: using guessed type int dword_10AD084C[];
// 10AD18A0: using guessed type int dword_10AD18A0;
// 10AD18A4: using guessed type int dword_10AD18A4;
// 10AD18A8: using guessed type int dword_10AD18A8;
// 10AD18AC: using guessed type int dword_10AD18AC;
// 10AD33C4: using guessed type int dword_10AD33C4;
// 10AD33D0: using guessed type int dword_10AD33D0;
// 10AF9BB0: using guessed type int dword_10AF9BB0;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E708: using guessed type int dword_10B4E708;
// 10B4E70C: using guessed type int dword_10B4E70C;
// 10B501C8: using guessed type int (*dword_10B501C8)(void);
// 10B501CC: using guessed type int (*dword_10B501CC)(void);
// 117554E8: using guessed type int dword_117554E8;
// 11782BC0: using guessed type __int16 word_11782BC0;
// 11782DDC: using guessed type char byte_11782DDC;
// 118290F4: using guessed type int dword_118290F4;
// 118AA09C: using guessed type int dword_118AA09C;
// 118AA0A8: using guessed type int (__cdecl *dword_118AA0A8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 118AA0AC: using guessed type int (__cdecl *dword_118AA0AC)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 118AA0D0: using guessed type int (*dword_118AA0D0)(void);
// 118AB470: using guessed type int dword_118AB470;
// 118ABAD0: using guessed type int dword_118ABAD0;
// 118ABDC0: using guessed type int dword_118ABDC0;
// 118AC730: using guessed type int dword_118AC730[];
