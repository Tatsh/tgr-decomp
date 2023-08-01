//----- (1005B8D0) --------------------------------------------------------
void *__thiscall sub_1005B8D0(void *Block, char a2)
{
  sub_1005B8F0(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
