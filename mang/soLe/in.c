#include <stdio.h>
void Delete(int p, int arr[], int *n){
    while(p<*n){
        arr[p] = arr[p + 1];
        p ++;
    }
    *n = *n - 1;
}
void readList(int A[], int n){
    int i;
    for(i = 0; i < n; i ++){
        scanf("%d", &A[i]);
    }
}
void printList(int arr[], int n){
    for(int i = 0; i < n; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    int count = n;
    int arr[n];
    readList(arr, n);
    printList(arr, n);
    int i;
    for(i=0; i <n; i ++){
        if(arr[i]%2==0){
            Delete(i, arr, &n);
            i --;
            count --;
        }
    }
    if(count == 0){
        printf("%d", count);
    }
    else{
        printf("%d\n", count);
        printList(arr, n);
    }
    return 0;
}
