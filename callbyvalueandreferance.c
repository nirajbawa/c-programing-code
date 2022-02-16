#include <stdio.h>


// call by value example
// the value is change in main and sub function also then 
// you use pointer method (call by value and call by referance).

// void changeValue(int *address)
// {
//     *address = 544565;
// }
// int main()
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
//     temp = *x;//34
//     *x = *y;//74
//     *y = temp;//34
// }
// int main()
// {
//     int x = 34,y = 74;
//     printf("%d and %d\n", x,y);
//     swap(&x,&y);
//     printf("%d and %d\n", x,y);
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

int main()
{
    int a = 4, b = 3;
    printf("%d and %d\n", a,b);
    subtract(&a,&b);
    printf("%d and %d\n", a,b);
    return 0;
}