#include <stdio.h>
int check(int n){
	int count = 0, i = 2;
	while(n!=1&&i<n){
		while(n%i==0){
			count ++;
			n /=i;
		}
		i ++;
	}
	return count >= 1 ? 1 : 0;
}
int main() {
	int a;
	scanf("%d", &a);
	if(check(a)){
		printf("%d la hop so.", a);
  	}
  	else{
		printf("%d khong phai la hop so.", a);
  	}
  	return 0;
}