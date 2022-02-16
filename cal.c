// you have to create a command line utility to  add/subtract/divide/multiply two numbers.
// first command line argument of your c program must be the operation.
// the next argument being the two numbers. for example:
// >>command.c add 45 4
// >>49

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char * operation = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int numofargu = argc;
    


    if(strcmp(operation, "add")==0)
    {
        int add = num1+num2;
        printf("the addition is : %d", add);
    }
    else if(strcmp(operation, "sub")==0)
    {
        int add = num1-num2;
        printf("the subtraction is : %d", add);
    }
    else if(strcmp(operation, "mul")==0)
    {
        int add = num1*num2;
        printf("the multiplication is : %d", add);
    }
    else if(strcmp(operation, "div")==0)
    {
        int add = num1/num2;
        printf("the dividation is : %d", add);
    }

    else
    {
        printf("invalid input");
    }

    return 0;
}


