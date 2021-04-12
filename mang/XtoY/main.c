#include<stdio.h>
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
void replace(int arr[], int n, int x, int y){
    int i;
    for(i = 0; i < n; i ++){
        if(arr[i]==x){
            arr[i] = y;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    readList(arr, n);
    int x, y;
    scanf("%d %d", &x, &y);
    printList(arr, n);
    replace(arr, n, x, y);
    printList(arr, n);
    return 0;
}