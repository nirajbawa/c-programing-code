#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    int i = 1;
    int sum = 0;
    for(i=0; i<=50; i++)
    {
        if(i%2==0)
        {
            sum +=i; 
        }
    }
    printf("sum = %d", sum);
    return 0;
}
