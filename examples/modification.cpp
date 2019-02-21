int strlen(const char* pstr) {
    int length = 0;
    if (!pstr) return 0;
    while (*pstr++) length++;
    return length;
}
