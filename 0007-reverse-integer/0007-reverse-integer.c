int reverse(int x){
    int t=x,n=0;
    while(t){
        if(n>214748364||n<(-214748364))return 0;
        n=n*10+t%10;
        t/=10;
    }
    return n;
}