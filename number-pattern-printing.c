#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int n1 = n*2-1;
    // Complete the code to print the pattern.
    for (int i = 0; i < n1; i++)
    {
        for (int o = 0; o < n1; o++)
        {
            int min; //1
            if(i<o)
            {
                min = i;
            }
            else{
                min = o;
            }
            if(min<n1-i)
            {
                min = min;
            }
            else{
                min = n1-i-1;
            }
            if(min<n1-o)
            {
                min = min;
            }
            else{
                min = n1-o-1; 
            }
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}

// output :
// 5
// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 