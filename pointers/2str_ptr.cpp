#include <stdio.h>
#include <string.h>
void print(const char* c)   //ensures the array to be read-only
{
    //"c[0] = 'H';" can be executed  if char pointer isn't constant
    for(; *(c)!='\0'; c++)
    {
        printf("%c", *c);
    }
    printf("\n");
}
int main()
{
    char str[20]="Aello";
    print(str);
}