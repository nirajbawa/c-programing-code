// recall function pointer 


// * we can have pointers pointing to functions as well 
// * function pointers points to code and not data 
// * it can point address of intruction in code
// * function poniter are useful to implemnt callback functions. 
// * unlike normal pointer, we do not de-allocate memory using function pointers.

// alloction : typeOfvar (*ptr)(arguments) = &name  of pointing variable;

// call back 

// * function pointers are used to pass a function to a function
// * this passed function can then be called again (hence the name callback function).
// * this provides programmer to write less code to do more stuff.

#include <stdio.h>

int divide(int a,  int b)
{
    return a/b;
}

int sum(int a,  int b)
{
    return a+b;
}


void greetHelloAndExecute(int (*fptr)(int, int))
{
    int a, b;
    printf("hello user\n");
    printf("enter value 1 : ");
    scanf("%d", &a);
    getchar();
    printf("enter value 2 : ");
    scanf("%d", &b);
    // here calling fptr give him to arguments  
    // those argument is call back to ptr and ptr is call to sum 
    printf("The sum of 5 and 7 is %d\n", fptr(a,b));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    int a, b;
    printf("Good Morning User\n");
    printf("enter value 1 : ");
    scanf("%d", &a);
    printf("enter value 2 : ");
    scanf("%d", &b);
    printf("The sum of 3 and 3 is %d\n", fptr(a, b));
}

int main()
{
    // here we can declare function pointer 
    printf("what function do you have to call \n for sum enter 1 \n for divide enter 2 \n choice your option : ");
    int option;
    scanf("%d", &option);
    int (*ptr)(int, int);
    // defination
    if(option==1)
    {
        ptr =  &sum;
        greetHelloAndExecute(ptr);
    }
    else if(option==2)
    {
    // calling greetHelloAndExecute function for dereferencing 
        ptr = &divide;
        greetHelloAndExecute(ptr);
    }
    else
    {
        printf("invalid option\n");
    }
}

// typeofvar (*nameofpointer)(arguments)// declaration 
// nameofpointer = &name pointing function // definition 
// namofvar = nameofpointer(atruments) // dereferencing 

// void pointer

// void *name;// declaration 
// name = &name of pointing variable// definition 
//typeofvar nameofvar =  *((typeofvar *)nameofvoidpointer);  dereferencing