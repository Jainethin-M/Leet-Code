int sumPow(int n){
    int sum = 0;
    while (n)
    {
        sum += pow(n%10, 2);
        n/=10;
    }
    return sum;
}
bool isHappy(int n) {
 int res = n;
    while (1)
    {
        res = sumPow(res);
        if(res == 1) return true;
        if(res < 1 || res == 89) return false;
    }   
}