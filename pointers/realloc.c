 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int* a = (int*)malloc(5*sizeof(int));
    int* b = (int*)realloc(a, 2*5*sizeof(int));
    printf("Prev block address = %d\nNew Block address = %d\n", a,b);
    a[0]=1;
    a[1]=11;
    a[2]=111;
    a[3]=1111;
    a[4]=11111;
    for(int i=0; i<10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    int* c = (int*)realloc(a, 2*sizeof(int));
    printf("Prev block address = %d\nNew Block address = %d\n", a,c);
    for(int i=0; i<5; i++)
    {
        printf("%d ", c[i]);
    }
    free(a);
    free(b);
    free(c);
    // int *A = (int*)realloc(A, 0);   //equivalent to free(A)    
    // int *B = (int*)realloc(NULL, sizeof(int));   //equivalent to malloc(B)    
}