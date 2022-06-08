#include <stdio.h>
#include <math.h>
#define clrscr(); system("cls");

// formula for area of rectangle length*width and perimeter is = 2*(length+width)
// formula for area of tringle is 0.5*(height*base)

// perimeter formula is = 2*(length+width)

int main()
{
    clrscr()
    int area, peri, length, width;
    printf("enter length sand width : ");
    scanf("%d%d", &length,  &width);
    int height, base, tri_area;
    printf("enter height and base : ");
    scanf("%d%d", &height, &base);
    area = length*width;
    peri = 2*(length+width);

    tri_area = 0.5*(height*base);
    
    printf("the area of rectange is : %d & perimeter is : %d\n", area, peri);
    printf("the area triangle is : %d", tri_area);

    return 0;
}