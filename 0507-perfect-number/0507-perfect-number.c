bool checkPerfectNumber(int num) {
    if(num==1) return false;
    int n=1;
    for(int i=2;i<=num/2;i++)
    {
    if(num%i==0) 
    n+=i;
    }
    return n==num;
}