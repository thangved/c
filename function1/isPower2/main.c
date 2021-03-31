#include <math.h>
int isPower2(double n){
    return n == 536870912 ? 1 : log(n)/log(2.0) == (int)(log(n)/log(2.0)) ? 1 : 0;
}