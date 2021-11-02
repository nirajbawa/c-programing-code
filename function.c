#include <stdio.h>

// declaration, definition and call

//with arguments and with return value
// int sum(int a, int b); // declaration

//with arguments and without return value

// void sub(int c, int d)
// {
//     int n = c-d;
//     printf("%d\n", n);
// }

//without arguments and with return value 

// int multiplication()
// {
//     int h, k;
//     printf("enter values : ");
//     scanf("%d", &h);
//     printf("enter values : ");
//     scanf("%d", &k);
//     int o = h*k;
//     return o;
// }

// int division()
// {
//     int p, u;
//     printf("enter value : ");
//     scanf("%d", &p);
//     printf("enter value : ");
//     scanf("%d", &u);
//     int e = p/u;
//     printf("%d", e);
// }

// recursive functions

int factorial(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main(int argc, char const *argv[])
{
    printf("hello\n");
    //call
    //sum function
    // int output = sum(1,2);
    // printf("%d\n", output);

    //sub function
    // sub(10,5);

    //mutiplication 
    // int multit = multiplication();
    // printf("%d\n", multit);

    //division
    // division();
    
    // recursive function
    int num;
    printf("enter the number you want the factorial of\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num, factorial(num));
    
    return 0;
}

//definition
// int sum(int a, int b)
// {
//     int g = a + b;
//     return g;
// }