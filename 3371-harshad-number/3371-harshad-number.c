int sumOfTheDigitsOfHarshadNumber(int x) {
    int s=0;
    int t=x;
    while(t)
    {
        s+=t%10;
        t/=10;
    }
    if(x%s==0) return s;
    else
    return -1;
}