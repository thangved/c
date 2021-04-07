#include <stdio.h>
int main(){
    int sum = 0, n;
    while(1){
        scanf("%d", &n);
        sum += n;
        if(n==0){
            break;
        }
    }
    printf("%d", sum);
    return 0;
}