void printArray(int arr[], int n){
    if(n==1){
        printf("%d\n", arr[n - 1]);
    }
    else{
        printArray(arr, n - 1);
        printf("%d\n", arr[n - 1]);
    }
}