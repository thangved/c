#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  scanf("%d", &n);
  int i = 1, j;
  while(i<=n){
    j = 1;
    while(j<=i){
      printf("%c", i + 64);
      j ++;
    }
    printf("\n");
    i ++;
  }
  return 0;
}