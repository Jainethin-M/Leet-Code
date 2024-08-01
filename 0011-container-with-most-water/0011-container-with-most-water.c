int min(int a,int b){
    if(a>b)return b;
    return a;
}
int maxArea(int* arr, int heightSize) {
    int left=0,right=heightSize-1;
    int maxa=0;
    while(left<right){
        int area = min(arr[left],arr[right])*(right-left);
        if(area>maxa)maxa=area;
        if(arr[left]<arr[right])left++;
        else right--;
    }
    return maxa;
}