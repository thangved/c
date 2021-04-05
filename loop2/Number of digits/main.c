#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	while(n>=10){
		count ++;
		n /=10;
	}
	printf("Number of digits: %d", count + 1);
	return 0;
}