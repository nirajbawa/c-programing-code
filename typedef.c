#include <stdio.h>

typedef struct student
{
    int a1;
    int b1;
    int c1;
}std;

int main()
{
    
    // syntax is typedef <previous name> <new name>;
    // first defind typedef function and give variable name 
    // ex 1 : 
    typedef int age; // typedef() is use for give nicname to previous name of vairable
    // next define the pointer variable
    age a = 1; //change variable name
    printf("the value of a is %d \n", a); // call it through new var name
    // ex : 2
    // struct student s1, s2;
    std s1, s2;
    s1.a1 = 10;
    s2.a1 = 20;
    printf("the value of structure s1's a is : %d \n",  s1.a1);
    printf("the value of structure s2's a is : %d \n",  s2.a1);
    // ex 3 : 
    // we can make multiple pointer in one variable useing typedef
    typedef int *inpointer;
    inpointer a2, a3;
    int c = 30;
    a2  = &c;
    a3  = &c;
    printf("the value of a2 is : %d and value of a3 is : %d ", *a2,*a3);
    return 0;
}
