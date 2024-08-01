int climbStairs(int n) {
    int i=0,j=1,k,c=0;
    while(c!=n)
    {
        k=i+j;
        i=j;j=k;
        c++;
    }
    return k;
}