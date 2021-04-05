#include <stdio.h>
void row(int i, int n){
	int j = i;
	while(j>0){
		printf(" ");
		j --;
	}
	while(n>i){
		printf("*");
		n --;
	}
}
void col(int n){
	int i = n;
	while(i>0){
		row(n-i, n);
		printf("\n");
		i --;
	}
}
int main() {
  int n;
  scanf("%d", &n);
  col(n);
  return 0;
}