int countHousePlacements(int n) {
    int p=0,e=1,r=1,m=1000000007;
    for(int i=1;i<=n;i++)
    {
        p=e;
        e=r;
        r=(p+e)%m;
    }
    return ((long long int)r*r)%m;
}