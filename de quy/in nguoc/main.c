void in_nguoc(int n){
	if(n==0){
		
	}
	else
	{
		printf("%d ", n%10);
		in_nguoc(n/10);
	}
}