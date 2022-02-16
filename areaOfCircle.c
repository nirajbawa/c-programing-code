
/*

find Euclidean distance off to point and find it's area of circle

find Euclidean distance
get values from user :

a = (x1-x2)
b = (y1-y2)

process it :

formula is root((x1-x2)^2+(y2-y1)^2)

1st step :

(x2-x1) = n1
(y2-y1) = n2

2nd step :

Square the results and sum them up

(n1)*(n1)+(n2)*(n2)

= n

3rd step :

Now Find the square root and that's your result

root(n) = rootn



find area of circle using Euclidean :

pi*rootn*rootn




*/


#include <stdio.h>
#include <math.h>
#define debug 1


float getEuclidean(int x1, int y1, int x2, int y2)
{
    int n1 = x2-x1;
    int n2 = y2-y1;

    // Square the results and sum them up

    int square = (n2*n2)+(n1*n1);

    // Now Find the square root and that's your result:

    float squareRoot = sqrt(square); //this is Euclidean


    if(debug==1)
    {
        printf("The distance between these points is : %.2f\n",squareRoot);
    }

    return squareRoot;
    
}


void areaofcircle(float (*euclidean)(int,int,int,int))
{
    int x1,y1,x2,y2;
    printf("Enter your points\n\n");

    printf("Enter your points A : \n");

    printf("x1 : ");
    scanf("%d", &x1);
    printf("y1 : ");
    scanf("%d", &y1);

    printf("Enter your points B : \n");
    
    printf("x1 : ");
    scanf("%d", &x2);
    printf("y1 : ");
    scanf("%d", &y2);

    float geteuclidean = euclidean(x1,y1,x2,y2);
    float a = (M_PI * pow(geteuclidean, 2));

    printf("Your area of circle is : %.2f\n", a);
}

int main()
{


    float (*Euclidean)(int, int, int, int);
    Euclidean = &getEuclidean;
    areaofcircle(Euclidean);

    return 0;
}
