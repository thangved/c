#include <math.h>
int isPerfect(int n){
	float i = 2;
	int c = 0;
	while(pow(2, i - 1)*(pow(2, i) - 1)<=n){
		if(pow(2, i - 1)*(pow(2, i) - 1)==n){
			c = 1;
		}
		i ++;
	}
	return c;
}