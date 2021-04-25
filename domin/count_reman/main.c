int count_remain(){
    int i, j, count = 0;
    for(i = 0; i < M; i ++){
        for(j = 0; j < N; j ++){
            count += T[i][j] == 0 ? 1 : 0;
        }
    }
    return count;
}