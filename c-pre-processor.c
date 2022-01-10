// what compiler to do ??

// * compiler converts form of a C program into an an executable.
// * there are four phases for a C program to become an executable.

/*


preprocessing ---------> compilation --------> assembly ------------------------> linking

1. removal of comments   1. assembly          1. genrated .o                     1. linker linking all header, library files 
2. exponsion of micros   level intructions    2. .exe ganrated                   in one single executable .exe file. 
3. " " include fiks      are gunrated         3. printf are not resolved 
                                              4. assembly level introctions
                                              converted to machine level code     

* what is a C preprocessor ?

1. C preprocessor comes under action before the actual compilation process
2. C preprocessor is not a part of the c compiler 
3. it is text substitution tool 
4. all preprocessor commands begin with a hash symbol (#).

* preprocessor commands examples

1. #define
2. #include
3. #undef
4. #def
5. #ifndef
6. #if
7. #else
8. #elif



*/

// #include
// #include means including the contant of <stdio.h> 
// in this file. this is the meaning of this #include commands.
// for opening this #include file press 'ctrl' + 'left' click on mouse.
// to open this file

#include <stdio.h>

int main()
{
    printf("hello");
    return 0;
}



