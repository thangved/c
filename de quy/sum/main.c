long long sum(int n){
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n + sum(n - 1);
	}
}