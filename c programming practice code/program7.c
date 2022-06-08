#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    int num;
    printf("enter number : ");
    scanf("%d", &num);
    if(num<0)
        printf("number is negative");
    else
        printf("number positive");
    return 0;
}