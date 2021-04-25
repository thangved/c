void printMap1(){
    int i, j;
    printf("  ");
    for(i = 0; i < N; i ++){
        printf("%d ", i);
    }
    printf("\n");
    for(i = 0; i < M; i ++){
        printf("%d ", i);
        for(j = 0; j < N; j ++){
            if(B[i][j]==-1){
                printf("x ");
            }
            else if(B[i][j]==0){
                printf(". ");
            }
            else{
                printf("%d ", B[i][j]);
            }
        }
        printf("\n");
    }
}