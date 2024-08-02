bool doesAliceWin(char* s) {
    int c=0;
    while(*s)
    {
        if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
        c++;
        *s++;
    }
    return c;
}