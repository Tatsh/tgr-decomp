#include "../../types-n64.h"
//----- (8024026C) --------------------------------------------------------
int __fastcall inflate(z_streamp a1, int f)
{
  struct internal_state *v3; // $s1
  int v4; // $s2
  int result; // $v0
  unsigned int v6; // $v1
  unsigned int v7; // $t9
  char *v8; // $t1
  uInt v9; // $v0
  struct internal_state *v10; // $t7
  struct internal_state *v11; // $s1
  struct internal_state *v12; // $t3
  unsigned int v13; // $v1
  char *v14; // $v0
  struct internal_state *v15; // $s1
  int v16; // $a0
  struct internal_state *v17; // $t3
  unsigned int v18; // $v1
  unsigned int v19; // $t9
  char *v20; // $t8
  struct internal_state *v21; // $t7
  unsigned int v22; // $v1
  char *v23; // $t1
  struct internal_state *v24; // $s1
  struct internal_state *v25; // $t9
  unsigned int v26; // $v1
  char *v27; // $t2
  struct internal_state *v28; // $s1
  struct internal_state *v29; // $t0
  unsigned int v30; // $v1
  char *v31; // $t3
  struct internal_state *v32; // $s1
  struct internal_state *v33; // $s1
  struct internal_state *v34; // $t1
  struct internal_state *v35; // $s1
  unsigned int v36; // $v1
  unsigned int v37; // $t9
  char *v38; // $t8
  struct internal_state *v39; // $t7
  unsigned int v40; // $v1
  char *v41; // $t1
  struct internal_state *v42; // $s1
  struct internal_state *v43; // $t9
  unsigned int v44; // $v1
  char *v45; // $t2
  struct internal_state *v46; // $s1
  struct internal_state *v47; // $t0
  unsigned int v48; // $v1
  char *v49; // $t3
  struct internal_state *v50; // $s1
  struct internal_state *v51; // $s1
  struct internal_state *v52; // $t1

  if ( !a1 )
    return -2;
  v3 = a1->state;
  if ( !v3 )
    return -2;
  if ( !a1->next_in )
    return -2;
  v4 = -5;
  if ( f < 0 )
    return -2;
  while ( 2 )
  {
    switch ( v3->mode )
    {
      case METHOD:
        v6 = a1->avail_in;
        if ( v6 )
        {
          v7 = a1->total_in;
          v8 = a1->next_in;
          a1->avail_in = v6 - 1;
          a1->total_in = v7 + 1;
          v9 = (unsigned __int8)*v8;
          v4 = 0;
          v3->sub.method = v9;
          ++a1->next_in;
          if ( (v9 & 0xF) != 8 )
          {
            a1->state->mode = BAD;
            v10 = a1->state;
            a1->msg = "unknown compression method";
            v10->sub.method = 5;
            goto LABEL_59;
          }
          v11 = a1->state;
          if ( v11->wbits >= (v11->sub.method >> 4) + 8 )
          {
            v11->mode = FLAG;
            goto LABEL_14;
          }
          v11->mode = BAD;
          v12 = a1->state;
          a1->msg = "invalid window size";
          v12->sub.method = 5;
          goto LABEL_59;
        }
        result = v4;
        break;
      case FLAG:
LABEL_14:
        v13 = a1->avail_in;
        if ( v13 )
        {
          v14 = a1->next_in;
          v15 = a1->state;
          ++a1->total_in;
          a1->avail_in = v13 - 1;
          v16 = (unsigned __int8)*v14;
          a1->next_in = v14 + 1;
          v4 = 0;
          if ( ((v15->sub.method << 8) + v16) % 0x1F )
          {
            v15->mode = BAD;
            v17 = a1->state;
            a1->msg = "incorrect header check";
            v17->sub.method = 5;
            goto LABEL_59;
          }
          if ( (v16 & 0x20) != 0 )
          {
            v15->mode = DICT4;
            goto LABEL_21;
          }
          v15->mode = BLOCKS;
          goto LABEL_59;
        }
        result = v4;
        break;
      case DICT4:
LABEL_21:
        v18 = a1->avail_in;
        if ( v18 )
        {
          v19 = a1->total_in;
          v20 = a1->next_in;
          a1->avail_in = v18 - 1;
          a1->total_in = v19 + 1;
          a1->state->sub.check.need = (unsigned __int8)*v20 << 24;
          v21 = a1->state;
          v4 = 0;
          ++a1->next_in;
          v21->mode = DICT3;
          goto LABEL_24;
        }
        result = v4;
        break;
      case DICT3:
LABEL_24:
        v22 = a1->avail_in;
        if ( v22 )
        {
          v23 = a1->next_in;
          v24 = a1->state;
          ++a1->total_in;
          a1->avail_in = v22 - 1;
          v24->sub.check.need += (unsigned __int8)*v23 << 16;
          v25 = a1->state;
          v4 = 0;
          ++a1->next_in;
          v25->mode = DICT2;
          goto LABEL_27;
        }
        result = v4;
        break;
      case DICT2:
LABEL_27:
        v26 = a1->avail_in;
        if ( v26 )
        {
          v27 = a1->next_in;
          v28 = a1->state;
          ++a1->total_in;
          a1->avail_in = v26 - 1;
          v28->sub.check.need += (unsigned __int8)*v27 << 8;
          v29 = a1->state;
          v4 = 0;
          ++a1->next_in;
          v29->mode = DICT1;
          goto LABEL_30;
        }
        result = v4;
        break;
      case DICT1:
LABEL_30:
        v30 = a1->avail_in;
        if ( v30 )
        {
          v31 = a1->next_in;
          v32 = a1->state;
          ++a1->total_in;
          a1->avail_in = v30 - 1;
          result = 2;
          v32->sub.check.need += (unsigned __int8)*v31;
          v33 = a1->state;
          ++a1->next_in;
          a1->adler = v33->sub.check.need;
          v33->mode = DICT0;
        }
        else
        {
          result = v4;
        }
        break;
      case DICT0:
        v3->mode = BAD;
        v34 = a1->state;
        a1->msg = "need dictionary";
        result = -2;
        v34->sub.method = 0;
        break;
      case BLOCKS:
        result = inflateBack((z_streamp)v3->blocks, a1, v4);
        v4 = result;
        if ( result == -3 )
        {
          a1->state->mode = BAD;
          a1->state->sub.method = 0;
          goto LABEL_59;
        }
        if ( result == 1 )
        {
          v4 = 0;
          sub_8023EDB0((int *)a1->state->blocks, (int)a1, &a1->state->sub.method);
          v35 = a1->state;
          if ( !v35->nowrap )
          {
            v35->mode = CHECK4;
            goto LABEL_42;
          }
          v35->mode = DONE;
          goto LABEL_59;
        }
        break;
      case CHECK4:
LABEL_42:
        v36 = a1->avail_in;
        if ( v36 )
        {
          v37 = a1->total_in;
          v38 = a1->next_in;
          a1->avail_in = v36 - 1;
          a1->total_in = v37 + 1;
          a1->state->sub.check.need = (unsigned __int8)*v38 << 24;
          v39 = a1->state;
          v4 = 0;
          ++a1->next_in;
          v39->mode = CHECK3;
          goto LABEL_45;
        }
        result = v4;
        break;
      case CHECK3:
LABEL_45:
        v40 = a1->avail_in;
        if ( v40 )
        {
          v41 = a1->next_in;
          v42 = a1->state;
          ++a1->total_in;
          a1->avail_in = v40 - 1;
          v42->sub.check.need += (unsigned __int8)*v41 << 16;
          v43 = a1->state;
          v4 = 0;
          ++a1->next_in;
          v43->mode = CHECK2;
          goto LABEL_48;
        }
        result = v4;
        break;
      case CHECK2:
LABEL_48:
        v44 = a1->avail_in;
        if ( v44 )
        {
          v45 = a1->next_in;
          v46 = a1->state;
          ++a1->total_in;
          a1->avail_in = v44 - 1;
          v46->sub.check.need += (unsigned __int8)*v45 << 8;
          v47 = a1->state;
          v4 = 0;
          ++a1->next_in;
          v47->mode = CHECK1;
          goto LABEL_51;
        }
        result = v4;
        break;
      case CHECK1:
LABEL_51:
        v48 = a1->avail_in;
        if ( v48 )
        {
          v49 = a1->next_in;
          v50 = a1->state;
          ++a1->total_in;
          a1->avail_in = v48 - 1;
          v4 = 0;
          v50->sub.check.need += (unsigned __int8)*v49;
          v51 = a1->state;
          ++a1->next_in;
          if ( v51->sub.check.need == v51->sub.method )
          {
            v51->mode = DONE;
            goto LABEL_56;
          }
          v51->mode = BAD;
          v52 = a1->state;
          a1->msg = "incorrect data check";
          v52->sub.method = 5;
LABEL_59:
          v3 = a1->state;
          continue;
        }
        result = v4;
        break;
      case DONE:
LABEL_56:
        result = 1;
        break;
      case BAD:
        result = -3;
        break;
      default:
        result = -2;
        break;
    }
    return result;
  }
}
