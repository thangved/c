#include <stdio.h>
void readList(int A[], int n){
    int i;
    for(i = 0; i < n; i ++){
        scanf("%d", &A[i]);
    }
}
void printList(int arr[], int n){
    int i;
    for(i = 0; i < n; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int sum(int arr[], int n){
    int sum = 0, i;
    for(i = 0; i < n; i ++){
        sum += arr[i]*arr[i];
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    readList(arr, n);
    printList(arr, n);
    printf("%d", sum(arr, n));
    return 0;
}