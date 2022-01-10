// what is a void poitner ?

//1. a void pointer is a pointer that has on data type accociated with it
//2. a void pointer can be easily typecated to any pointer type
//3. in simple language it is a general purpose pinter variable

// void pinter: c program

// *a void pointer is a pointer that ha no data type associated with it.
// *a void pointer can be easily typecasted to any pointer type.

// int x = 10 //address is m1 = 10
// char y = 'x'; x = a1

// void x = 10; // void pinter stores address of int 'x'
// char y = 'x'; //void pointer now holds address of char 'y'

// uses of void pointers

//1. in dynamic memory allocation, malloc() and calloc() return (void *) type pointer
//2. this allows these dynamic functions to be used to allocate memory of any data type. this is
//because these pointer can be typecasted to any pointer type.

#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    // then i'm write *ptr using tring to print value of ptr than its not print
    // because of a void pointer is a pointer that have no data type associated with it.

    // // printf("the value of b is %d\n", *ptr);
    // results :
    // void-pointer.c: In function 'main':
    // void-pointer.c:34:38: warning: dereferencing 'void *' pointer
    // printf("the value of b is %d\n", *ptr);
    //                                       ^~~~
    // void-pointer.c:34:5: error: invalid use of void expression
    //  printf("the value of b is %d\n", *ptr);

    // for printing value of address ptr
    printf("the value of a is %d\n", *((int *)ptr));

    // results :
    // the value of b is 345

    ptr = &b;

    printf("the value of b is %f\n", *((float *)ptr));
    // results :
    // the value of b is 8.300000

    return 0;
}