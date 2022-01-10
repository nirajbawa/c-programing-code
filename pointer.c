#include <stdio.h>

//pointer

// pointer is variable which store the value of other variable.
// * = means value of variable which store in variable
// & = means address of of variable

int main()
{
    // int a = 20;
    // // for example int is type of variable *is value of variable and ptra is name of pointer and = &a is address of variable which store in pointer 
    // int *ptra = &a;
    // printf("the address of pointer to a is %p\n", &ptra);
    // printf("the address of a is %p\n", &a);
    // printf("the address of a is %p\n", ptra);
    // printf("the value of is %d\n", *ptra);
    // printf("the value of a is %d\n", a);
    // //null variable in pointer 
    // // we can use it to initialize a pointer variable when that pointer variable isn't assigned any vaild memory address yet
    // int *ptrb = NULL;
    // printf("%p\n", ptrb);

    // char a = '3';
    // char *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra-2);
    // printf("%d\n", sizeof(char));

    // array and pointer 

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptraarr = &arr;
    printf("%d\n", &ptraarr[1]);
    // printf("value at position of the array is %d\n", arr[3]);
    // printf("the addres of first element of the array is %d \n", &arr[0]);
    // printf("the addres of first element of the array is %d \n", arr);
    // printf("the addres of first element of the array is %d \n", &arr[1]);
    // printf("the addres of first element of the array is %d \n \n", &arr + 1); 
    


    // printf("the value at addres of first element of the array is %d \n", *(&arr[0]));
    // printf("the value at addres of first element of the array is %d \n", *(arr));
    // printf("the value at addres of first element of the array is %d \n", *(&arr[1]));
    // printf("the value at addres of first element of the array is %d \n", *(arr + 1));

    return 0;
}



