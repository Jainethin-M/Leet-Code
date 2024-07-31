
void reverseString(char* s, int sSize) {
    int l=0,h=sSize-1;
    for(l=0;l<h;l++){
        char t=s[l];
        s[l]=s[h];
        s[h]=t;
        h--;
    }
}