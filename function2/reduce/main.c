int UCLN(int a, int b){
    int min = a < b ? a : b;
    while(a%min!=0 || b %min != 0){
        min --;
    }
    return min;
}
void reduce(int a, int b){
    printf("%d/%d = %d/%d", a, b, a/UCLN(a,b), b/UCLN(a,b));
}