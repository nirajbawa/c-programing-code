#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();

    int num, i, flag = 0;
    printf("enter number : ");
    scanf("%d", &num);
    while(num/2)
    {
        if(num%i==0){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==1)
        printf("number is prime");
    else 
        printf("number is not prime");
    return 0;
}