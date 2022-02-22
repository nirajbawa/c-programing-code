#include <stdio.h>

void printstrig(char string[])
{
    int i= 0;
    while(string[i]!='\0')
    {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

int main() 
{
    // char str[] = {'n','i','r','a','j','\0'};
    char str[10]  =  "niraj";                  
    // gets(str); // gets() functions is use for getting string input form user
    // printstrig(str);
    printf("using printf function : %s\n", str);
    printf("using puts : ");
    puts(str);
    return 0;
}