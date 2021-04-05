#include <stdio.h>
void Fa(int n){
	int i = 2;
	while(n>1){
		while(n%i==0){
			printf("%d ", i);
			n /=i;
		}
		i ++;
	}
}
int main() {
    int n;
    scanf("%d", &n);
    Fa(n);
    return 0;
}
