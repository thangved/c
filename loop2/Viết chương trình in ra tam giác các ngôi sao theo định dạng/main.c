#include <stdio.h>
void in(int n){
	printf("*");
	n --;
	while(n>1){
		printf("-");
		n --;
	}
	if(n==1){
		printf("*");
	}
	printf("\n");
}
void inn(int n){
	int i = 1;
	while(i<=n){
		printf("*");
		i ++;
	}
}
int main() {
  int n;
  scanf("%d", &n);
  int i = 1;
  while(i<n){
	  in(i);
	  i ++;
  }
  inn(n);
  return 0;
}