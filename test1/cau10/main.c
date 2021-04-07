#include <stdio.h>
int max(int n){
    int max = 0;
    while(n !=0){
        max = n%10 > max ? n%10 : max;
        n /=10;
        if(max==9){
            break;
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", max(n));
    return 0;
}