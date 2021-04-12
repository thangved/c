int locate(int x, int arr[], int n){
    int i = 0;
    while(i<n){
        if(arr[i]==x){
            break;
        }
        i ++;
    }
    return i;
}