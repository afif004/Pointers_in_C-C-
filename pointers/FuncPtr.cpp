 #include <stdio.h>
 #include <stdlib.h>
int add(int a, int b)
{
    return a+b;
}
//int* Func(int, int);      //declalring a function that will return int*
void PrintHello()
{
    printf("Hello!\n");
}
void GreetPerson(char* name)
{
    printf("Greetings, %s!", name);
}
int main()
{
    //pointer to function that will take 
    //(int,int) as argument and return int
    int (*p)(int, int);
    p = &add;
    int c = (*p)(2,3);  //dereferencing and executing the function

    int (*q)(int, int);     //function name will return pointer
    q = add;
    int d = q(5,4);
    printf("%d\n%d\n", c,d);

    void (*ptr)();
    ptr = PrintHello;
    ptr();

    void (*GP)(char*);
    GP = GreetPerson;
    char *person = (char*)calloc(20, sizeof(char));
    scanf("%s", person);
    GP(person);
}