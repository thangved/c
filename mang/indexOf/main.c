#include <stdio.h>
int main(){
    int n, m, count = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int i, j;
    for(i = 0; i < n; i ++){
        for(j = 0; j < m; j ++){
            scanf("%d", &arr[i][j]);
        }
    }
    int a;
    scanf("%d", &a);
    for(i = 0; i < n; i ++){
        for(j = 0; j < m; j ++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i ++){
        for(j = 0; j < m; j ++){
            if(arr[i][j]==a){
            	printf("(%d, %d) ", i, j);
            	count ++;
			}
        }
    }
    if(count!=0){
    	printf("\n");
	}
    printf("%d", count);
    return 0;
}