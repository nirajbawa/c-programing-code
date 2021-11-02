#include <stdio.h>

//multiplication table

int main()
{

    // printf("6*1 = %d \n", 6*1);
    // printf("6*2 = %d \n", 6*2);
    // printf("6*3 = %d \n", 6*3);
    // printf("6*4 = %d \n", 6*4);
    // printf("6*5 = %d \n", 6*5);
    // printf("6*6 = %d \n", 6*6);
    // printf("6*7 = %d \n", 6*7);
    // printf("6*8 = %d \n", 6*8);
    // printf("6*9 = %d \n", 6*9);
    // printf("6*10 = %d \n", 6*10);

    for (;;)
    {
        printf("which table do you print : ");
        int num;
        scanf("%d", &num);
        for ( int i = 1; i < 10+1; i++)
        {
            int table = num*i;
            printf("%d*%d=%d\n", num, i ,table);
        }
        
    }

    return 0;
}