#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceword(const char *str, const char *oldword, const char *newword)
{
    char *resultString;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);

    // count the number of time old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;

            // jump over this word
            i = i + oldwordlength - 1;
        }
    }
    // making a new string to fit in the replace words
    resultString = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);

    i = 0;

    while (*str)
    {
        // compare the substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultString[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *tamplete = NULL;
    FILE *bill = NULL;

    printf("\n\n ########################################### wellcome to automated bill genrator ########################################################### \n\n");
    printf("your your and give tamplate file address to replace word in it\n ex : D:\\codefiles\\c programing code\\code with harry c programing code\\tamplete.txt \n\n");
    printf("enter your file address : ");
    char tampadd[100];

    gets(tampadd);

    tamplete = fopen(tampadd, "r");
    bill = fopen("bill.txt", "w");

    char tampleteText[300];
    fgets(tampleteText, 300, tamplete);

    printf("\n\nyour file contant is : %s\n\n", tampleteText);

    printf("how many words do you have replace from this document \n\n enter the numbers : ");


    int repwordnum;
    scanf("%d", &repwordnum);
    getchar();
    printf("\n");
    char wordstring[repwordnum][40];
    char repword[repwordnum][40];

    char *newstr;
    
    for(int i = 0; i<repwordnum; i++)
    {
     printf("enter the %d word do you replace : ", i+1);     
     gets(wordstring[i]);

    }
    printf("\n\n");
     for(int i = 0; i<repwordnum; i++)
    {
     printf("enter the %d word do you replace with : ", i+1);     
     gets(repword[i]);

    }

   

    for(int i = 0; i<repwordnum; i++)
    {
        if(i == 0)
        {
                newstr = replaceword(tampleteText, wordstring[i], repword[i]);
        }
        else
        {
                newstr = replaceword(newstr, wordstring[i], repword[i]);
        }

    }
    printf("the actual bill generated is : %s\n\n", newstr);
    printf("The generated bill has been written to the file bill.txt\n\n");
    // printf("newstring is : %s", newstr);

    fprintf(bill, "%s", newstr);

    fclose(tamplete);
    fclose(bill);

    return 0;
}