#include <stdio.h>
int checkPrime(int n){
    int i = 2, c = 1;
    while(i*i<=n){
        if(n%i==0){
            c = 0;
            break;
        }
        i ++;
    }
    if(n==1){
    	c = 0;
	}
    return c;
}
int countPrime(int arr[], int n){
    n --;
    int count = 0;
    while(n>=0){
        if(checkPrime(arr[n])){
            count ++;
        }
        n --;
    }
    return count;
}
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
void printPrimeList(int arr[], int n){
    int i;
    for(i=0; i<n; i ++){
        if(checkPrime(arr[i])){
            printf("%d ", arr[i]);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    readList(arr, n);
    printList(arr, n);
    printf("%d\n", countPrime(arr, n));
    printPrimeList(arr, n);
    return 0;
}
