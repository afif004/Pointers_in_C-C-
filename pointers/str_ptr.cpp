#include <stdio.h>
#include <string.h>
void print(char c[])    //receives a pointer to the first element of the array  ["char c[]" and "char* c" are same]
{
    for(; *(c)!='\0'; c++)  //pointers can be incremented
    {
        printf("%c", *c);
    }
    printf("\n");
}
int main()
{
    char C1[] = "Afif";
    printf("Array size in bytes %d\n", sizeof(C1));
    int l = strlen(C1);
    printf("Length %d\n", l);
    char* C2;

    C2=C1;      //C2 now points to the first element of C1 (the same memory location)

    // C2[2] accesses the third character ('i'), *(C2+1) dereferences the pointer to get the second character ('f')
    printf("%c %c\n", C2[2], *(C2+1)); 
    
    print(C1);  //passes the address of the 1st element of the array to the function
    print(C2);  //C2 points to the first element of the array, so it sends the pointer to the function
    printf("%s", C2);   //prints the string at the memory address that C2 points to (same as C1)
    
    char* ch = "Hello";     //string gets stored as compile time constant
    //" ch[0]='A'; " will give error 
    return 0;
} 