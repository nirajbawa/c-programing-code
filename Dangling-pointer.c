/*

1. Pointer pointing to a freed memory location whose content 
has been deleted is called a dangling pointer.

2. dangling pointers arise during objects detruction when an object 
that has an incoming reference is deleted or deallocated. without modifing the value 
of the pointer, so that the pointer still points to the location the deallocated memory.

// the pointer who point location it's free in memory (the location of memory address
is deleted from memory) is called dangling pointer.

* causes  of dangling pointer

1. deallocation of memory
2. returning local variables in function calls
3. variable going out of scope


* is dangling pointer a good thing to have??

1. dangling pointer can introduce nasty bugs in our c programs.
2. dangling pointer bugs frequently become security holes at times.
3. we can avoid issues caused by dangling pointer by intualizing pointer to null
4. after de-allocation memory. pointer will be no longer dangling.
5. assigning NULL means pointer is a null pointer now.


*/

#include <stdio.h>
#include <stdlib.h>

myfunc()
{
    int a, b, sum;
    a = 34;
    b =  34;
    sum = a + b;
    return &sum;
}

int main()
{
    // case 1 : de allocation of a memory block
    int *ptr = (int *)malloc(7*sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 65;
    printf("1 : %d\n",&ptr[0]);
    free(ptr); // ptr is  now a dangling pointer

    // case 2 : function returning local variable address
    int * dangptr =  myfunc(); // ptr is  now a dangling pointer
    
    // case 3 : if a variable goes out of scope
    int *danglingptr;
    {
        int a;
        *danglingptr = &a;
    } 
    // here variable a goes out of scope which means danglingptr3 is pointing 
    // to a location which is freed and hence danglingptr is now a dangling pointer.
    return 0;
}