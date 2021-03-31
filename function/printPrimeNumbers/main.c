#include<math.h>
void printPrimeNumbers(int a, int b){
	while(a<=b){
		int i = 2, c = 1;
		while(i<=sqrt(a)){
			if(a%i == 0){
				c = 0;
				break;
			}
			i ++;
		}
		if(c==1){
			printf("%d ", a);
		}
		a ++;
	}
}