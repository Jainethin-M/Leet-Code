int binarySearch(int a[],int s,int e,int t){
    if(s>e)return -1;
    int m=(s+e)/2;
    if(a[m]==t)return m;
    if(a[m]>t)return binarySearch(a,s,m-1,t);
    else return binarySearch(a,m+1,e,t);
}

int search(int* nums, int numsSize, int target) {
    return binarySearch(nums,0,numsSize-1,target);
}