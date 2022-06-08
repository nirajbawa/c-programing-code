#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    int a1,a2,a3, avg;
    printf("enter three numbers : ");
    scanf("%d%d%d", &a1, &a2, &a3);
    avg = (a1+a2+a3)/3;
    printf("the average is = %d\n", avg);
    return 0;
}