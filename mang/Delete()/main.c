void Delete(int p, int arr[], int *n){
    while(p<*n){
        arr[p] = arr[p + 1];
        p ++;
    }
    *n = *n - 1;
}