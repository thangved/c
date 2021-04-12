float getAVG(int A[], int n){
    int i;
    float avg = 0;
    for(i=0;i<n;i ++){
        avg += (float)A[i]/n;
    }
    return avg;
}