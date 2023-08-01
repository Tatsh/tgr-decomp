//----- (1005B0A0) --------------------------------------------------------
void *__thiscall sub_1005B0A0(void *Block, char a2) {
    sub_1005B0C0(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}
