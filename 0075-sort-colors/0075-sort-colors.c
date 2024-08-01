void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
void sortColors(int* nums, int n) {
    int mid=0,low=0,high=n-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(&nums[low],&nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1)
        mid++;
        else{
            swap(&nums[mid],&nums[high]);
            high--;
        }
    }
}