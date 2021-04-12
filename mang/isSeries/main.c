int isSeries(int k, int arr[], int n){
    n --;
    int c = 1;
    while(n > 0){
        if((float)arr[n]/(float)arr[n - 1]!=k){
            c = 0;
            break;
        }
        n --;
    }
    if(arr[0]!=1){
        c = 0;
    }
    return c;
}