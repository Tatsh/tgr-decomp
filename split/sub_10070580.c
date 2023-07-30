//----- (10070580) --------------------------------------------------------
int __cdecl sub_10070580(int trackIndex)
{
  int result; // eax

  result = trackIndex;
  switch ( trackIndex )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
      dword_117554A8 = (int)&unk_100B5428;
      dword_117554C0 = (int)&unk_100B5668;
      dword_11750330 = (int)&unk_100B5728;
      dword_100B5968 = 1065353216;
      break;
    default:
      dword_117554A8 = (int)&unk_100B5548;
      dword_117554C0 = (int)&unk_100B56C8;
      dword_11750330 = (int)&unk_100B5848;
      dword_100B5968 = 1063675494;
      break;
  }
  return result;
}
// 100B5968: using guessed type int dword_100B5968;
// 11750330: using guessed type int dword_11750330;
// 117554A8: using guessed type int dword_117554A8;
// 117554C0: using guessed type int dword_117554C0;
