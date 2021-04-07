#include <stdio.h>
int main()
{
    int arr[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}}, d, m, y = 2019, count;
    scanf("%d %d %d", &d, &m, &count);
    d += count;
    while(1)
    {
        if(m==12)
        {
            if(d>=31)
            {
                d -= 31;
                m = 1;
                y ++;
            }
            else
            {
                break;
            }
        }
        else
        {
            if(d>arr[y-2019][m])
            {
                d -= arr[y-2019][m];
                m ++;
            }
            else
            {
                break;
            }
        }
    }
    printf("%02d/%02d/%02d", d, m, y);
    return 0;
}