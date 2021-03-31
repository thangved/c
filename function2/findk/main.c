#include <math.h>
void findk(long long n, int *k){
	*k =  log((float)n)/log(2) == (int)(log((float)n)/log(2)) ? log((float)n)/log(2) : (int)(log((float)n)/log(2) + 1);
}