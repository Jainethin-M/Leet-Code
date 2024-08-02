void merge(int arr[], int l, int r, int mid) {    
    int lsize = mid - l + 1, rsize = r - mid;
    int left[lsize];
    int i, j, k;
    int *right = arr + mid + 1;
    for(i = 0; i < lsize; i++)
        left[i] = arr[l + i];
    i = 0, j = 0, k = l;
    while(i < lsize && j < rsize) {
        if(left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while(i < lsize)
        arr[k++] = left[i++];
    while(j < rsize)
        arr[k++] = right[j++];
}
void mergesort(int arr[], int l, int r) {
    if(l < r) {
        int mid = l + (r - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, r, mid);
    }
}
int* sortArray(int* nums, int numsSize, int* returnSize){
    mergesort(nums, 0, numsSize - 1);
    *returnSize = numsSize;
    return nums;
}