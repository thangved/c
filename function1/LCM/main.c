#include <stdlib.h>
int LCM(int a, int b){
  //
  a = abs(a);
  b = abs(b);
  int max = a > b ? a : b;
  while(max%a!=0||max%b!=0)
  {
    max ++;
  }
  return max;
}