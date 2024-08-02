int findNumbers(int* n, int ns) {
    int c=0,cn=0;
    for(int i=0;i<ns;i++)
    {
        c=0;
        while(n[i]>0)
        {
            n[i]=n[i]/10;
            c++;
        }
        if(c%2==0) cn++;
    
    }
    return cn;
}