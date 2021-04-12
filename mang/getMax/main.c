void getMax(float arr[], int n, float *max, int *maxpos){
    n --;
    *max = arr[n];
    *maxpos = n;
    while(n>=0){
        if(arr[n]>=*max){
            *max = arr[n];
            *maxpos = n;
        }
        n --;
    }
}