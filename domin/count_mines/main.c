void add(int i, int j){
    if(B[i][j]!=-1&&i>=0&&i<M&&j>=0&&j<M){
        B[i][j] ++;
    }
}
void count_mines(){
    int i, j;
    for(i = 0; i < M; i ++){
        for(j = 0; j < N; j ++){
            if(B[i][j]==-1){
                add(i, j + 1);
                add(i, j - 1);
                add(i + 1, j);
                add(i - 1, j);
                add(i + 1, j + 1);
                add(i + 1, j - 1);
                add(i - 1, j + 1);
                add(i - 1, j - 1);
            }
        }
    }
}