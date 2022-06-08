#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    printf("enter number : ");
    int num;
    scanf("%d", &num);
    if(num%2==0)
        printf("the number is even");
    else
        printf("the number is odd");
    return 0;
}