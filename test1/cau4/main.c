#include <stdio.h>
int check(int n){
    return n >=6 ? 1 : 0;
}
int main(){
    int n;
    scanf("%d", &n);
    if(check(n))
    {
        printf("Tuoi %d: Du tuoi vao lop 1.", n);
    }
    else{
        printf("Tuoi %d: Khong du tuoi vao lop 1.", n);
    }
    return 0;
}