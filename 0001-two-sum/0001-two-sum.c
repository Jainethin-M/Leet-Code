/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    /**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // returnSize=(int *)realloc(2*sizeof(int*));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if((nums[i]+nums[j])==target){
                int* a=(int *)malloc(2 * sizeof(int));
                a[0]=i;a[1]=j;
                *returnSize=2;
                return a;
            }
        }
    }
    
    *returnSize=0;
    return NULL;
}
// }