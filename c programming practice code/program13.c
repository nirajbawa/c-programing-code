#include <stdio.h>
#define clrscr(); system("cls");

int main()
{
    clrscr();
    printf("1.isoceles\n 2.quilateral\n 3.scalene\n 4.right angle\n");
    int option;
    scanf("%d", &option);
    int s1,s2,s3;
    printf("enter three sides : ");
    scanf("%d%d%d", &s1, &s2, &s3);
    switch (option)
    {
    case 1:
        if(s1==s2 || s2==s3 || s3==s1)
            printf("tirngle are iso");
        break;
    case 2:
        if(s1==s2 && s2==s3 && s3==s1)
            printf("tringles are quil");
        break;
    case 3:
        if(s1!=s2||s2!=s3||s3!=s1)
            printf("triangles are scal");
    case 4:
        if(s1 == s2*s2+s3*s3 || s2 == s1*s1+s3*s3 || s3 == s1*s1+s2*s2)
            printf("right angle");
    default:
        break;
    }
    return 0;
}