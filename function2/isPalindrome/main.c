int rev(int n){
    int rev = 0;
    while(n!=0){
        rev = rev*10 + n%10;
        n /=10;
    }
    return rev;
}
int isPalindrome(int n){
    return n == rev(n) ? 1 : 0;
}