#include <stdio.h>
#include <string.h>
//"void Func(int A[])"  ---->  void Func(int *A)    //argument: 1D array
//"void Func(int A[][3])"   //argument: 2D array    //1st dimension can be left empty other has to be specified
void Func(int A[][2][2])    //or (int (*A)[2][2])
{
    *A[0][1]=398;
    (*A)[0][1]=420;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2; k++)
            {
                printf("%d ", *(*(*(A+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{
    int A[2] = {1,2};
    int B[2][3] = { {2,4,6}, {5,7,8} };     // B returns int (*)[3] ---> pointer to an array of 3 integers
    int C[3][2][2] = { { {2,5}, {7,9} },
                       { {3,4}, {6,1} },
                       { {0,8}, {11,13} } };
    
    //"Func(A);"    //A returns int*  --->  pointer to an integer
    //"Func(B);"    //B returns int (*)[3] ---> pointer to an array of 3 integers
    
    //int X[2][2];
    //"Func(X);"    will be error because it returns pointer to an array of 2 elements 

    Func(C);
}