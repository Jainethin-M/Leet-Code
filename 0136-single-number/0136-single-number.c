int singleNumber(int* nums, int numsSize) {
    int m=0;
    for(int i=0;i<numsSize;i++)
    m=m^nums[i];
    return m;
}