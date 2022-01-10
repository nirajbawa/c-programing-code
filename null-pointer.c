// 1. null pointer is a pointer which has a value reserved for that 
// the pointer or referance dose not refer to a valid object.

// 2. A null pointer is guranteed to compare unequal to any pointer the pointer to 
// a valid object.

// 3. dereferencing a null pointer in undefined behivor in C,
// and a conforming implementation is allowed to assume that any pointer 
// that is derefereced is not null.

// null pointer is not reference valid object.
// we can not dereferencing null pointer.

// purposes

// 1. Null pointer is a specific pointer which is mentioned in C
// standard and it has specific purposes.

// 2. Null pointer give a functionality to C program to check whether a 
// pointer is legitimate or not.

// 1. A NULL pointer is a pointer that pointer to Null (nothing).
// 2. A Null pointer should not be dereferenced.
// 3. A check must be run by the c prrogrammer to know whether a pointer is nuull before derefencing it.


// program
// int X = 10;
// int *p = NULL ///pointer
// p = &x; // null pointer now holds address of int 'x'


// USE OF NULL POINTER 

// 1. to initialize pointer variable in cases where pointer variable has not been
// assigned any valid address yet.

// 2. to cevk for iegtimate address before accessing any pointer variable.

// 3. by doing, so we can peform error handling while, using pointers with c.

// 4. example of such error handilling can be dereference pointer variable only if it's not NULL.

// 5. to pass a null pointer to a function argument when we don't want to pass any valid memory address.

// func(int *str[22], char *p)
// {
//     p = NULL;
// }

// MORE ON NULL POINTER

// 1. Null pointer macro is defined as ((void*0))in header file of most of the the c compiler implementations.
// 2. NUll pointer vs uninitilazed pointer - an uninitaialzed pointer contains an undefined value.
// 3. A null pointer stores a defined valude, which is the one decided by the environment to not be a valid memory address for any object.
// 4. Null pointer vs void pointer - null pointer is a value  where as void pointer is a type
#include <stdio.h>

int main()
{
    // int a = 34;

    // int *ptr = &a;
    // result :
    // the address of a is 34

    int *ptr = NULL;

    // results :
    // // the address of a is 6422296

    // ptr == NULL :
    // the pointer is a null pointer and cannot be dereferanced
    // else :
    // address of a is 6422296


    // int *ptr;
    // result :
    // address of a is 6422300

    // printf("the address of a is %d\n", ptr);
    // // result :
    // // the address of a is 6422296
    // printf("the address of value a is %d\n", *ptr);

    //not program crash
    if(ptr != NULL)
        printf("address of a is %d\n", &ptr);
    else{
        printf("the pointer is a null pointer and cannot be dereferanced");
    }

    // results :
    // ptr == NULL :
    // the pointer is a null pointer and cannot be dereferanced
    // else :
    // address of a is 6422296

    return 0;
}