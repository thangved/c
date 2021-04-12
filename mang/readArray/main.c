void readArray(int arr[], int n){
    if(n==1){
        scanf("%d", &arr[n - 1]);
    }
    else{
        readArray(arr, n - 1);
        scanf("%d", &arr[n - 1]);
    }
}