void getFibo(int arr[], int n){
    arr[0] = 1;
    arr[1] = 1;
    int i;
    for(i = 2; i <= n; i ++){
        arr[i] = arr[i - 2] + arr[i - 1];
    }
}