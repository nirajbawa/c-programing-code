#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    char a;
    printf("enter character : ");
    scanf("%c", &a);
    if(a=='a' || a=='e' || a=="i" || a=='o' || a=='u')
        printf("character is vowel");
    else
        printf("character not vowel");
    return 0;
}