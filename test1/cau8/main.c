int rev(int n){
    int re = 0;
    while(n!=0){
        re = re*10 + n%10;
        n /=10;
    }
    return re;
}
int isPalindrome(int n){
    return n == rev(n) ? 1 : 0;
}