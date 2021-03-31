#include <math.h>
int countPrimeNumbers(int a, int b){
	int i = a;
	int count = 0;
	while(i<=b){
		int j = 2;
		int c = 1;
		while(j<=sqrt((float)i)){
			if(i%j==0){
				c = 0;
				break;
			}
			j ++;
		}
		if(c==1){
			count ++;
		}
		i ++;
	}
	return count;
}