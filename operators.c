#include <stdio.h>

//operators

// arithametic operators

int main(){
    int a;
    float b;

    a = 34;
    b = 6.34;

    printf("a+b = %f\n", a+b);
    printf("a-b = %f\n", a-b);
    printf("a*b = %f\n", a*b);
    printf("a/b = %f\n", a/b);
    

    int ab, ba;

    ab = 65;
    ba = 45;

    printf("ab%%ba = %d\n", ab%ba);

    // relational operators

    int c, d;

    c = 1;
    d = 3;

    printf("%d\n", c==d);
    printf("%d\n", c!=d);
    printf("%d\n", c>d);
    printf("%d\n", c<d);
    printf("%d\n", c>=d);
    printf("%d\n", c<=d);
    

    //logical operators

    int e, f;

    e = 0;
    f = 24;

    printf("e&&f %d \n", e&&f);  // all condition are required true to execute program
    printf("e||f %d \n", e||f); // one condition are required to execute program
    printf("!f %d \n", !f); // if condition is true then is converte to false

    //bitwise operators 


    /*

    a  |  b  | a&b | a|b | a^b 

    0     0     0     0     0

    0     1     0     1     1

    1     1     1     1     0

    1     0     0     1     1


    & all value are required true
    | one value are required true
    ^ one value are required false
    
    
    
    */

   // assignment operators


   int num1 = 1;

   int num2 = 2;

   num2 += num1;

   printf("%d", num2);
   

    return 0;
}

