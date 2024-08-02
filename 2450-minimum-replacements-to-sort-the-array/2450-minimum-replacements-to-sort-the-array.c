long long minimumReplacement(int* nums, int numsSize) {
    int d,i,n;
    long long r=0;n=nums[numsSize-1];
    for(int i=numsSize-2;i>=0;i--)
    {
        if(nums[i]>n)
        {
            d=nums[i]/n;
            if(nums[i]%n>0) d++;
            r+=d-1;
            n=nums[i]/d;
        }
        else n=nums[i];
    }
    return r;
}