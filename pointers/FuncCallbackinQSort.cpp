#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void* a, const void* b)
{
    int A = (*(int*)a);
    int B = (*(int*)b);
    return A-B;
}
int main()
{
    int A[]={-31, 22, -1, 50, -6, 4};
    qsort(A,6,sizeof(int), compare);    //qsort takes a function pointer as its 4th argument
    //qsort can sort any array that's why it needs a function pointer to a
    //function which takes void pointer as argument so that it can be type casted according
    //to type of data to be sorted and it should be "const" so that the address can't be modified
    //of that pointer variable
    
    for(int i=0; i<6; i++)
    {
        printf("%d ", A[i]);
    }
}