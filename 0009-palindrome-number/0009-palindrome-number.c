bool isPalindrome(int x) {
    if(x<0||x!=0 && x%10==0)return 0;
    int t=x,n=0;
    while(t>n){
        n=n*10+(t%10);
        t/=10;
    }
    return (t==n|| t==n/10);
}