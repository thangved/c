#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int i, j;
    for(i = 0; i < n; i ++){
        for(j = 0; j < m; j ++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < n; i ++){
        for(j = 0; j < m; j ++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
