void sum(int n, float *s){
  float i = 1;
  *s = 0;
  while(i<=n){
    *s += i/(i+1);
    i ++;
  }
}