long long gth(int n){
  if(n==0){
    return 1;
  }
  else{
    return n * gth(n - 1);
  }
}
void giaithua(int n, long long *gt){
  *gt = gth(n);
}