#include <stdio.h>

int main()
{

    // one dimensinoal array
    // int mark[4] = {1,2,3,4};
    // mark[0]=10;
    // printf("%d", mark[0]);

    // int mark[4];

    //print array using loop

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array\n", i);
    //     scanf("%d", &mark[i]);
    // }

    // for (int y = 0; y < 4; y++)
    // {
    //     printf("the value of %d element is %d\n", y, mark[y]);
    // }

    // two dimensional array
    // in example mark[2] is the size of dimensional means size of row and mark[4] is the size of storing charector in array
    int mark[2][4] = {{11,12,13,14},
                    {1,2,3,4}};



    for(int i = 0; i<2; i++)
    {
        for (int j = 0; j<4; j++)
        {
            printf("%d",mark[i][j]);
        }
        printf("\n");
    }




    // printf("%d", mark[0][0]);

    return 0;
}