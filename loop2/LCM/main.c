#include <stdio.h>
int LCM(int a, int b){
	a = a >= 0 ? a : - a;
	b = b >= 0 ? b : - b;
	int max = a>b ? a : b;
	while(max%a!=0||max%b!=0){
		max ++;
	}
	return max;
}
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d",LCM(a, b));
  return 0;
}