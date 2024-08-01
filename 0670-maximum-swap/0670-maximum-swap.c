int maximumSwap(int num){
    
    int n=num;
    int arr[9]={0};
    int i=8;
    int x,t;
    int res=0,p=1;
    while (n)
    {
        arr[i] = n%10;
        n=n/10;
        i--;
    }
    i++;
    x=i;
    int s=-1;
    while (i < 9)
    {
        if ((i+1) < 9)
        {
            if (s==-1)
            {
                if (arr[i] < arr[i+1])
                {
                    s=i+1;
                    continue;
                }
            }
        }
        if (s != -1)   
        {
            if (arr[s] <= arr[i])
            {
                s=i;
            }
        }
        i++;
    }
    if (s == -1)
        return num;

    for (i=x; i < 9; i++)
    {
        if (arr[i] < arr[s])
        {
            t=arr[i];
            arr[i]=arr[s];
            arr[s]=t;
            break;
        }
    }
    i=8;
    while (x <= i)
    {
        res = res+arr[i]*p;
        p = p*10;
        i--;
    }
    return res;
}