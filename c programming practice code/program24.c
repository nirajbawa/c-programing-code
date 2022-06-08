#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    
    int marks;
    printf("\n *******enter grade (0-100) : ");
    scanf("%d", &marks);
    switch(marks/10)
    {
        case 10:
        case 9:
            printf("your grade is A");
            break;
        case 8:
            printf("your grade is B");
            break;
        case 7:
            printf("your grade is C");
            break;
        case 6:
            printf("your grade is D");
            break;
        case 5:
            printf("your grade is E");
            break;
        case 4:
            printf("your grade is F");
            break;
        default:
            printf("your fail");
    }
 
    
    return 0;
}