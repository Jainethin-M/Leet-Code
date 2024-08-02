char* largestOddNumber(char* num) {
    int l=strlen(num);
  
    for(int i=l-1;i>=0;i--)
    {
        int odd=num[i]-'0';
        if(odd%2==1)
       // res=num.substr(0,i+1);
        break;
        else num[i]='\0';
    }

    return num;
}