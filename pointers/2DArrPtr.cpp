#include <stdio.h>
#include <string.h>
int main()
{
    int A[3];
    A[0]=1;
    A[1]=11;
    A[2]=111;
    printf("A:\nA=%d &A[0]=%d\n", A, &A[0]);
    printf("*A=%3d      A[0]=%3d\n", *A, A[0]);
    int B[2][3];
    B[0][0]=2;
    B[0][1]=3;
    B[0][2]=6;
    B[1][0]=4;
    B[1][1]=5;
    B[1][2]=8;
    printf("B:\nB=%d &B[0]=%d\n\n", B, &B[0]);
    printf("*B=%d B[0]=%d &B[0][0]=%d\n\n", *B, B[0], &B[0][0]);
    printf("B+1=%d &B[1]=%d\n\n", B+1, &B[1]);
    printf("*(B+1)=%d B[1]=%d &B[1][0]=%d\n\n", *(B+1), B[1], &B[1][0]);
    printf("*(B)+2=%d\n*(B+1)+2=%d B[1]+2=%d &B[1][2]=%d\n",*(B)+2, *(B+1)+2, B[1]+2, &B[1][2]);
    printf("*(*B+1)=%d *(*B+1)+2=%d \n", *(*B+1), *(*B+1)+2);
}