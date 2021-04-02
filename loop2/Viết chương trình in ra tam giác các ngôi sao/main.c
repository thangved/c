#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  scanf("%d", &n);
  int k, i = n, j = 1;
  while(i>=j){
    k = i;
    while(k>j){
      printf(" ");
      k --;
    }
    k = j;
    while(k>=1){
      printf("*");
      k --;
    }
    printf("\n");
    j ++;
  }
  return 0;
}