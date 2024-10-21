//Arrays as function arguments
#include <stdio.h>


 
// int SumOfElements(int arr[], int num)
// {
//     int i,sum=0;
//     for(int i=0; i<num; i++)
//     {
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int a[]={1,2,3,4,6,7,9};
//     int size = sizeof(a)/sizeof(a[0]);
//     int total = SumOfElements(a,size);
//     printf("Sum of elements = %d\n", total);
//     return 0;
// }

int SumOfElements(int* arr, int length)    // "int* arr" , "int arr[]" are same
{
    int i,sum=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("SOE - Size of arr = %d Size of arr[0] = %d\n", sizeof(arr), sizeof(arr[0]));
    for(i=0; i<length; i++)
    {
        sum+=arr[i];    // "arr[i]" or "*(arr+i)"
    }
    return sum;
}
int main()
{
    int A[]={1,2,3,4,6,7,9};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A,size);   // A can be used for &A[0]
    printf("Sum of elements = %d\n", total);
    printf("MAIN - Size of a = %d Size of a[0] = %d", sizeof(A), sizeof(A[0]));
    return 0;
}