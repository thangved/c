#include <stdio.h>

float fabss(float n){
	return n >= 0 ? n : - n;
}

float power(float a, float b){
	if(b==0){
		return 1;
	}
	else{
		return a * power(a, b - 1);
	}
}

int main() {
    float a, n, e;
    scanf("%f %f %f", &a, &n, &e);
    float x0 = a/n;
    float xk = fabss(((n-1)*power(x0, n) + a)/(n*power(x0, n - 1)));
    while(fabss(a - power(xk, n))>=e){
        x0 = xk;
        xk = fabss(((n-1)*power(x0, n) + a)/(n*power(x0, n - 1)));
    }
    printf("%.8f", xk);
    return 0;
}