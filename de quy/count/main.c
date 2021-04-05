int count(int n){
    n = n>= 0 ? n : -n;
	return n==0 ? 0 : n<10  ? 1 : 1 + count(n/10);
}