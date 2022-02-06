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
4. #ifdef
5. #ifundef
6. #if
7. #else
8. #elif
9. #pragma  


*/

// #include
// #include means including the contant of <stdio.h> 
// in this file. this is the meaning of this #include commands.
// for opening this #include file press 'ctrl' + 'left' click on mouse.
// to open this file

// #include <stdio.h>

// int main()
// {
//     printf("hello");
//     return 0;
// }


// the #include directive

//  1. the #include causes the preprocessor to fetch the contents of some
// other file to be include in the present file.

// 2. this file it turn #include some other file(s) which may in turn do the same.

// 3. most commonly the #include files have a ".h" extension, indicating that they are header files.


// two common #include formats


// * in c programming there are two common formats for #includes;
//    1. #include <headerFile.h> // the angle brackets say to look  inthe standard 
// system directories.
//    2. #include "myFlie.h" // the quotation marks say to look in the current directory.
// * disk drive full path is allowed, but discouraged since it it not portable;
//    1. #include <c\:program files\harry\\bhal\\somefile.h> //too specific.
//    2. #include <sys/file.h> // relative and porable path to the standard locations. 




// EXAMPLE :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

// #include <stdio.h>
// // include directive 
// #include "stdlib.h"
// #include "directive-test-file.c"


// int main()
// {
//     printf("hello\n");
//     char *print = thisIStestingFunc(); // we can directly access the function of "#include directive file";
//     printf("the output is : %s\n",print); 
//     return 0; 
// }

// RESULT :
// the output is : this is string

// The #Define 

// 1. the #define directive is used to "define" preprocessor "variable".
// 2. the #define preprocessor directive can be used to globally replace a word with number.
// 3. it acts as if an editor did a global search-and-replace edit of the file.

// EXAMPLE :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

// #include <stdio.h>
// // define
// #define pi 3 // preprocessing variable

// int main()
// {
//     int a = pi; // we can access #define variable hare
//     printf("the value of pi is : %d", a);
//     return 0;
// }

// RESULT : 
// the value of pi is : 3

// using #define for debugging

// 1. #define can be used for debugging
// 2. we can have printing statements that we only want active when debugging.
// 3. we can "protect" them in a "ifdef" block as follows :

        /*
            #define DEBUG
              # ifdef DEBUG
                [
                    print statement
                ]
              #elif
            # undef DEBUG

        */


// macros using #define 

//  1. we can also create using #define
//  2. macros operate like function  but beacuse they are explanded in
// place and are gennerally fater.


// #define pi 3.14

// #define square (x) x*x]
    
// area = pi  * square(radius);
// area = 3.114 * radius*radius // those all function resolve timeing of preprocessing 


// EXAMPLE :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::


// #include <stdio.h>
// #define addition(a) 1+a

// int main()
// {
//     int b = 1;
//     int c = addition(b); //we can access #define function here
//     printf("the value oof addition is : %d", c);
//     return 0;
// }

// RESULT :
// the value oof addition is : 2


// # predefined macros in c 



// 1 |__DATE__|
// the current date as charecter listeral in "MMM DD YYYY" format

// 2. |__TIME__|
// this contains the current time as a character literal  in  "HH.MM.SS" format.

// 3 |__FILE__|
// the current filename as a string literal.

// 4. |__line__|
// the current line number as a decimal constant.

// 5. |__STDC__|
// defined as I(one) when the compiler compiles with the ANSI standard 


// #include <stdio.h>

// int main()
// {
//   printf("file name is : %s\n", __FILE__);
//   printf("today's date is %s\n", __DATE__);
//   printf("time now is : %s\n", __TIME__);
//   printf("line number is : %d\n", __LINE__);
//   printf("ansi : %d\n", __STDC__);
//   return 0;
// }  

// results :

// file name is : c-pre-processor.c
// today's date is Feb  3 2022
// time now is : 17:46:23
// line number is : 197
// ansi : 1

#include <stdio.h>
#include <string.h>

int main()
{
  char a[50] = "hggf";

  if(sizeof(a)==sizeof(int))
  {
    printf("this is int");
  }
  else{
    printf("this not int");
  }
  return 0;
}


// predefined preprocessors in c

// #other c preprocessors

// 1. #define/macros ------> declear preprocessing variables and functions
// 2. #include/directives -----> are use for #include : including header files and directive use for including user defind program files
// 3. #undef---> use for undefine a macros
// 4. #ifdef ----> if def is use for if any micro is define  is can run statement and return true
// 5. #ifundef ---> is for if any macro is not define so this statemnt is run  and and return false
// 6. #if ---> if any condition is true so statement is execute
// 7. #else ---> else and condition is false so statement is execute
// 8. #elif ---> if is not true so execute elif statement
// 9. #pragma  ----> to issue some special commands to the the compiler 




