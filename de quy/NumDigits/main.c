int NumDigits(int n){
    n = n>= 0 ? n : -n;
	return n<10 ? 1 : 1 + NumDigits(n/10);
}