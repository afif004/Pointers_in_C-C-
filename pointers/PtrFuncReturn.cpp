#include <stdio.h>
#include <stdlib.h>
int add(int a, int b)   //called function
{
    printf("Address of a in add = %d\n", &a);
    int c = a+b;
    return c;
}
int* ADD(int* a, int* b)   //called function - returns pointer to int
{
    //a, b are pointer to integer and local to ADD
    printf("Address of a in ADD = %d\n", &a);       //address of the pointer variable
    printf("Value in a of ADD (address of a in main) = %d\n", a);       //addres of a in main
    printf("Value at address of a in ADD = %d\n", *a);      //value of a in main

    //local variables are stored in the stack, and once the function ADD() returns,
    //the stack frame for that function is destroyed. Therefore, returning the address
    //of c results in undefined behavior, as that memory is no longer valid after the function exits.

    //Using dynamic memory allocation with malloc to allocate memory on the heap (which persists after the function exits).
    int* c = (int*)malloc(sizeof(int));
    *c = (*a)+(*b);
    return c;
}
int main()  //calling function
{
    int a,b;
    scanf("%d %d", &a, &b);
    //call by value
    int z = add(a,b);   //value of a in main() copied to a of add()
                        //value of b in main() copied to b of add()
    printf("Address of a in main = %d\n", &a);
    printf("%d\n", z);
    int* d = ADD(&a, &b);
    printf("%d", *d);
}