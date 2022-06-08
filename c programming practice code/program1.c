#include <stdio.h>
#include <math.h>
#define pi M_PI

// formula to to find area of circle is pi*r^2
// perimeter or circumference of circle formula 2*pi*r

int main()
{
    int rad;
    float area, circum;
    printf("enter radius : ");
    scanf("%d", &rad);
    area = pi * (rad*rad);
    circum = 2*pi*rad;
    printf("the area is = %f \nthe circumference of circle is = %f", area, circum);
}