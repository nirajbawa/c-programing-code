#include <stdio.h>

int main(int argc, char const *argv[])
{
    // if else else if statement

    // int age ;

    // scanf("%d", &age);

    // printf("you entered %d as your age\n", age);

    // if(age>=18){
    //     printf("you are grater than 18th");
    // }
    // else if(age<18 && age>=10){
    //     printf("your under 10 to less than 18");
    // }
    // else{
    //     printf("you are not grater than 18ht");
    // }

    // example

    // int ms;

    // printf("if your pass in both subject than you right 1 or fail in any on subject then you write 0 or you fail in both then you press 2 \n");
    // printf("you are pass or not please enter: ");
    // scanf("%d\n", &ms);

    // if(ms==1){
    //     printf("your is gift is 30");
    // }
    // else if(ms==0){
    //     printf("your gif is 15");
    // }
    // else if(ms==2){
    //     printf("your gift is 0");
    // }
    // else{
    //     printf("please inter valid input");
    // }

    // switch statement

    //     int age;
    //     printf("enter your age : ");
    //     scanf("%d", &age);
    //     switch (age)
    //     {
    //     case 18:
    //         printf("your age is 18");
    //         break;

    //     case 15:
    //         printf("your age is less than 15");

    //         break;

    //     default:
    //         printf("not equal to 18");
    //         break;
    //     }

    int x = 10, y = 5;

    switch (x > y && x + y >0)
    {
    case 1:
        printf("hi");
        break;

    case 0:
        printf("hello");
        break;

    default:
        printf("by");
        break;
    }
    
}
