#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, j;
    long long arr[n][n];
    for(i=0; i < n; i ++)
    {
        for(j = 0; j <= i; j ++)
        {
            arr[i][j] = j == 0 || i == j ? 1 : arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for(i=0; i < n; i ++)
	{
        for(j = 0; j <= i; j ++)
        {
            printf("%lld ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
