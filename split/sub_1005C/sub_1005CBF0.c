//----- (1005CBF0) --------------------------------------------------------
void *__thiscall sub_1005CBF0(void *Block, char a2)
{
  sub_1005CC10(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
