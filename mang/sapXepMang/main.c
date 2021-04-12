#include<stdio.h>
void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void sortList(int arr[], int p, int n){
    if(p==n-1){
        return;
    }
    else{
        int i, index = p;
        for(i = p; i<n; i ++){
            if(arr[i]<arr[index]){
                index = i;
            }
        }
        swap(arr, p, index);
        sortList(arr, p + 1, n);
    }
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
    int arr[n];
    readList(arr, n);
    printList(arr, n);
    sortList(arr, 0, n);
    printList(arr, n);
    return 0;
}
