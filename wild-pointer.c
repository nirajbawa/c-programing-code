// 1. uninitialized pointer are known as wild pointers.
// 2. these pointer point to some arbitray location
// memory and may cause a program to crash or behave badly. 
// 3. bereferencing wild pointer can cause nastry bugs.
// 4. it is suggested to always initialize unused pointer to NULL.


#include <stdio.h>

int main()
{
    int a = 4354;
    // then the pointer only initialized on address any variable's memory
    // location then the pointer is called wild pointer.
    int *ptr; // this is wild pointer
    // *ptr = 34; // this is not a good thing to do
    ptr = &a; // ptr is no longer wild pointer
    printf("the value of a is %d\n", *ptr);
    return 0;
}