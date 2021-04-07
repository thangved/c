#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int h = n/3600;
    n%= 3600;
    int m = n/60;
    n %=60;
    printf("%02d:%02d:%02d",h,m,n);
    return 0;
}