#include <stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return *x, *y;
}
int main()
{
    int a,b;
    a=90;
    b=10;
    swap(&a,&b);
    printf("a=%d \nb=%d", a,b);
    return 0;
}