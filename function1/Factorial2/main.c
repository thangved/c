long long Factorial2(long long n){
  if(n<=0){
    return 1;
  }
  else{
    return n * Factorial2(n - 2);
  }
}