void factorize(int n){
  printf("%d = ", n);
  int i = 2;
  while(n!=1){
    while(n%i==0){
      printf("%d ", i);
      n/=i;
      if(n!=1){
        printf("x ");
      }
    }
    i ++;
  }
}