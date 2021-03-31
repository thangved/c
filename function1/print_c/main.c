void print_c(char c, int n){
  if(n==0){
    return;
  }
  else{
    printf("%c", c);
    print_c(c, n - 1);
  }
}