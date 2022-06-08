#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    int num;
    printf("enter numbers to print it multiplication table : ");
    scanf("%d", &num);
    int i = 1;
    do{
        printf("%d*%d=%d\n", num, i, num*i);
        i++;
    }while(i<=10);
    return 0;
}