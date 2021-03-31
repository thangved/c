int is_leap_year(int n){
  return ((n%4==0)&&(n%100!=0))||(n%400==0) ? 1 : 0;
}