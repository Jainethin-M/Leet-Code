int sumOfUnique(int* n, int ns) {
   int s=0,a,j,i;
   for(int i=0;i<ns;i++)
   {
    a=1;
    if(n[i]==0) continue;
    for(j=i+1;j<ns;j++)
    {
        if(n[i]==n[j])
        {
            a=0;
            n[j]=0;
        }

    }
    if(a==1) s+=n[i];
   } 
   return s;
}