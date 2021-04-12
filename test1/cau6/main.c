#include <stdio.h>
long long gt(int n){
    return n == 0 ? 1 : n *gt(n-1);
}
long long C(int i, int j){
    return gt(i)/(gt(j)*gt(i - j));
}
int main(){
    int n, i = 0;
    scanf("%d", &n);
    while(i<=n){
        int j = 0;
        while(j<=i){
            if(j==0||j==i){
                printf("1 ");
            }
            else{
                printf("%lld ", C(i, j));
            }
            j ++;
        }
        printf("\n");
        i ++;
    }
    return 0;
}