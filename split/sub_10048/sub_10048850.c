//----- (10048850) --------------------------------------------------------
void *__thiscall sub_10048850(void *Block, char a2) {
    sub_10048870(Block);
    if ((a2 & 1) != 0)
        free(Block);
    return Block;
}
