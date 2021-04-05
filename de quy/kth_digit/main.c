int kth_digit(int n, int k){
	return k == 0 ? n%10 : kth_digit(n/10, k -1);
}