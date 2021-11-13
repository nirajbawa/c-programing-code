#include <stdio.h>

// array in function as argument normal method

// int func(int array[])
// {
//     for(int i = 0; i<4; i++)
//     {
//         printf("the valuw at %d to %d\n", i, array[i]);
//     }
//     // array[0] = 45; / very  important point that is you change any value here, it gets reflected in main()
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 2, 56, 4};
//     printf("%d\n", arr[0]);
//     func(arr);
//     printf("%d\n",arr[0]);
//     return 0;
// }

// array in a function as argument using pointer

// void func(int *ptr)
// {
//     for(int i = 0; i<4; i++)
//     {
//         printf("the value at %d is %d\n", i, *(ptr+i));
//     }
//     *(ptr + 2) = 54456;
// }

// int main(int argc, char const *argv[])
// {
//     int arry[] = {1,  2, 3,  4};
//     func(arry);
//     func(arry);
//     return 0;
// }

void func(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[][2] = {{1, 2}, {3, 4}};
    func(arr);
    return 0;
}
