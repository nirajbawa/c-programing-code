#include <stdio.h>
#include <stdlib.h>

// Dynamic Memory Allocation
// ABC Pvt Ltd. manages employee records of other companies.
// Employee Id can be of any length and it can contain any character
// For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
// Then, you have to take employee id as an input and display it on screen.
// Store the employee id in a character array which is allocated dynamically.
// You have to create only one character array dynamically
// EXAMPLE:
// Employee 1:
// Enter no of characters in your eId
// 45
// Dynamically allocate the character array.
// take input from user

// Employee 2:
// Enter no of characters in your eId
// 4
// Dynamically allocate the character array.
// take input from user

// Employee 3:
// Enter no of characters in your eId
// 9
// Dynamically allocate the character array.
// take input from user

int main()
{
    char *ptr;
    int i = 0;
    int n = 0;

    while (i < 3)
    {
        printf("%d please enter your employee id length : ", i+1);
        scanf("%d", &n);

        ptr = (char *)malloc((n + 1) * sizeof(char));

        printf("please enter your employee id : ");
        getchar();  
        scanf("%s", ptr);
        printf("this is your employee id %s\n", ptr);
        free(ptr);
        i = i+1;
    }

    return 0;
}



