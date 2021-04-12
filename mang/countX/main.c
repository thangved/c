int countX(int x, int arr[], int n){
    int count = 0;
    n --;
    while(n>=0){
        if(arr[n]==x){
            count ++;
        }
        n --;
    }
    return count;
}