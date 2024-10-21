//Sort an array in Ascending or Descending order with using
//only one sorting function
#include <stdio.h>
#include <stdlib.h>
//callback function will compare two integers,
//return 1 if 1st element > next element, -1 if 1st < next
int cmp(int a, int b) //the callback function will take two ints as argument and return int
{
    if(a>b) return -1;
    else return 1;
}

void BubbleSort(int* A, int n, int (*compare)(int, int))    //sort function will take a function pointer   
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(compare(A[j], A[j+1]) > 0)
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {3,2,1,5,6,4};    //sort in ascending
    BubbleSort(A,6, cmp);
    for(int i=0; i<6; i++)
    {
        printf("%d ", A[i]);
    }
}