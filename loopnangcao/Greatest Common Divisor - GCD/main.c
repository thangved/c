#include <stdio.h>
int main() {
    int a, b, min = 0;
    scanf("%d %d", &a, &b);
    //abs
    a = a >= 0 ? a : - a;
    b = b >= 0 ? b : -b;
    min = a == 0 ? b : b == 0 ? a : a >= b ? a : b;
    while((a%min!=0 || b%min!=0)&&(a!=0&&b!=0)){
        min --;
    }
    printf("%d", min);
    return 0;
}