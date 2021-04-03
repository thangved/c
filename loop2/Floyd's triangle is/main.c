#include <stdio.h>
void in(int n, int *i){
	int j = 1;
	while(j<=n){
		printf("%d ", *i);
		*i +=1;
		j ++;
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d", &n);
	int i = 1, j = 1;
	while(j<=n){
		in(j, &i);
		j ++;
	}
	return 0;
}