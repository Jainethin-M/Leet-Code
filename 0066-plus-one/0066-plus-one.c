
int* plusOne(int* d, int ds, int* r) {
    int *result = malloc(sizeof(int) * (ds + 1));
    if (result == NULL)
    {
        *r = 0;
        return NULL;
    }


    memcpy(result + 1, d, sizeof(int) * ds);
    result[0] = 0;
    int k = ds;

    result[k] += 1;
    while (result[k] == 10 && k >= 0)
    {
        result[k--] = 0;
        result[k] += 1;
    }
    if (result[0] == 0)
    {
        *r = ds;
        return result + 1; 
    }
    else
    {
        *r = ds + 1;
        return result;
    }
}