#include <stdio.h>
#include <string.h> 

int main()
{
    // char s1[] = "harry";
    // char s2[] = "ravi";
    // char s3[50];

    // printf("the storage for s1, s2 returned %d \n",  strcmp(s1,s2)); // strcam() is function of string which commpair two strings and give output in 0 and -1 means 0 is true and -1 is false 

    // puts(strcat(s1, s2));  // strcat() function is use for concatenate two strings

    // printf("the length of s1 is %d\n", strlen(s1)); // strlen function is use for getting the length string 
     
    //  printf("the length of s2 is %d\n", strlen(s2));

    //printf("the reversed string s1 us : ");
    //puts(strrev(s1)); // strrev function is used for reversed the string
    //printf("the reversed string s1 us : ");
    // puts(strrev(s2));

    //strcpy(s3, strcat(s1, s2)); // strcpy() function is use for copy other string in second string
    // puts(s3);

    // allow user to enter two strings and them concatenate them by saying that
    // strs is a friend of str2

    char s1[10], s2[10], s3[10];
    printf("please enter the input : ");
    gets(s1);
    gets(s2);
    printf("%s and %s is friend \n", s1, s2);
    strcpy(s3, strcat(s1,s2));
    puts(s3);
 

 

    return 0;
}
