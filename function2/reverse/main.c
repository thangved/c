void reverse(long long n, long long *r){
	*r = 0;
	while(n!=0){
		*r = *r*10 + n%10;
		n /=10;
	}
}