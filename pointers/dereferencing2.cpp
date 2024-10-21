#include <iostream>
using namespace std;
int main()
{
    int a;
    int* p = &a;
    a = 10;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);
    int x = 34;
    *p = x;
    printf("\n%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);
    return 0;
}