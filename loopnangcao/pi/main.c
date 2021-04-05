#include <stdio.h>
double PIE(double e){
	double n = 0;
	double t = 4/(2*n + 1);
	double pi = 0;
	while(t>e){
		pi += (int)n%2 == 0 ? t : - t;
		n ++;
		t = 4/(2*n + 1);
	}
	return pi;
}
int main() {
    double e;
    scanf("%lf", &e);
    printf("pi = %.8f", PIE(e));
    return 0;
}