#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;  //goes to stack
    
    int* p;
    //asking to reserve a block of memory of 4 bytes on the HEAP
    p = (int*)malloc(sizeof(int));  //typecasting the pointer to a integer pointer as malloc returns a void pointer 
    //malloc will return a pointer to the starting adress of the memory block in the HEAP
    *p = 10;
    free(p);

    p = (int*)malloc(sizeof(int));
    *p = 20;
    //p will nnow point to another address in HEAP containing value 20
    //but the block containing value 10 will still take up space in the HEAP and won't be cleared automatically
    //after finishing usage of the specific memory block, the block should be cleared using free()
    free(p);

    //As memory block on HEAP needs to get cleared manually, lifetime of the value in the block can be controlled
    p = (int*)malloc(5*sizeof(int));

    int* r = (int*)calloc(20, sizeof(int));
    printf("p[0] = %d\nr[0] = %d\n", *p, *r);     //calloc initializes all byte position to zero, malloc doesn't

    //the dangerous thing about pointers - values stored at a known address can be read and written
    free(p);
    free(r);
    printf("After free p[1] = %d\n", p[1]);
    p[1] = 2441139;
    printf("After free & changing p[1] = %d\n", p[1]);
    printf("After free r[3] = %d\n", r[3]);
    r[3] = 221;
    printf("After free & changing r[3] = %d", r[3]);
    free(p);
    free(r);

    // C++ style
    // int* q;
    // q = new int;
    // *q = 10;
    // delete q;
    // q = new int[20];
    // delete[] q;

}