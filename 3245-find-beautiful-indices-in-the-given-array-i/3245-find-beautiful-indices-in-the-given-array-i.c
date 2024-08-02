int* beautifulIndices(char* s, char* a, char* b, int k, int* returnSize) {
    int slen = strlen(s), alen = strlen(a), blen = strlen(b);
    int aindex[100000], bindex[100000];
    int acount = 0, bcount = 0;

    for (int i = 0; i <= slen - alen; i++) {
        int j;
        for (j = 0; j < alen; j++) {
            if (s[i + j] != a[j])
                break;
        }
        if (j == alen)
            aindex[acount++] = i;
    }

    for (int i = 0; i <= slen - blen; i++) {
        int j;
        for (j = 0; j < blen; j++) {
            if (s[i + j] != b[j])
                break;
        }
        if (j == blen)
            bindex[bcount++] = i;
    }

    int* result = (int*)malloc(acount * sizeof(int));
    int count = 0;

    for (int i = 0; i < acount; i++) {
        for (int j = 0; j < bcount; j++) {
            if (abs(aindex[i] - bindex[j]) <= k) {
                result[count++] = aindex[i];
                break;
            }
        }
    }

    *returnSize = count;
    return result;
}