#include <stdio.h>
//called func
void increment(int x)   //formal arg
{
    x++;
}
void Increment(int* p)
{
    (*p)++;
}
//calling func
int main()
{
    int a;
    a=10;
    increment(a);   //actual arg
    // a is mapped/copied to x (call by value)
    printf("a = %d\n", a);
    Increment(&a);  //call by reference
    printf("a = %d", a);
    return 0;
} 