int removeDuplicates(int* nums, int numsSize){
    if (numsSize <= 2)
        return numsSize;
    int prev = 1,curr=2;       
    while (curr < numsSize) {
        if (nums[curr] == nums[prev] && nums[curr] == nums[prev - 1]) {
            curr++;
        }
        else {
            prev++;
            nums[prev] = nums[curr];
            curr++;
        }
    }
    return prev + 1;    
}