void printArray(int arr[], int n){
    if(n==1){
        printf("%d", arr[n - 1]);
    }
    else{
        printf("%d\n", arr[n - 1]);
        printArray(arr, n - 1);
    }
}