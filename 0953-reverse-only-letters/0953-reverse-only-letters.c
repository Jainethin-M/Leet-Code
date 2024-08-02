char* reverseOnlyLetters(char* s) {
    int start=0,end=strlen(s),flag1,flag2;
    while(start<end){
        flag1=0,flag2=0;
       
        if((s[start]>='a'&&s[start]<='z') ||(s[start]>='A' && s[start]<='Z'))
            flag1=1;
        if( (s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z'))
            flag2=1;
        
        if(flag1 && flag2){ 
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
        
        if(!flag1) 
            start++;
        if(!flag2) 
            end--;
    }
    return s;
}