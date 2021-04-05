#include<stdio.h>
void bcc(int n){
	int i = 1;
	while(i<=10){
		printf("%d x %d = %d\n", n, i, i*n);
		i ++;
	}
}
int main(){
	int i = 1;
	while(i<10){
		printf("%d Times Table\n====================\n", i);
		bcc(i);
		printf("\n");
		i ++;
	}
	return 0;
}