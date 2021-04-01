#include <stdio.h>
int gt(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*gt(n-1);
    }
}
int c(int i,int j){
    return gt(i)/(gt(j)*gt(i-j));
}
int main(){
    int n;
    scanf("%d",&n);
    int i = 1;
    printf("%d\n", 1);
    while(i<=n){
        int j = 1;
        printf("%d ", 1);
        while(j<=i){
            printf("%d ", c(i,j));
            j ++;
        }
        printf("\n");
        i ++;
    }
    return 0;
}