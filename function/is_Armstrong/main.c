#include <math.h>
int is_Armstrong(int abc){
  int a = abc/100, b = (abc%100)/10, c = abc%10;
  return pow(a, 3) + pow(b, 3) + pow(c, 3) == abc ? 1 : 0;
}