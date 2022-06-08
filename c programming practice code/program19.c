#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    int pos, fno= 0, sno = 1, thno = 0, i =1, temp;
    printf("enter least postition : ");
    scanf("%d", &pos);
    while (i<=pos)
    {
        thno = fno+sno;
        printf("\n%d %d %d", fno, sno, thno);

        fno = sno;
        sno = thno;
        i++;
    }
    
    return 0;
}