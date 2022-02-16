/*

what is storage classes ?


* a storage class defines following attributes about a variable in c.


1. scope

# where will variable avaliable ? [global and static variable]


2. default initial value

# default intial value [int a; is only defined but not declear, so what is there intial value]


3. lifetime

# lifetime of that variable.

--------------------------------------------------------------------

storage classes in c 


* inc c language, following storage classes are most oftenly used.



1. automatic variables [auto storage class]

# automatic variable storage class use for making automatic variable.

* scope : local to the function body they are defined in
* default value : garbage value (a random value)
* lifetime : till the end of the function block they are defined in
* a variable defined without any storage class specification is by default an automatic variable
* int harry and auto int harry are same.

ex :

int main (){
    int harray; * in automatic variable int is variable and it's default scope is local to function body they are defined in and * itt's default intial value is grabage value (random value)
    harry = 32; 
    printfunc();
(int harray) lifetime end here (when function is end then variable is also end)
}

2. external variables

# external variable storage class use for making external variable. 

* they are same as global  variable 
* scope : global to  program they are defined in
* dafault intial value : 0
* lifetime : these variable are declared outside any functtion. they are avaliable  throughout the lifetime  of the program.

* a lobal variable can be changed by any function in the program.
* int harry written can be changed by any ffunction in the program.
* it is recommended to minimize the use of unnecessary global variable in a program.

ex :

{
    # include <stdio.h>

    int a 1; # a is a is global to the program they are defined in # and it's default value is 0.

    func1() {
        int b = 1;
        a + b;
        return 0;
    }

    int main() {
        printf("%d", a);
        
        variable a's lifetime end here. (when program is end then variable is also end)
        return 0;
    }
}



# extern variable 

* extern keyword is used to inform our c compiler that a given variable is declared somewhere else.
* using extern will not allocate space for the variable

example :

file 1 a.c

int main()
{
    int harry = 90;
    printf("%d", harry); 
}

file b.c 

#include "a.c";
extern int harry;

int main()
{
    harry = 56;
    printf("%d", harry);
}



3. static variables

# static variable storage class use for making static variable.
  
* scope : local to the block they are defined in
* default intial value; 0
* lifetime : they are avaliable throughout the  lifetime od the program
* a static variable remains under existence for use within the function for entrie program run
* static int harry written inside any  function will compiler that harry is a static variable
* it is recommended to minimize the use of unecessary static variable in a program

int main()
{
    int a = 5; # without static we can declear this variable 
    a++; # then we can add a++ than value of a is not  change
}

int main()
{
     # the default scope of static variable is local variable # and default intial value is 0
    static int a = 5; # and it's value is changed
    a++; # then we can use static and add a++ than value a is change
    # static variable's life is end on the when program is end
}

4. register variables

# register variable storage class use for rigister variable

* scope : local to the function body they are defined in
* default value : garbage value (a random value)
* lifetime : till the end of the function block, in which the variable is defined.

* register variable requests the compiler to store the variable in the cpu register instead of storing in the 
memory to have faster access
* generally this is done for the variable ehich are being used frequently



*/ 

// #include <stdio.h>

// int i;

// int func1();

// int main()
// {
//     printf("%d \n", i);
//     int ii = func1();
//     printf("%d \n", ii);
//      printf("%d \n", i);
// }

// int func1()
// {
//     int a = 1;
//     int b = 1;
//     int i = a+b;
//     return i; 
// }

/*
results
0
2
0
*/

// 1. automatic variable storage class 

// int func1(int a, int b)
// {
//     // int sum; 
//     auto int sum; // we can not require to write "auto int" because int is automatically defined as "automatic variable storage class."  
//     sum = a+b;
//     return sum;
// }

// int main()
// {
//     //  declaration : telling the compiler about the variable (no space reserved)
//     // definiton : declaration : declaration + space reservation

//     int sum = func1(3,5);
//     printf("the sum is %d\n ", sum);
    
//     return 0;
// }

/*

results

the sum is 8

*/


//2. external variable and extern variable storage class

// int sum; // int sum  is declare out of the any function mains it's global variable
// // and it's storage class is external variable.

// int func1(int a, int b)
// {
//     // int sum; 
//     sum = a+b;
//     return sum;
// }

// int main()
// {
//     //  declaration : telling the compiler about the variable (no space reserved)
//     // definiton : declaration : declaration + space reservation

//     int sum = func1(3,5);
//     printf("the sum is %d\n ", sum);
    
//     return 0;
// }

/*

result 

the sum is 8

*/

// # extern
// #include <stdio.h>

// int sum = 34;

// int func1(int a, int b)
// {
//     // int sum; // if i'm here not use extern and wirte direct int sum then it is auto (local) variable
//     extern int sum; // then i'm here use extern then it can know it as global variable 
//     return sum;
// }



// int main()
// {
//     //  declaration : telling the compiler about the variable (no space reserved)
//     // definiton : declaration : declaration + space reservation
   
//     int sum = func1(3,5);

//     printf("the sum is %d\n ", sum);
    
//     return 0;
// }


// result

// the sum is 34



// 3. staic variable storage class

// #include <stdio.h>

// int func1()
// {
//     // static variable initial value is change when we use static variable
//     static int myvar; //this is static variable storage class we need to defined static variable using static class
//     printf("before changing value : %d\n",myvar);
//     myvar++;
//     printf("after changeing value : %d\n", myvar);
//     return myvar;
// }



// int main()
// {
//     //  declaration : telling the compiler about the variable (no space reserved)
//     // definiton : declaration : declaration + space reservation

//     func1();
//     func1();
//     func1();
//     func1();

//     return 0;
// }

/*

result

before changing value : 0
after changeing value : 1
before changing value : 1
after changeing value : 2
before changing value : 2
after changeing value : 3
before changing value : 3
after changeing value : 4

*/

// #include <stdio.h>

// int func1()
// {
//     // static variable initial value is change when we use static variable
//     static int myvar; //this is static variable storage class we need to defined static variable using static class
//     printf("before changing value : %d\n",myvar);
//     myvar++;
//     printf("after changeing value : %d\n", myvar);
//     return myvar;
// }


// 4. register variable storage class



int main()
{
    //  declaration : telling the compiler about the variable (no space reserved)
    // definiton : declaration : declaration + space reservation

    register int myvar = func1(); // using register variable storge class we can store variable in cpu register
    // that is a way to defined register variable storage class
    func1();
    func1();
    func1();
    func1();

    return 0;
}
