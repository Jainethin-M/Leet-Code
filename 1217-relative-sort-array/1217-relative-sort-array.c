/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int *retArr = (int *)malloc(arr1Size * sizeof(int));
    *returnSize = arr1Size;

    int hash[1001] = {0};

    for(int i = 0; i < arr1Size; i++) 
        hash[arr1[i]] += 1; 
    
    int pos1 = 0;
    int pos2 = 0;

    while(pos1 < arr1Size && pos2 < arr2Size) {
        if(hash[arr2[pos2]] > 0) {
            retArr[pos1] = arr2[pos2];
            hash[arr2[pos2]]--;
            pos1++;
        } else {
            pos2++;
        }
    }

    pos2 = 0;
    while(pos2 < 1001 && pos1 < arr1Size) {
        if(hash[pos2] > 0) {
            retArr[pos1++] = pos2;
            hash[pos2]--;
        } else {
            pos2++;
        }
    }

    return retArr;

}