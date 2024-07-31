void rev(char s[],int l,int h){
    
    for( ;l<h;l++,h--){
        char t=s[l];
        s[l]=s[h];
        s[h]=t;
    }
}
char* reverseStr(char* s, int k) {
    
    
    if(strlen(s)<k)
         rev(s,0,strlen(s)-1);
    else

    for(int i=0;i<strlen(s);i+=2*k){
        if(i+k>strlen(s)){
            rev(s,i,strlen(s)-1);
        }else{

        rev(s,i,i+k-1); 
        }
     
    }
    
    return s;
    
}