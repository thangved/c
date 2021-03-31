void count(int *cnt){
  *cnt = 0;
  int a = 0, b = 0, c = 0, d = 0;
  while(a<=9){
    b = 0;
    while(b<=9){
      c = 0;
      while(c<=9){
        d = 0;
        while(d<=9){
          *cnt += (a*1000 + b*100 + c*10 + d)%10==9 ? 1 : 0;
          d ++;
        }
        c ++;
      }
      b ++;
    }
    a ++;
  }
}