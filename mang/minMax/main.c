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
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int smallest(int arr[], int n)
{
    int i;
    int min = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    readList(arr, n);
    printList(arr, n);
    printf("%d %d", smallest(arr, n), largest(arr, n));
    return 0;
}