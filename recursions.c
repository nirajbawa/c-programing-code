#include <stdio.h>

int fib_recursive(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
}

int fib_itterative(int n)
{
    int c = 0;
    int d = 1;

    for(int i = 0; i<n-1; i++)
    {
        d = c+d;
        c = d-c;
    }
    return c;
}

int main()
{
    int a = fib_recursive(44);
    printf("%d\n",a);
    int b  = fib_itterative(44);
    printf("%d",b);
   
    return 0;
}
