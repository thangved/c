#include <stdio.h>
#include <stdlib.h>
void row(int n){
	int i = 1;
	while(i<=n){
		printf("%d ", i);
		i ++;
	}
}
void col(int n){
	int i = 1;
	while(i<=n){
		row(i);
		printf("\n");
		i ++;
	}
}
int main() {
  int n;
  scanf("%d", &n);
  col(n);
  return 0;
}