//Make a video explaining this program
#include <stdio.h>
int main()
{
    int a = 12;
    int* p = &a;
    int** q = &p;
    int*** r = &q;
    printf("Size of integer is %d bytes\n\n", sizeof(int));

    printf(" p = %d     Address of variable 'a' = %d\n", p, &a);
    printf("*p = %7d     Value of 'a' = %d\n\n", *p, a);

    printf("  q = %d     Address of 'p' = %d\n", q, &p);
    printf(" *q = %d     Value of 'p' = %d\n", *q, p);
    printf("**q = %7d     *p = Value of variable 'a' = %d\n\n", **q, *p);
    
    printf("   r = %d     Address of 'q' = %d\n", r, &q);
    printf("  *r = %d     Value of q = %d\n", *r,q);
    printf(" **r = %d     *q = Value of p = %d\n", **r, *q);
    printf("***r = %7d     **q = *p = Value of variable 'a' = %d\n", ***r, **q);

    ***r = (*(*q))+9;
    printf("a = %d\n", a);
    *p++;
    printf("after *p++ %d\n", *p);
    printf("a after *p++ %d\n", a);
    *p--;
    printf("after *p-- %d\n", *p);
    printf("a after *p-- %d\n", a);
    printf("*(p+1) = %d r = %d\n", *(p+1), r);
    return 0;
} 