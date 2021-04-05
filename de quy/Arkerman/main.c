int A(int m, int n){
	return m==0 ? n + 1: m>0 &&n == 0 ? A(m - 1, 1) : A(m-1, A(m, n - 1));
}