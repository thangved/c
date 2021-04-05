void Move(int n, char a, char b, char c){
	if(n==1)
	{
	    printf("%c -> %c\n", a, c);
	}
	else
	{
	    Move(n - 1, a, c, b);
	    Move(1, a, b, c);
	    Move(n - 1, b, a, c);
	}
}