//----- (100085C0) --------------------------------------------------------
void *__thiscall sub_100085C0(void *Block, char a2)
{
  sub_100085E0(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
