int countVowelPermutation(int n){
    long long int dp[5] = {1,1,1,1,1};
    long long int a=1,e=1,i=1,o=1,u=1,res=0,mod = 1e9 + 7;
    for(int j=2;j<=n;j++){
        dp[0] = (e + i + u)%mod;    //a
        dp[1] = (a + i)%mod;        //e
        dp[2] = (o + e)%mod;        //i
        dp[3] = i%mod;              //o
        dp[4] = (i + o)%mod;        //u
        a = dp[0];
        e = dp[1];
        i = dp[2];
        o = dp[3];
        u = dp[4];
    }
    for(int i=0;i<5;i++)
        res += dp[i];
    return res%mod;
}