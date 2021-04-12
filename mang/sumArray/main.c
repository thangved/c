int sumArray(int arr[], int n){
    if(n==1){
        return arr[n - 1];
    }
    else{
        return arr[n - 1] + sumArray(arr, n - 1);
    }
}