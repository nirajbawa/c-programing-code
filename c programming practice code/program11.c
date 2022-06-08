#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    printf("enter three numbers : ");
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a>b && a>c)
        printf("%d is grater then %d and %d", a,b,c);
    else if(b>a && b>c)
        printf("%d is grater then %d and %d", b,a,c);
    else if(c>a&&c>b)
        printf("%d is grater then %d and %d", c,a,b);
        
    return 0;
}