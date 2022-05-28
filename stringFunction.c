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
     getchar();
    gets(s1);
    printf("please enter the input : ");
     getchar();
    gets(s2);
    // printf("%s and %s is friend \n", s1, s2);
    // strcpy(s3, strcat(s1,s2));
    // puts(s3);
    //str camp

    if(strcmp(s1, s2)<0)
    {
        printf("s1 is less than s2 (so it's return <0)" );
        //-1
        // if the first non-matching character in str1 is lower (in ASCII) than that of str2.
        // A IS 1
        // B IS 2
        // A < B
        // TRUE THAN RETURN : -1
    }
    else if(strcmp(s1, s2)>0)
    {
        printf("s1 is greater than s2 (so it's return >0)");
        //1
        // if the first non-matching character in str1 is greater (in ASCII) than that of str2.
        // A IS 1
        // B IS 2
        // B > A
        // TRUE THAN RETURN : 1
    }
    else if(strcmp(s1, s2)==0)
    {
        printf("s1 is equal to s2 (so it's return 0)");
        //0
        // if strings are equal
        // A IS 1
        // A IS 1
        // A == A
        // TRUE THAN RETURN : 0
    }
 
//OUTPUT : 

// 1. 
// please enter the input : ABC
// please enter the input : DCE
// s1 is less than s2 (so it's return <0)

// 2.
// please enter the input : DEC
// please enter the input : ABC
// s1 is greater than s2 (so it's return >0)

// 3.
// please enter the input : ABC
// please enter the input : ABC 
// s1 is equal to s2 (so it's return 0)
 

    return 0;
}
