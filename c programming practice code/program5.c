#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    printf("enter two numbers : ");
    int a,b;
    scanf("%d%d", &a,&b);
    if(a>b)
        printf("a is greater");
    else
        printf("b is greater");
    return 0;
}