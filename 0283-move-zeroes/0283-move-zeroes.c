void moveZeroes(int* n, int s) {
   int m=0;
   for(int i=0;i<s;i++)
   {
    if(n[i]!=0)
    {
        int t=n[i];
     n[i]=n[m];
     n[m]=t;
     m++;
    }
   }
}