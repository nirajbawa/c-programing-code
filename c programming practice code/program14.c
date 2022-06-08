#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    printf("enter number to find its factorial : ");
    int num, i =1 , ans = 1;
    scanf("%d", &num);
    while (i<=num)
    {
        ans *=i;
        i++;
    }
    printf("factorial is = %d", ans);

    return 0;
}