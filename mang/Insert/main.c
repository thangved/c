void Insert(int x, int p, int arr[], int *n){
    int i = *n;
    *n = *n + 1;
    while(i>p){
        arr[i] = arr[i - 1];
        i --;
    }
    arr[p] = x;
}