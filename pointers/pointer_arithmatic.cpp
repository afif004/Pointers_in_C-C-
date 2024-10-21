#include <stdio.h>
int main()
{
    double a;
    double* p;
    p = &a;
    a = 10.9875;
    printf("Address p is %d\n", p);
    printf("Value at p is %lf\n", *p);
    printf("Size of integer is %d bytes\n", sizeof(double));
    printf("Address p+1 is %d\n", p+1);
    printf("Value at p+1 is %lf\n", *(p+1));
    return 0;
}