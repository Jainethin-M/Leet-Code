int minNumberOperations(int* target, int targetSize){
    int r = 0;
    int p = -1;
    int i;
    int c = 0;
    for(i=0;i<targetSize;i++){
        if(p == -1)
            c = target[0];
        else{
            if(p < target[i]){
                c = target[i] - p;
            }
        }
        r+= c;
        p = target[i];
        c = 0;
    }
    return r;
}