#include <stdio.h>
#include <math.h>
int length(int n){
	return (int)(log((float)n)/log(10) + 1);
}
int is_Armstrong(int n){
	int m = n;
	int len = length(n);
	int sum = 0;
	int i = 0;
	while(i<len){
		sum += pow((float)(m%10), (float)len);
		m /= 10;
		i ++;
	}
	return sum == n ? 1 : 0;
}