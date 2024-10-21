#include <stdio.h>
int main()
{
    int a = 1127;
    int* p;
    p = &a;
    printf("Size of integer is %d bytes\n", sizeof(double));
    printf("Address p is %d ", p);
    printf("Value at p is %d\n", *p);
    void* vptr;
    //Can't be derefernced as it's not mapped to a particular data type
    vptr = p;
    printf("Address ptr is %d ", vptr);
    return 0;
}