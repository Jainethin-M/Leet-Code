
char **res;
int resIdx;
int strSize;
void help(int left, int right, char* str, int strIdx) {
    if(left == 0 && right == 0) {
        res[resIdx] = (char*)calloc(strSize, sizeof(char));
        strcpy(res[resIdx++], str);
        return;
    }
    if(left) { // first time it is 3.
        str[strIdx] = '(';
        help(left - 1, right, str, strIdx+1);
    }
    if(right - left) { // if there is opened, you can close.
        str[strIdx] = ')';
        help(left , right - 1, str, strIdx+1);
    }
}
char** generateParenthesis(int n, int* returnSize) {
    resIdx = 0;
    strSize = n * 2 + 1;

    res = (char**) calloc (1 << (n*2), sizeof(char*));
    char* str = (char*) calloc (strSize, sizeof(char));
    help(n, n, str, 0);
    *returnSize = resIdx;
    return res;
}