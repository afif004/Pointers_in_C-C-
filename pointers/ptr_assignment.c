#include <stdio.h>
int main()
{
    int i = 10;
    int *p, *q;
    p = &i;
    q = p;
    printf("%d %d", *p, *q);
    int a=10, b=20;
    int *x, *y;
    x = &a;
    y = &b;
    *y = *x;
    return 0;
}