void open_cell_1(int r, int c){
    if(r>=0&&r<M&&c>=0&&c<N){
        T[r][c] = 1;
    }
}
void open_cell_2(int r, int c){
    if(r>=0&&r<M&&c>=0&&c<N)
    {
        open_cell_1(r, c);
        if(B[r][c]==0){
            open_cell_1(r, c + 1);
            open_cell_1(r, c - 1);
            open_cell_1(r + 1, c);
            open_cell_1(r - 1, c);
            open_cell_1(r - 1, c - 1);
            open_cell_1(r - 1, c + 1);
            open_cell_1(r + 1, c - 1);
            open_cell_1(r + 1, c + 1);
        }
    }
}