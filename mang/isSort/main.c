int isSort(int A[], int n){
     int c = 1;
     n --;
     while(n>0){
         if(A[n]<A[n - 1]){
             c = 0;
             break;
         }
         n --;
     }
     return c;
 }