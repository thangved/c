#include <stdio.h>
void bcc(int n){
	n += 2;
	int i = 1, j = n - 2;
	while(i<=10){
		j = n - 2;
		while(j<=n){
			printf("%2d x %2d = %2d   ", j, i, i*j);
			j ++;
		}
		printf("\n");
		i ++;
	}
	printf("\n");
}
int main(){
	bcc(1);
	bcc(4);
	bcc(7);
	return 0;
}