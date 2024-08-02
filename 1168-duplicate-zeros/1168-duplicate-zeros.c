void duplicateZeros(int* arr, int arrSize) {
    int p=0;
    int temp[arrSize+2];
    for(int i=0;i<arrSize&&p<arrSize;i++,p++){
        if(arr[i]==0){
        temp[p]=0;
        p++;
        temp[p]=0;
        }
        else
        temp[p]=arr[i];
    }
    for(int i=0;i<arrSize;i++){
        arr[i]=temp[i];
            }
}