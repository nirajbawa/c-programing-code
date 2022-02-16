// function pointers

// * we can have pointingg to  ffunction  as well
// * function pointer are useful to implement callback functions.
// * compiler takes one or more source files and converts tem to machine code.

// c programm memory layout :

// heap
// stack
// global & static variables
// code

// recall void pointer 

// void pointer is type of pointer its not have any type timing of declaration and definition.
// we can allocate it's type dynamically timing of dereferencing 

// alloction : typeOfvar (*ptr)(arguments) = &name  of pointing variable;

// function pointer 

#include <stdio.h>
#define debug "flase"
#include <string.h>

int sum(int a, int b)
{
    return a/b;
}

int main()
{

    if(strcmp(debug, "true")==0)
    {
        printf("hello");
    }

    printf("the sum of 1 and 2 is %d\n", sum(1,2));

    int (*ptr)(int, int); //declaration 
    //int ptr is pointer which can store the address of function form code which have argument int, int
    ptr  = &sum;// definition
    // ptr  = sum;// definition
    int d = (*ptr)(1, 2); // dereferencing 
    // int d = ptr(1, 2); // dereferencing
    printf("the value of d id : %d\n", d);

    return 0;
}


/*


* we can have pointers pointing to functions as well 
* function pointers points to code and not data 
* it can point address of intruction in code
* function poniter are useful to implemnt callback functions. 
* unlike normal pointer, we do not de-allocate memory using function pointers.

*/