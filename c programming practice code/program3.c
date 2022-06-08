#include <stdio.h>
#define clrscr(); system("cls");

// Fahrenheit to celsius c =(f-32)/1.8
// celsius to Fahrenheit f = (c*1.8)+32

int main()
{
    clrscr();
    float ftemp, ctemp;
    float ftemp1, ctemp2;

    printf("enter ftem : ");
     scanf("%f", &ftemp);
    printf("enter ctemp : ");
   
    scanf("%f", &ctemp2);
    ctemp = (ftemp-32)/1.8;
    ftemp1 = (ctemp2*1.8)+32;
    printf("the celsius temperature is = %f\n", ctemp);
    printf("the Fahrenheit temperature is = %f", ftemp1);
    return 0;
}