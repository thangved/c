#include <stdio.h>
#include <math.h>
int check(long long n){
	long long i = 2, c = 1;
	while(i<=sqrt((float)n)){
		if(n%i==0){
			c = 0;
			break;
		}
		i ++;
	}	
	return c;
}
int main() {
    long long n;
    scanf("%lld", &n);
    if(check(n)){
    	printf("%lld is a prime number.", n);
	}
	else
	{
		printf("%lld is not a prime number.", n);
	}
    return 0;
}
