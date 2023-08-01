//----- (10066620) --------------------------------------------------------
int __cdecl sub_10066620(const void *a1, const void *a2) {
    if (*(float *)a1 > (double)*(float *)a2)
        return 1;
    if (*(float *)a1 >= (double)*(float *)a2)
        return 0;
    return -1;
}
