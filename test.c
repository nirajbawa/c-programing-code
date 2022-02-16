

#include <stdio.h>
#include <math.h>
#define pie 3.14

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    float a, area;
    a = distance(x1, y1, x2, y2);
    area = pie * (a * a);
    return area;
}

int main()
{
    int x1, y1, x2, y2;
    float area;
    printf("Enter the value of x1\n");
    scanf("%d", &x1);

    printf("Enter the value of x2\n");
    scanf("%d", &y1);

    printf("Enter the value of y1\n");
    scanf("%d", &x2);

    printf("Enter the value of y2\n");
    scanf("%d", &y2);
    area = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("Area of circle is: %.2f\n", area);
    return 0;
}