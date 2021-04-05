#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = n>2 ? n: 2;
    int Fi[i];
	Fi[0] = 0;
	Fi[1] = 1;
	i = 2;
	int count = 2;
	while(count < n){
		Fi[i] = Fi[i-1] + Fi[i-2];
		i ++;
		count ++;
	}
	i = 0;
	while(i <n){
		printf("%d", Fi[i]);
		if(i<n-1){
			printf(", ");
		}
		i ++;
	}
    return 0;
}
