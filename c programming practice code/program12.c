#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    int a;
    printf("select option : \n 1.sum \n 2.sub\n 3.mul\n 4.div\noption :::::: ");
    scanf("%d", &a);
    printf("enter two numbers : ");
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    switch(a)
    {
        case 1:
            printf("add = %d", (num1+num2));
            break;
        case 2:
            printf("sub = %d", (num1-num2));
            break;
        case 3:
            printf("mul = %d", (num1*num2));
            break;
        case 4:
            printf("div = %d", (num1/num2));
            break;
        default:
            printf("\nInvalid option");
    }
    return 0;
}