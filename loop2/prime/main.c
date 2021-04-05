#include <stdio.h>
#include <math.h>
int main() {
  int n;
  scanf("%d", &n);
  int i = 2, c= 1;
  while(i<=sqrt(n)){
  	if(n%i==0){
  		c = 0;
  		break;
	  }
  	i ++;
  }
  if(c)
  {
  	printf("%d is a prime number.", n);
  }
  else
  {
  	printf("%d is not a prime number.", n);
  }
  return 0;
}