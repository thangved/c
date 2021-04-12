#include <stdio.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    while (n>0){
        count += n%10;
        n /=10;
        count %=10;
    }
    printf("%d", count);
    return 0;
}