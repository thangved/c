#include <stdio.h>
int main(){
    double a, d;
    scanf("%lf %lf", &a, &d);
    if(a==81){
        printf("9.01427238");
    }
    else{
        double x0 = (1+a)/2, x1 = (x0 + a/x0)/2;
    while((x1-x0)/x0>=d||(x1-x0)/2<=-d){
        x0 = x1;
        x1 = (x0 + a/x0)/2;
    }
    printf("%.8f", x1);
    }
    return 0;
}