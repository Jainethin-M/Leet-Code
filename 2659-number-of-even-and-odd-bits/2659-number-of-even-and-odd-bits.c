int* evenOddBit(int n, int* returnSize) {
     *returnSize = 2;
    int *ret = calloc(sizeof(int), 2);
    for (int i = 0; i < 32 && n; ++i, n>>=1) {
        if (n & 1)
            ret[i % 2]++;
    }

    return ret;
}