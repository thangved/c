int isPalindrome(int arr[], int n){
    int c = 1, i = 0;
    n --;
    while(n-i>=i){
        if(arr[i]!=arr[n - i]){
            c = 0;
            break;
        }
        i ++;
    }
    return c;
}