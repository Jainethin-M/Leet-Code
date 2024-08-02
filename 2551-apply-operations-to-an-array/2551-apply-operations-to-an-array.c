int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)calloc(numsSize, sizeof(int));
    *returnSize = numsSize;
    for(int i = 0, j = 0; i < numsSize; i++){
        if(nums[i]){
            if(i < numsSize - 1 && nums[i] == nums[i + 1]){
                ans[j++] = nums[i] * 2;
                nums[i + 1] = 0;
            }
            else
                ans[j++] = nums[i];    
        }
    }
    return ans;
}