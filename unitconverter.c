#include <stdio.h>

int kmsTomiles(float km)
{
    float opration = 0.621371 * km;
    printf("%.2f.mailes\n", opration);
}

int inchesTofoot(float inches)
{
    float output = inches * 0.0833333;
    printf("%f.foot\n", output);
}

int cmToinches(float cm)
{
    float outp = cm * 0.393701;
    printf("%f.inches\n", outp);
}

int poundTokg(float p)
{
    float out = p * 0.453592;
    printf("%f.kg\n", out);
}

int inchesTometer(float i)
{
    float o = i * 0.0254;
    printf("%d.m\n", o);
}

int main()
{
    for (;;)
    {
        printf("\nselect options : \n 1.km to miles\n 2.inches to feet\n 3.cms to inches\n 4.pound to kgs\n 5.inches to meters\n 0 to quit\n\nenter option : ");
        int option;
        int input;
        scanf("%d", &option);
        if (option == 1)
        {
            printf("enter input : ");
            scanf("%d", &input);
            kmsTomiles(input);
        }
        else if (option == 2)
        {
            printf("enter input : ");
            scanf("%d", &input);
            inchesTofoot(input);
        }
        else if (option == 3)
        {
            printf("enter input : ");
            scanf("%d", &input);
            cmToinches(input);
        }
        else if (option == 4)
        {
            printf("enter input : ");
            scanf("%d", &input);
            poundTokg(input);
        }
        else if (option == 5)
        {
            printf("enter input : ");
            scanf("%d", &input);
            inchesTometer(input);

        }
        else if (option == 0)
        {
            break;
        }
        else
        {
            printf("please enter valid input");
        }
        // kmsTomiles(1);
        // inchesTofoot(70);
        // cmToinches(5);
        // poundTokg(50);
        // inchesTometer(5);
    }
    return 0;
}