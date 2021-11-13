// #include <stdio.h>

// // print triangular star pattern and reversed triangular pattern
// // first get user input the print those pattern

// void triangular_star_pattern(int num)
// {
//     for(int i = 0; i<num; i++) // this loop print rows of pattern 
//     {
//         for(int j = 0; j<=i; j++)  //this loop print charcter of pattern
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// void  reversed_triangular_pattern(int value)
// {
//     for(int k = 0; k<value; k++)
//     {
//         for(int l = 0; l<=value-k-1; l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//    for(;;)
//     {
//         printf("\n which star pattern do you have print please select following one option : \n \n 1.triangular star pattern \n 2.reversed triangular pattern\n");
//         char option;
//         scanf(" %c", &option);
//         switch (option)
//         {
//         case '1':
//             printf("how many rows do you have want to print : ");
//             int row;
//             scanf("%d", &row);
//             triangular_star_pattern(row);
//             break;
//         case '2':
//             printf("how many rows do you have want to print : ");
//             int numofrow;
//             scanf("%d", &numofrow);
//             reversed_triangular_pattern(numofrow);
//             break;
//         case 'q':
//             goto end;
//             break;
//         default: 
//             printf("please enter vaild input");
//             break;
//         }
//     }
//     end:

    
    
//     return 0;
// }



#include <stdio.h>


void star()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

int main(int argc, char const *argv[])
{
    star();
    return 0;
}
