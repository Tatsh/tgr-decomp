#include "../../types-n64.h"
//----- (8024C184) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
BOOL sub_8024C184()
{
  int *v0; // $a0
  int v1; // $t0
  int *v3; // [sp+1Ch] [-54h]
  int v4; // [sp+68h] [-8h]

  if ( !sub_8024D3F0(&dword_8028D480) )
    sub_8024D3F0(&dword_8028D490);
  v0 = &dword_80369CD8;
  v1 = 0;
  do
  {
    v3 = v0;
    v4 = v1;
    sub_8024D3F0(v0);
    v1 = v4 + 1;
    v0 = v3 + 4;
  }
  while ( v4 != 12 );
  return sub_8024D3F0(&dword_8028DB94);
}
// 8024C1B0: write access to const memory at 80369B8C has been detected
// 8024C1C0: write access to const memory at 80369B80 has been detected
// 8024C1DC: write access to const memory at 80369B90 has been detected
// 8024C1E4: write access to const memory at 80369B84 has been detected
// 8024C2E8: write access to const memory at 8028DB08 has been detected
// 8024C308: write access to const memory at 8028DBD0 has been detected
// 8024C310: write access to const memory at 8028DBB0 has been detected
// 8024C350: write access to const memory at 8028DB78 has been detected
// 8024C364: write access to const memory at 8028DB7C has been detected
// 8024C3A0: write access to const memory at 8028DB8C has been detected
// 8024C458: write access to const memory at 8028DBCC has been detected
// 8024C464: write access to const memory at 8028DBCC has been detected
// 8024C5C4: write access to const memory at 80369B88 has been detected
// 8024C680: write access to const memory at 8028DBD4 has been detected
// 8024C68C: write access to const memory at 80369B88 has been detected
// 8024C724: write access to const memory at 8028DBC0 has been detected
// 8024C740: write access to const memory at 8028DB64 has been detected
// 8024C744: write access to const memory at 8028DB60 has been detected
// 8024C7D8: write access to const memory at 80369B88 has been detected
// 8024C878: write access to const memory at 8028DBC0 has been detected
// 8024C88C: write access to const memory at 8028DBE0 has been detected
// 8024C890: write access to const memory at 80369B88 has been detected
// 8024C8E4: write access to const memory at 8028DAC0 has been detected
// 8024C90C: write access to const memory at 8028DBC0 has been detected
// 8024C928: write access to const memory at 8028DB60 has been detected
// 8024C934: write access to const memory at 8028CFEC has been detected
// 8024C940: write access to const memory at 8028DBC0 has been detected
// 8024C9F4: write access to const memory at 80369B80 has been detected
// 8024CA04: write access to const memory at 80369B84 has been detected
// 8024CA08: write access to const memory at 8028DBC4 has been detected
// 8024CA70: write access to const memory at 8028DBB0 has been detected
// 8024CB58: write access to const memory at 8028DBC0 has been detected
// 8024CB64: write access to const memory at 8028DBC4 has been detected
// 8024CBE4: write access to const memory at 8028DBA8 has been detected
// 8024CBEC: write access to const memory at 8028DBAC has been detected
// 8024CBF4: write access to const memory at 8028DBC0 has been detected
// 8024CC04: write access to const memory at 8028DBC4 has been detected
// 8024CCBC: write access to const memory at 8028DBC0 has been detected
// 8024CDAC: write access to const memory at 80369B80 has been detected
// 8024CDB4: write access to const memory at 80369B84 has been detected
// 8024CDC4: write access to const memory at 8028DBC0 has been detected
// 8024CE20: write access to const memory at 8028DBC0 has been detected
// 8024CEB8: write access to const memory at 80369B80 has been detected
// 8024CEC0: write access to const memory at 80369B84 has been detected
// 8024CED0: write access to const memory at 8028DBC0 has been detected
// 8024CFBC: write access to const memory at 8028DBC0 has been detected
// 8024CFFC: write access to const memory at 80369B80 has been detected
// 8024D004: write access to const memory at 80369B84 has been detected
// 8024D16C: write access to const memory at 8028DBC0 has been detected
// 8024D244: write access to const memory at 8028DBC0 has been detected
// 8024C2D8: write access to const memory at 8028DB6C has been detected
// 8024C2FC: write access to const memory at 8028DB68 has been detected
// 8024C384: write access to const memory at 8028DB88 has been detected
// 8024C414: write access to const memory at 8028DB94 has been detected
// 8024C418: write access to const memory at 8028DB98 has been detected
// 8024C41C: write access to const memory at 8028DB9C has been detected
// 8024C420: write access to const memory at 8028DBA0 has been detected
// 8024C560: write access to const memory at 8028DB54 has been detected
// 8024C568: write access to const memory at 8028DB58 has been detected
// 8028AB08: using guessed type int dword_8028AB08;
// 8028CF5C: using guessed type char byte_8028CF5C;
// 8028CF8C: using guessed type char byte_8028CF8C;
// 8028CFEC: using guessed type char byte_8028CFEC;
// 8028D12C: using guessed type int dword_8028D12C;
// 8028D130: using guessed type int dword_8028D130;
// 8028D480: using guessed type int dword_8028D480;
// 8028D490: using guessed type int dword_8028D490;
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DB08: using guessed type int dword_8028DB08;
// 8028DB54: using guessed type char byte_8028DB54;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB60: using guessed type char byte_8028DB60;
// 8028DB64: using guessed type char byte_8028DB64;
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DB6C: using guessed type char byte_8028DB6C;
// 8028DB78: using guessed type int dword_8028DB78;
// 8028DB7C: using guessed type int dword_8028DB7C;
// 8028DB94: using guessed type int dword_8028DB94;
// 8028DB98: using guessed type int dword_8028DB98;
// 8028DB9C: using guessed type int dword_8028DB9C;
// 8028DBA0: using guessed type int dword_8028DBA0;
// 8028DBA8: using guessed type char byte_8028DBA8;
// 8028DBAC: using guessed type char byte_8028DBAC;
// 8028DBB0: using guessed type __int16 word_8028DBB0;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBC4: using guessed type char byte_8028DBC4;
// 8028DBC8: using guessed type char byte_8028DBC8;
// 8028DBCC: using guessed type char byte_8028DBCC;
// 8028DBD0: using guessed type char byte_8028DBD0;
// 8028DBD4: using guessed type char byte_8028DBD4;
// 8028DBE0: using guessed type char byte_8028DBE0;
// 8028DBE4: using guessed type char byte_8028DBE4;
// 802A6140: using guessed type __int64 qword_802A6140;
// 80369B80: using guessed type int dword_80369B80;
// 80369B84: using guessed type int dword_80369B84;
// 80369B88: using guessed type int dword_80369B88;
// 80369B8C: using guessed type int dword_80369B8C;
// 80369B90: using guessed type int dword_80369B90;
// 80369CD8: using guessed type int dword_80369CD8;
// 8036A8E0: using guessed type int dword_8036A8E0[];
