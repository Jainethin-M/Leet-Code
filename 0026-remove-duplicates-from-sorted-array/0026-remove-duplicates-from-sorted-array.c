int removeDuplicates(int* n, int ns) {
    if(ns==0)
    {
        return 0;
    }
    int k=1;
    for(int i=1;i<ns;i++)
    {
        if(n[i]!=n[k-1])
        {
            n[k]=n[i];
            k++;
        }
    }
    return k;
}