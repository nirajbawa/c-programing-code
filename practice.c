#include <stdio.h>
#include <stdlib.h>


int pattern();
int diffvalprint();
int singlevalue();
int singpattern();

int main()
{
    for(;;)
    {
    
    // getting user input about what they have to print
    int uinput;
    printf("\nWELLCOME TO PATTERN PRINTER\n\n please select option what do you have to print\n\n1.single number printing\n2.different number printing\n\n enter option : ");
    scanf("%d", &uinput);
    getchar();
    printf("\n\n");

    // single value printing
    if(uinput==1)
    {
        singlevalue();
    }
   
    //different numbers printing
    else if(uinput==2)
    {
        diffvalprint();
    }

    else
    {
        printf("\n\n please enter valid input \n\n");
    }
  
    }

    getchar();

    return 0;
}

int diffvalprint()
{
    int *data;
    int sizeofdata;
    printf("enter the size of data : ");

    scanf("%d", &sizeofdata);
    getchar();
    if(sizeofdata>=1 && sizeofdata>=5 && sizeofdata<=40)
    {
    data = (int *)malloc(sizeofdata*sizeof(int));
    
    for(int i = 1; i<sizeofdata+1; i++)
    {
        printf("no : %d : ", i);
        scanf("%d", &data[i]);
         getchar();
       
    }
    int check = 0;
    for(int i = 1; i<sizeofdata+1; i++)
    {
        if(data[i]>9)
        {
            check = 1;
            printf("make sure your all numbers are less than 10");
            break;
        }
    }
    if(check==0)
    {
      printf("\n");
    pattern(data, sizeofdata);
    free(data);
    }
    }

    else{
     printf("please make sure your entered number is more than or equal to '5' or less than equal to 40 \n");
    }

}

int singlevalue()
{
    int value;
    printf("\n what number do you have print : ");
    scanf("%d", &value);
    getchar();
    printf("\n\n");

    if(value>=1 && value>=5 && value<=40)
    {
    singpattern(value, value);
    }
    else
    {
        printf("please make sure your entered number is more than or equal to '5' or less than equal to 40 \n");
    }
}

int singpattern(int data, int sizeofdata)
{

    int i, o;
    for (i = 1; i < sizeofdata+1; i++)
    {
        if(data<10)
        {
                  for(int o = 1; o<sizeofdata-i+1; o++)
        {
            printf(" ");
        }
        }
        else
        {
             for(int o = 1; o<sizeofdata-i+1; o++)
        {
            printf("  ");
        }
        }
        
        for (int in = 1; in < i+1; in++)
        {
            printf("%d", data);  
        }
        for(int r = 1; r<i+1-1; r++)
        {
            printf("%d", data);
        }
        printf("\n");
    }
    
    // printf("hello : %d", data[1]);

}

int pattern(int *data, int sizeofdata)
{

    int i, o;
    for (i = 1; i < sizeofdata+1; i++)
    {
        for(int o = 1; o<sizeofdata-i+1; o++)
        {
            printf(" ");
        }
        
        for (int in = 1; in < i+1; in++)
        {
            printf("%d", data[i]);  
        }
        for(int r = 1; r<i+1-1; r++)
        {
            printf("%d", data[i]);
        }
        printf("\n");
    }
    
    // printf("hello : %d", data[1]);

}