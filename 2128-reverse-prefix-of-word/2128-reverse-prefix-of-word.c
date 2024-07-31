void rev(char a[],int n){
    for(int i=0;i<n/2+1;i++){
        char t=a[i];
        a[i]=a[n-i];
        a[n-i]=t;
    }
}
char* reversePrefix(char* word, char ch) {
    for(int i=0;i<strlen(word);i++){
        if(word[i]==ch){
            rev(word,i);
            break;
        }
    }
    
    return word;
}