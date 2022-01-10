/*

memory allocation in  c programs 

memory assigned to a program  in typical architecture can be broken into four segments

1. cod ---> text segment

2. static/ global variables ----> 1) data segments (initialiged storage) the variable will be declear and assigned the value thus are called data segment (initialiged storage)
                                  2)bss segment (unintialiged storage)  the variable will be opnly define not assigned value thus are called bss segment (unintialiged storage)         

3. stack ----> stack is list of all storage 
           *path of pprogram loading process in memory

    1. main() function is call.
    2. than main function's code will be start to be execution spouse the one function in main function, function name is func1 ()
    than main function is call after func1() is call than func1() will be run and main function will be wait for return's func1() 
    then func1() wil be run code spouse func1() have call printf() than func1() will wait for return printf() then printf() is return 
    than func1() will be kill in memory and return in main function and main function will be start to be execute.

    ex:  
            3. push in memory  printf() 1. pop from memory
                                 |
            2. push in memory  func1()  2. pop from memory
                                 |
            1. push in memory main()  3. pop from memory
    
        *stack owerflow

        **what is stack over flow 
          
         1. compiler allocates some space for the stack part of the memory.
         2. when this space gets exhausted for some bad reason, the situation is called as stack overflow.
         typical example includes recursion with wrong/no base condition.

4. heap

        1. we can create a pointer in our main function and point to a memory block in the heap.
        2. the address is stored by the local variable in the main function.
        3. the memory consumed will not get freed.
        4. the memory consumed will not get freed automatically in case we overwrite the pointer.

    gcc memorylayout.c ; size .\a.exe

*/

#include <stdio.h>

int main ()
{

    return 0;
}