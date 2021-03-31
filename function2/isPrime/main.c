int isPrime(int n){
	int i = 2, c = 1;
	while(i<=sqrt(n)){
		if(n%i==0){
			c=0;
			break;
		}
		i ++;
	}
	return c;
}