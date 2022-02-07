// if any number is 1 so is palindrome else 0

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int checkpalnum(int num)
// {
//     if(num==1)
//     {
//         return 1;
//     }
//     else if(num==0)
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int num;
//     printf("enter  a number to check weather it is a palindrome or not \n");
//     printf("please enter number : ");
//     scanf("%d", &num);
//     int callfunccpn = checkpalnum(num);
//     if(callfunccpn==1)
//     {
//         printf("this is palindrome\n");
//     }
//     else if(callfunccpn==0)
//     {
//         printf("this not palindrome\n");
//     }
//      else
//     {
//          printf("invalid input\n");
//     }

//     return 0;
// }

// this type of number is palindrome ----> 878 - 878
// this not palindrome ---> 877-778


 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkpalnum(int num)
{

    int reversed = 0;
    int originalNumber = num;

    while(num != 0)
    {
        reversed = reversed*10+num%10;
        num = num/10;
    }
    printf("reversed number is : %d\n", reversed);

    if(originalNumber==reversed)
    {
        return 1;
    }
   else
   {
       return 0;
   }
}

int main()
{
    int num;
    printf("enter  a number to check weather it is a palindrome or not \n");
    printf("please enter number : ");
    scanf("%d", &num);
    int callfunccpn = checkpalnum(num);
    if(callfunccpn==1)
    {
        printf("this is palindrome\n");
    }
    else
    {
        printf("this not palindrome\n");
    }

    return 0;
}
