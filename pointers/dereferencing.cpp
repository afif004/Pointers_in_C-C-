#include <iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);
    *p = 21;
    printf("\n%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);
    return 0;
}