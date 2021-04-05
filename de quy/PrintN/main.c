void PrintN(int n){
	if(n==1){
		printf("1");
	}
	else{
		printf("%d\n", n);
		PrintN(n-1);
	}
}