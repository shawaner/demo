int strlen(const char* pstr) {
    int length = 0;
    while (*pstr++) length++;
    return length;
}
