void tong(int a, int *S){
  *S = 0;
  int i = 1;
  while(i<=a){
    *S += i%2==0 ? i : - i;
    i ++;
  }
}