int C(int n, int k){
	return k==0 || k==n ? 1 : C(n-1, k - 1) + C(n - 1, k);
}
// n = 1
// printf("%c -> %c", a, c)
/*
n > 1
Move(n-1, a, c, b)
Move(1, a, b, c)
Move(n-1, b, a, c)
*/