#include <stdio.h>
void printList(int arr[], int n){
	int i;
    for(i = 0; i < n; i ++){
        printf("%d ", arr[i]);
    }
}
int sum(int arr[], int n){
    int sum = 0, i;
    for(i = 0; i < n; i ++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", sum(arr, n));
    printList(arr, n);
    return 0;
}