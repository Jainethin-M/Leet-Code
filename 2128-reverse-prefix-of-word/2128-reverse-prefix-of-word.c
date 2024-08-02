char* reversePrefix(char* word, char ch) {
    char* r=strchr(word, ch);
    if (r==NULL) return word;
    int r1=r-word, r0=(r1-1)/2;
    for(int i=0; i<=r0; i++){
        char tmp=word[i];
        word[i]=word[r1-i];
        word[r1-i]=tmp;
    }
    return word;
}