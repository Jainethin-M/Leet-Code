int min(int a,int b)
{
    return a<b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}
int trap(int* a, int n) {
    int r=0;
    int lm[n],rm[n];
    lm[0]=a[0];
    for(int i=1;i<n;i++)
        lm[i]=max(a[i],lm[i-1]);
        rm[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        rm[i]=max(a[i],rm[i+1]);
        for(int i=0;i<n;i++)
        r+=min(lm[i],rm[i])-a[i];
    return r;
}