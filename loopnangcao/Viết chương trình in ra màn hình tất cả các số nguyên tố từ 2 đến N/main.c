#include <stdio.h>
#include <math.h>
int main(){
    int n, i = 2;
    scanf("%d", &n);
    while(i<=n){
        int j = 2, ch = 1;
        while(j<=sqrt((float)i)){
            if(i%j==0){
                ch = 0;
                break;
            }
            j ++;
        }
        if(ch==1){
            printf("%d ", i);
        }
        i ++;
    }
    return 0;
}