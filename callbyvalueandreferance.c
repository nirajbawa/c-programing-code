#include <stdio.h>


// call by value example
// the value is cahnge in main and sub functio also then you use poinnter method (call by value and call by referance).

// void changeValue(int *address)
// {
//     *address = 544565;
// }
// int main(int argc, char const *argv[])
// {
//     int a = 34, b = 56;
//     printf("the value of a now is %d\n", a); 
//     changeValue(&a);
//     printf("the value of a now is %d\n", a);
//     return 0;
// }

// call referance
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(int argc, char const *argv[])
// {
//     int a = 34,b = 74;
//     printf("%d and %d\n", a,b);
//     swap(&a,&b);
//     printf("%d and %d\n", a,b);
//     return 0;
// }


// quick quiz

void subtract(int *x, int *y)
{
    int add, sub;
    add = *x + *y;
    sub = *x - *y;
    *x = add;
    *y = sub;    

}

int main(int argc, char const *argv[])
{
    int a = 4, b = 3;
    printf("%d and %d\n", a,b);
    subtract(&a,&b);
    printf("%d and %d\n", a,b);
    return 0;
}