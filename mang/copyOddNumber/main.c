void printList(int arr[], int n){
    for(int i = 0; i < n; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void copyOddNumbers(int arr[], int n, int brr[], int *pn){
    int i;
    *pn = -1;
    for(i=0; i<n; i ++){
        if(arr[i]%2!=0){
            *pn = *pn + 1;
            brr[*pn] = arr[i];
        }
    }
    *pn = *pn + 1;
}