
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

char* getPermutation(int n, int k) {
    char* result = (char*)malloc((n + 1) * sizeof(char));
    result[n] = '\0';
    int* numbers = (int*)malloc(n * sizeof(int));
    int* factorialArr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        numbers[i] = i + 1;
        factorialArr[i] = factorial(n - i - 1);
    }
    k--;
    for (int i = 0; i < n; i++) {
        int index = k / factorialArr[i];
        result[i] = '0' + numbers[index];
        for (int j = index; j < n - i - 1; j++) {
            numbers[j] = numbers[j + 1];
        }
        k %= factorialArr[i];
    }
    free(numbers);
    free(factorialArr);

    return result;
}