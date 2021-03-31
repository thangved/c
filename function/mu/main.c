double power(float a, int n){
  if(n==0){
    return 1;
  }
  else{
    return a * power(a, n - 1);
  }
}
void mu(float a, int n, double *m){
  *m = power(a, n);
}