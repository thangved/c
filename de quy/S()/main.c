double S(int n){
	return n == 1 ? 1 : 1/(double)n + S(n - 1);
}