#include <stdio.h>
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  a = a >= 0 ? a : - a;
  b = b >= 0 ? b : -b;
  int min = a==0 ? b : b == 0 ? a : a < b ? a : b;
  while(a%min!=0 || b %min != 0){
	  min --;
  }
  printf("%d", min);
  return 0;
}