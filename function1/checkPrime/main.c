#include <math.h>
int checkPrime(long long n){
  long i = 2;
  int c = 1;
  while(i<=sqrt(n)){
    if(n%i==0){
        c = 0;
        break;
    }
    i ++;
  }
  return c;
}