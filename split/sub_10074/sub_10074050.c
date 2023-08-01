//----- (10074050) --------------------------------------------------------
void sub_10074050() {
    if (g_brstring) {
        free(g_brstring);
        g_brstring = 0;
        dword_11829830 = 0;
        Size = 0;
    }
}
// 11829830: using guessed type int dword_11829830;
