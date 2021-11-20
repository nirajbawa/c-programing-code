#include <stdio.h>

int main()
{
    // first defind typedef function and give variable name 
    typedef int *intpointer; // typedef() is use for make multiple pointer in one time 
    // next define the pointer variable
    intpointer a, b;
    // and give value to pointer variable
    int c = 20;
    a = &c;
    b = &c;
    printf("the value of int a is : %d\n", *a);
    printf("the value of int a is : %d\n", *a);
    printf("the address of int a is : %p\n", &a);
    printf("the address of int a is : %p\n", &a);
    return 0;
}
