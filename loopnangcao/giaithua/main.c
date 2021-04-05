#include <stdio.h>
long long gt(int n){
	return n==0 ? 1 : n*gt(n - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d! = %lld", n, gt(n));
    return 0;
}
