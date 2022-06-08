#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    for(int i = 1; i<=4; i++)
    {
        for(int k= 1; k<=i; k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}