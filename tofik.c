#include <stdio.h>
#define clrscr(); system("cls");


int main()
{
    clrscr();
    int i = 1;
    int count = 1;
    while (i<100)
    {
        /* code */
        // printf("%d ",i);
        
        if(i%2!=0)
        {
            printf("%d :", count);
            
        }   
            count++;
        i++;
    }
    
    return 0;
}