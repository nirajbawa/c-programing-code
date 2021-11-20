#include <stdio.h>


//let now about local, global formal argument and static variable
int b = 0; // this is a global variable it can accessible for all functions

int val()
{
    return 45;
}

int func(int b1)
{
    int loc = 45; // local variable
    printf("the value of b1 inside func is %d\n", b1); // hare are b1 is parse as a argument variable b of main function i can change change value of globle variable b  in main fun then i parse as argument in func function
//that is the value of b1 is is different 
    printf("the value of b inside func is %d\n", b); // here we print global variable b ti's value is 0 but can change the value of varibale in main function but it can value is onlu change for main function means thare are the copy of mean variable  
    printf("the address of b inside func is %d\n", &b); // hare i try to print address of variable b and same command is can run is main function i got diferent output values for both  


    // here are the exaple of static variable 

    static int myvar = 1; // =  val(); // then function is call again then this line is ignore it's give directly increment value
    //then i is call val function in static variable it's not call and give me a error brecause static variable is have only constant value that is a reason we  can't call function in static variable
    //then i cant give value in static variable only declare it then is default value is 0 

    printf("value of myvar without increment is 1 and then increment is %d\n", myvar);

    myvar++;

    printf("value of myvar after increment is %d\n", myvar);

    return b1 * 10;
}

int main()
{
    //what is a local variable 
    // the variable is declare in specific function the variable is only can valid and accessible for the only function where the variable is declare 

    int b = 344;
    int val = func(b);

    //example of static variable
    val = func(b); //the value of without call increment is 1 the i call this function again then value is change in 2

    

    int *ptr = &val;

    printf("the value of b is inside main is %d\n", &b);
    // hare example then i try to print loc in main function it's not print in terminal it's give me a error 
//because of loc is local variable of func function 
    // printf("%d", loc);
    printf("the value of func is %d", val);

    return 0;
}