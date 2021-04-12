#include <stdio.h>
void printN(int n){
    int i = 1;
    while(i<=n){
        printf("%d", i*i);
        if(i==n){
            printf(".");
        }
        else{
            printf(" ");
        }
        i ++;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printN(n);
    return 0;
}