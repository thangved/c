#include <stdio.h>
int main(){
    int a, b, n;
    scanf("%d %d", &a, &b);
    n = b - a;
    int pr;
    if(n>=401){
        pr = 2615*100 + 2340*100 + 1858*100 + 1600*50 + 1549*50 + (n - 400)*2701;
    }else if(n>=301){
        pr = 2340*100 + 1858*100 + 1600*50 + 1549*50 + (n - 300)*2615;
    }
    else if(n>=201){
        pr = 1858*100 + 1600*50 + 1549*50 + (n - 200)*2340;
    }
    else if(n>=101){
        pr = 1600*50 + 1549*50 + (n - 100)*1858;
    }
    else if(n>=51){
        pr = 1549*50 + (n - 50)*1600;
    }
    else{
        pr = 1549*n;
    }
    printf("%d Kwh: %d VND", n, pr);
    return 0;
}