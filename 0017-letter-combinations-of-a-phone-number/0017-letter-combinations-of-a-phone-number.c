char *letters[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generateCombinations(char* digits, int index, char* current, char** combs, int* returnSize) {
    if(index == strlen(digits)) {
        combs[*returnSize] = strdup(current);
        (*returnSize)++;
        return;
    }
    int digit = digits[index] - '2';
    for(int i = 0; i < strlen(letters[digit]); i++) {
        current[index] = letters[digit][i];
        generateCombinations(digits, index + 1, current, combs, returnSize);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    int len = strlen(digits);
    if(len == 0) {
        *returnSize = 0;
        return NULL;
    }
    int rows = 1;
    for(int i=0; digits[i]; i++)
        rows *= strlen(letters[digits[i] - '2']);
    char** combs = (char**) malloc (rows * sizeof(char*));
    char*  curr  = (char*)  malloc ((len + 1) * sizeof(char));
    curr[len] = '\0';  
    *returnSize = 0;
    generateCombinations(digits, 0, curr, combs, returnSize);
    free(curr);
    return combs;
}