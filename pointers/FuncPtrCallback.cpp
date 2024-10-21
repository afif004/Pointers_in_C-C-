#include <stdio.h>
#include <stdlib.h>
void A()
{
    printf("Hello ");
}
void B(void (*ptr)())   //function taking a function pointer as argument
{
    ptr();      //callback function that ptr points to
}
int main()
{
    void (*p)() = A;
    B(p);
    B(A);   //name of a function returns a pointer
    //A is callback function
}