#include <stdio.h>

int main()
{
    int arr[5];
    arr[0]=1;
    arr[1]=11;
    arr[2]=111;
    arr[3]=1111;
    arr[4]=11111;
    //this stores the address of the 1st element at p
    int* p = arr;
    printf("arr[0] = %d\narr[2] = %d\narr[4] = %d\n", *arr, *(arr+2), arr[4]);
    printf("%d %d %d",arr, arr+2, &arr[4]);
    p++;
    printf("\nNew p %d", p);
    return 0;
} 