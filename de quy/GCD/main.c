int GCD(int a, int b){
	a = a > 0 ? a : - a;
	b = b > 0 ?  b : - b;
	return b == 0 ? a : GCD(b, a%b);
}