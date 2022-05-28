#include <stdio.h>


int main()
{

// do while loop 
// int num, index = 0;
// printf("enter a number : \n");
// scanf("%d", &num);

// do 
// {
//     printf("%d\n", index+1);
//     index = index+1;
// }while(index<num); // jab tak condition false nahi hogi tab tak loop chalega ex : num = 10 and index = 0 then index jab tak num ki value jitna nahi hojata condition false nahi ho jati tab tak loop chalega


// while loop

// int i = 0;
// while (i<54)
// {
//     printf("%d\n", i);
//     i = 1+i;
// }

// for loop 

// printf("hello  word\n");
// // int i;
// for(int i = 0, n = 0;  i<10, i<5; i++, n++ ) //we can add multiple expression, condition, incremen in loop and is not add to complosory to add 
// {
//     printf("%d %d\n", i,n);
// }

//break

// int i, age;
// for ( i = 0; i < 10; i++)
// {
//     printf("%d enter your age : ", i+1);
//     scanf("%d", &age);
//     if(age<10){
//         break; //when condition is true then loop is stop condition si false then loop is not stop
//     }
// }


//continue


// int i, age;

// for ( i = 0; i < 10; i++)
// {
//     printf("%d enter your age : ", i+1);
//     scanf("%d", &age);
//     if(age<10)
//     {
//         continue; // is condition is true then down lines of code is not execute then and loop is continue then codition is false all down lines of code are execute and loop continue
//     }
//     printf("condition is false continue\n");
// }

// goto

// for (int i = 0; i < 10; i++)
// {
//     printf("%d\n",i);
//     for (int n = 0; n < 10; n++)
//     {
//         int g;
//         printf("enter g : ");
//         scanf("%d", &g);
//         if(g==0)
//         {
//             // break; //break is only closing one loop The loop closes where it is declared
//             goto end; // goto end is closing all the loops 
//         }
//     }s
// }
// end:

// int a = 3;
// float b = 10.000;
// printf("%d",(int)b);

int a = 3;
float b = (float)54/5;
printf("%f", b);

return 0;
}

