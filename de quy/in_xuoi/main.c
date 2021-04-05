void in_xuoi(int n){
	if(n==0){
	}
	else{
		in_xuoi(n/10);
		printf("%d ", n%10);
	}
}