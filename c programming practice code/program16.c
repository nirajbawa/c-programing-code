#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    printf("enter number : ");
    int num, sum = 0;
    scanf("%d", &num);
   
    do{
        sum += num;
    }while(sum<100);
    printf("the sum of num is = %d", sum);
    return 0;
}