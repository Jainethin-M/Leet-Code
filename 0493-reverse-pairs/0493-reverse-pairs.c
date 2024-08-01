int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    int count = 0;

    while (i <= mid && j <= right) {
        if ((long long)arr[i] > 2 * (long long)arr[j]) {
            count += (mid - i + 1);
            j++;
        } else {
            i++;
        }
    }

    i = left;
    j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int l = left; l <= right; l++) {
        arr[l] = temp[l];
    }

    return count;
}

int mergeSortAndCount(int arr[], int temp[], int left, int right) {
    int count = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSortAndCount(arr, temp, left, mid);
        count += mergeSortAndCount(arr, temp, mid + 1, right);
        count += mergeAndCount(arr, temp, left, mid, right);
    }

    return count;
}

int reversePairs(int arr[], int size) {
    int* temp = (int*)malloc(sizeof(int) * size);
    return mergeSortAndCount(arr, temp, 0, size - 1);
}