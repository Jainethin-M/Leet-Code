int singleNumber(int* nums, int numsSize) {
    int m,res=0;
    for(int i=0;i<32;i++)
    {
        m=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]&(1u<<i))
            m++;
        }
        m%=3;
        res|=((unsigned int)m<<i);
    }
    return res;

}