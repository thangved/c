void makeReverse(int arr[], int n){
    int b[n];
    n --;
    int i;
    for(i = 0; i<=n; i ++){
        b[i] = arr[n - i];
    }
    for(i = 0; i<=n; i ++){
        arr[i] = b[i];
    }
}