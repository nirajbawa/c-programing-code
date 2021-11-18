#include <stdio.h>


// print reverse array

// void reverse(int ptr[])
// {
//     for(int i = 6; i>=0; i--)
//     {
//         printf("%d\n", ptr[i]);
//     }
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7};
//     // printf("%d\n", sizeof arr / sizeof arr[0]); // sizeof arr  / sizeof arr[0] this function is use for getting length of array 
//     reverse(arr);
//     return 0;
// }

void arrrev(int arr[])
{
    int temp;
    for(int i = 0; i<7/2; i++)
    {
        // swap two numbers+
        temp = arr[i]; // this line is store value arr[i] ex : a
        arr[i] = arr[6-i]; // this line is add this line is coverte arr[i] to ex : b
        arr[6-i] = temp; // this line concatenate to main variable
    }
}

void arrprint(int arr[])
{
    for(int i = 0; i<7; i++)
    {
        printf("the value of element %d is %d\n ", i, arr[i]);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    printf("before reversing the array \n");
    arrprint(arr);
    arrrev(arr);
    printf("\nafter reversing the array\n");
    arrprint(arr);
    return 0;
}

