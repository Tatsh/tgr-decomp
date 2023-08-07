#include "../../types-n64.h"
//----- (8025F4F8) --------------------------------------------------------
int __fastcall sub_8025F4F8(float *a1, float *a2, float *a3, float *a4) {
    float v4;            // $f0
    float v5;            // $f0
    float v6;            // $f0
    float v7;            // $f0
    float v8;            // $f0
    float v9;            // $f0
    float v10;           // $f0
    float v11;           // $f0
    float v12;           // $f0
    float v13;           // $f0
    float v14;           // $f2
    char v15;            // $v0
    float v16;           // $f12
    float v17;           // $f18
    float v18;           // $f0
    float v19;           // $f2
    float v20;           // $f0
    float v21;           // $f14
    char v22;            // $v1
    float v23;           // $f2
    char v24;            // $v1
    float v25;           // $f2
    char v26;            // $v1
    float v27;           // $f0
    float v28;           // $f2
    char v29;            // $v1
    float v30;           // $f0
    float v31;           // $f2
    char v32;            // $v0
    float v33;           // $f0
    char v34;            // $v1
    float v35;           // $f2
    char v36;            // $t6
    float v37;           // $f0
    char v38;            // $v1
    float v39;           // $f2
    char v40;            // $t7
    float v41;           // $f0
    char v42;            // $v1
    float v43;           // $f2
    float v44;           // $f0
    char v45;            // $v1
    float v46;           // $f2
    float v47;           // $f0
    char v48;            // $v1
    float v49;           // $f2
    float v50;           // $f0
    char v51;            // $v1
    float v52;           // $f2
    float v53;           // $f0
    char v54;            // $v1
    float v55;           // $f2
    float v56;           // $f0
    char v57;            // $v1
    float v58;           // $f2
    float v59;           // $f0
    unsigned __int8 v60; // $v1
    float v61;           // $f2
    float v63;           // [sp+4h] [-7Ch]
    float v64;           // [sp+14h] [-6Ch]
    float v65;           // [sp+18h] [-68h]
    float v66;           // [sp+1Ch] [-64h]
    float v67;           // [sp+20h] [-60h]
    float v68;           // [sp+24h] [-5Ch]
    float v69;           // [sp+28h] [-58h]
    float v70;           // [sp+2Ch] [-54h]
    float v71;           // [sp+30h] [-50h]
    float v72;           // [sp+34h] [-4Ch]
    float v73;           // [sp+38h] [-48h]
    float v74;           // [sp+3Ch] [-44h]
    float v75;           // [sp+40h] [-40h]
    float v76;           // [sp+44h] [-3Ch]
    float v77;           // [sp+48h] [-38h]
    float v78;           // [sp+50h] [-30h]
    float v79;           // [sp+54h] [-2Ch]
    float v80;           // [sp+58h] [-28h]
    float v81;           // [sp+5Ch] [-24h]
    float v82;           // [sp+60h] [-20h]
    float v83;           // [sp+64h] [-1Ch]
    float v84;           // [sp+68h] [-18h]
    float v85;           // [sp+6Ch] [-14h]
    float v86;           // [sp+70h] [-10h]

    v4 = *a1;
    if (*a1 < 0.0)
        v78 = -v4;
    else
        v78 = v4;
    v5 = a1[1];
    if (v5 < 0.0)
        v79 = -v5;
    else
        v79 = v5;
    v6 = a1[2];
    if (v6 < 0.0)
        v80 = -v6;
    else
        v80 = v6;
    v7 = a1[3];
    if (v7 < 0.0)
        v81 = -v7;
    else
        v81 = v7;
    v8 = a1[4];
    if (v8 < 0.0)
        v82 = -v8;
    else
        v82 = v8;
    v9 = a1[5];
    if (v9 < 0.0)
        v83 = -v9;
    else
        v83 = v9;
    v10 = a1[6];
    if (v10 < 0.0)
        v84 = -v10;
    else
        v84 = v10;
    v11 = a1[7];
    if (v11 < 0.0)
        v85 = -v11;
    else
        v85 = v11;
    v12 = a1[8];
    if (v12 < 0.0)
        v86 = -v12;
    else
        v86 = v12;
    v13 = *a2;
    if (*a2 < 0.0)
        v14 = -v13;
    else
        v14 = v13;
    v68 = v13;
    v15 = 0;
    v67 = a4[2];
    v66 = *a3;
    v65 = *a4;
    v64 = a4[1];
    if (v14 <= (float)((float)(v80 * v67) +
                       (float)((float)(v66 + (float)(v65 * v78)) + (float)(v64 * v79))))
        v15 = 1;
    v71 = a1[6];
    v16 = a2[2];
    v77 = *a1;
    v17 = a2[1];
    v74 = a1[3];
    v18 = (float)(v71 * v16) + (float)((float)(v13 * v77) + (float)(v17 * v74));
    if (v18 < 0.0)
        v19 = -v18;
    else
        v19 = v18;
    v20 = a3[1];
    v21 = a3[2];
    v22 = v15 & 1 &
          (v19 <= (float)((float)(v84 * v21) +
                          (float)((float)(v65 + (float)(v66 * v78)) + (float)(v20 * v81))));
    if (v17 >= 0.0)
        v23 = v17;
    else
        v23 = -v17;
    v24 = v22 & (v23 <= (float)((float)(v83 * v67) +
                                (float)((float)(v20 + (float)(v65 * v81)) + (float)(v64 * v82))));
    if (v16 < 0.0)
        v25 = -v16;
    else
        v25 = v16;
    v63 = v20;
    v26 = v24 & (v25 <= (float)((float)(v86 * v67) +
                                (float)((float)(v21 + (float)(v65 * v84)) + (float)(v64 * v85))));
    v70 = a1[7];
    v76 = a1[1];
    v73 = a1[4];
    v27 = (float)(v70 * v16) + (float)((float)(v68 * v76) + (float)(v17 * v73));
    if (v27 >= 0.0)
        v28 = v27;
    else
        v28 = -v27;
    v29 = v26 & (v28 <= (float)((float)(v85 * v21) +
                                (float)((float)(v64 + (float)(v66 * v79)) + (float)(v63 * v82))));
    v69 = a1[8];
    v75 = a1[2];
    v72 = a1[5];
    v30 = (float)(v69 * v16) + (float)((float)(v68 * v75) + (float)(v17 * v72));
    if (v30 >= 0.0)
        v31 = v30;
    else
        v31 = -v30;
    v32 = 0;
    v33 = (float)(v16 * v74) - (float)(v71 * v17);
    if (v31 <= (float)((float)(v86 * v21) +
                       (float)((float)(v67 + (float)(v66 * v80)) + (float)(v63 * v83))))
        v32 = 1;
    v34 = v29 & v32;
    if (v33 >= 0.0)
        v35 = v33;
    else
        v35 = -v33;
    v36 = 0;
    v37 = (float)(v16 * v73) - (float)(v70 * v17);
    if (v35 <=
        (float)((float)((float)((float)(v63 * v84) + (float)(v21 * v81)) + (float)(v64 * v80)) +
                (float)(v67 * v79)))
        v36 = 1;
    v38 = v34 & v36;
    if (v37 >= 0.0)
        v39 = v37;
    else
        v39 = -v37;
    v40 = 0;
    v41 = (float)(v16 * v72) - (float)(v69 * v17);
    if (v39 <=
        (float)((float)((float)((float)(v63 * v85) + (float)(v21 * v82)) + (float)(v65 * v80)) +
                (float)(v67 * v78)))
        v40 = 1;
    v42 = v38 & v40;
    if (v41 >= 0.0)
        v43 = v41;
    else
        v43 = -v41;
    v44 = (float)(v68 * v71) - (float)(v77 * v16);
    v45 = v42 & (v43 <= (float)((float)((float)((float)(v63 * v86) + (float)(v21 * v83)) +
                                        (float)(v65 * v79)) +
                                (float)(v64 * v78)));
    if (v44 < 0.0)
        v46 = -v44;
    else
        v46 = v44;
    v47 = (float)(v68 * v70) - (float)(v76 * v16);
    v48 = v45 & (v46 <= (float)((float)((float)((float)(v66 * v84) + (float)(v21 * v78)) +
                                        (float)(v64 * v83)) +
                                (float)(v67 * v82)));
    if (v47 < 0.0)
        v49 = -v47;
    else
        v49 = v47;
    v50 = (float)(v68 * v69) - (float)(v75 * v16);
    v51 = v48 & (v49 <= (float)((float)((float)((float)(v66 * v85) + (float)(v21 * v79)) +
                                        (float)(v65 * v83)) +
                                (float)(v67 * v81)));
    if (v50 < 0.0)
        v52 = -v50;
    else
        v52 = v50;
    v53 = (float)(v17 * v77) - (float)(v74 * v68);
    v54 = v51 & (v52 <= (float)((float)((float)((float)(v66 * v86) + (float)(v21 * v80)) +
                                        (float)(v65 * v82)) +
                                (float)(v64 * v81)));
    if (v53 < 0.0)
        v55 = -v53;
    else
        v55 = v53;
    v56 = (float)(v17 * v76) - (float)(v73 * v68);
    v57 = v54 & (v55 <= (float)((float)((float)((float)(v66 * v81) + (float)(v63 * v78)) +
                                        (float)(v64 * v86)) +
                                (float)(v67 * v85)));
    if (v56 < 0.0)
        v58 = -v56;
    else
        v58 = v56;
    v59 = (float)(v17 * v75) - (float)(v72 * v68);
    v60 = v57 & (v58 <= (float)((float)((float)((float)(v66 * v82) + (float)(v63 * v79)) +
                                        (float)(v65 * v86)) +
                                (float)(v67 * v84)));
    if (v59 < 0.0)
        v61 = -v59;
    else
        v61 = v59;
    return v60 & (v61 <= (float)((float)((float)((float)(v66 * v83) + (float)(v63 * v80)) +
                                         (float)(v65 * v85)) +
                                 (float)(v64 * v84)));
}
