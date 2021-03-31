int F(int i){
	if(i==0||i==1){
		return 1;
	}
	else{
		int j = 3, a = 1, b = 1, c = 2;
		while(j<=i + 1){
			c = a + b;
			a = b;
			b = c;
			j ++;
		}
		return c;
	}
}