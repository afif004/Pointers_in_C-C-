#include <stdio.h>
int main()
{
    int a;
    int* p;
    p = &a;
    a = 1127;
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address p is %d ", p);
    printf("Value at p is %d\n", *p);
    printf("Address p+1 is %d ", p+1);
    printf("Value at p+1 is %d\n", *(p+1));
    char* ptr;
    ptr = (char*)p;
    printf("Size of character is %d bytes\n", sizeof(char));
    printf("Address ptr is %d ", ptr);
    printf("Value at ptr is %d\n", *ptr);
    printf("Address ptr+1 is %d ", ptr+1);
    printf("Value at ptr+1 is %d\n", *(ptr+1));
    return 0;
}