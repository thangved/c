#include <stdio.h>

void start(int n){
	while(n>0){
		printf("*");
		n --;
	}
}
int main() {
  int n;
  scanf("%d", &n);
  int i = 1;
  while(i<=n){
  	start(i);
  	printf("\n");
  	i ++;
  }
  return 0;
}