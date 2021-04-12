#include <stdio.h>
void printList(int arr[], int n){
	n --;
	while(n>=0){
	    printf("%d ", arr[n]);
	    n --;
	}
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    printList(arr, n);
    return 0;
}