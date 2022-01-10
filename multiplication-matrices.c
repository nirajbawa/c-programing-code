// important formula for multiplication matrix

// |R1,C1  R1,C2|
// |R2,C1  R2,C2|

//   sum += a[r][c] * b[r][c];

#include <stdio.h>

int arow, brow, acol, bcol;

int arrintput1(int arr[arow][acol])
{
    
    printf("\n\n ***********************************************************************************************************************************************************\n\n");
    printf("PLEASE INTER COLUMM FIRST\n");
    for (int j = 0; j < arow; j++)
    {
        for (int i = 0; i < acol; i++)
        {
            scanf("%d", &arr[j][i]);

        }
    }
    printf("\n\n ***********************************************************************************************************************************************************\n\n");
}


int arrintput2(int arr[brow][bcol])
{
    
    printf("\n\n ***********************************************************************************************************************************************************\n\n");
    printf("PLEASE ENTER COLUMN SECOND\n");
    for (int j = 0; j < brow; j++)
    {
                   

        for (int i = 0; i < bcol; i++)
        {
            scanf("%d", &arr[j][i]);
        }
                    

        // printf("\n\n");
    }
    printf("\n\n ***********************************************************************************************************************************************************\n\n");
}



int matmult(int a[arow][acol], int b[brow][bcol], int result[2][2])
{
    int sum=0;
    int x;
    if(arow==brow)
    {
        x = arow;
    }
    else if(acol==bcol)
    {
        x = acol;
    }
    else if(acol==brow)
    {
        x = acol;
    }
    else if(arow==bcol)
    {
        x = arow;
    }
    else if(bcol==acol)
    {
        x = acol;
    }

    for(int i =0; i<arow; i++)
    {
        for(int j=0; j<bcol; j++)
        {
            for(int k = 0; k<x; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // printing result hare
    for(int i=0; i<arow; i++)
    {
        for(int j=0; j<bcol; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
}
   
int main()
{
    for(;;)
    {

    // getting length of matrices
    //a
    printf("PLEASE ENTER THE LENGTH MATRIX 'A'\n");
    printf("LENGTH OF ROWS : ");
    scanf("%d", &arow);
    printf("LENGTH OF COLUMNS : ");
    scanf("%d", &acol);
    // b
    printf("PLEASE ENTER THE LENGTH MATRIX 'B'\n");
    printf("LENGTH OF ROWS : ");
    scanf("%d", &brow);
    printf("LENGTH OF COLUMNS : ");
    scanf("%d", &bcol);

    // marices array
    int a[arow][acol];
    int b[brow][bcol]; 
    int result[arow][bcol];

    // function for matrix column multiplication
    arrintput1(a);
    arrintput2(b);
    // function for matrix multiplication
    matmult(a,b, result);

    int quit;
    printf("\n\nPLEASE ENTER '0' FOR QUIT AND '1' FOR CONTINUE\n\n");
    scanf("%d", &quit);
    if(quit == 0)
    {
        break;
    }
    else if(quit == 1)
    {
        continue;
    }
    }
    return 0;
}
