void open_cell_3(int r, int c){        
    if(T[r][c]==1||(r < 0 || c < 0 || r >=M || c >= N)){
        return;
    }
    else{
        T[r][c] = 1;
        if(B[r][c]==0){
            open_cell_3(r, c + 1);
            open_cell_3(r, c - 1);
            open_cell_3(r + 1, c);
            open_cell_3(r - 1, c);
            open_cell_3(r - 1, c - 1);
            open_cell_3(r - 1, c + 1);
            open_cell_3(r + 1, c - 1);
            open_cell_3(r + 1, c + 1);
        }
    }
}