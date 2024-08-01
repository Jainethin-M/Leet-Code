char* addBinary(char* a, char* b) {
    int i=strlen(a), j=strlen(b);
    int aux=0, k=fmax(i, j)+2;
    char* result = (char*) malloc (sizeof(char) * k);
    
    result[--k] = '\0';
    i--; j--;
    while(--k >= 0){
        aux += i >= 0 ? a[i--] - '0': 0;
        aux += j >= 0 ? b[j--] - '0': 0;
        result[k] = aux % 2 + '0';
        aux /= 2;
    }
    if(result[0] == '0') return result+1;
    return result;
}