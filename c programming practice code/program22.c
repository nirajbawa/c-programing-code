#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    int num, rev =0 ,rem, original;
    printf("enter number : ");
    scanf("%d", &num);
    original = num;
    while (num!=0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
    }

    if(original==rev)
        printf("number is palindrome");
    else 
        printf("num is not palindrome");
    
    return 0;
}