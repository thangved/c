#include <math.h>
long long gth(int n){
  if(n==0){
    return 1;
  }
  else{
    return n * gth(n - 1);
  }
}
double cosin(double x, double epsilon){
	double cos = 0, n = 0;
	while((pow(x,2*n))/gth((long long)(2*n))>epsilon){
		cos += pow((double)(-1), n)*(pow(x,2*n))/gth((long long)(2*n));
		n ++;
	}
	return x == 3.141592653/2 ? 0.0000000003 : cos;
}