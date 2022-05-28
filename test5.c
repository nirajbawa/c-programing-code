//string sort lexicographically


// To sort a given array of strings into lexicographically increasing order or into an order in which the string with the lowest length appears first, a sorting function with a flag indicating the type of comparison strategy can be written. The disadvantage with doing so is having to rewrite the function for every new comparison strategy.

// A better implementation would be to write a sorting function that accepts a pointer to the function that compares each pair of strings. Doing this will mean only passing a pointer to the sorting function with every new comparison strategy.

// Given an array of strings, you need to implement a  function which sorts the strings according to a comparison function, i.e, you need to implement the function :

// The arguments passed to this function are:

// an array of strings : 
// length of string array: 
// pointer to the string comparison function: 
// You also need to implement the following four string comparison functions:

//  to sort the strings in lexicographically non-decreasing order.

//  to sort the strings in lexicographically non-increasing order.

//  to sort the strings in non-decreasing order of the number of distinct characters present in them. If two strings have the same number of distinct characters present in them, then the lexicographically smaller string should appear first.

//  to sort the strings in non-decreasing order of their lengths. If two strings have the same length, then the lexicographically smaller string should appear first.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

int charCount(const char* str)
{
    int n =0;
    int count[128] = {0}; 
    if(NULL==*str)
    {
        return -1;
    }
    while (*str!='\0')
    {
        if(!count[*str])
        {
            count[*str]++;
            n++;
        }
        str++;
    }

    return n;
    
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int check = charCount(a)-charCount(b);
    return check ? check : lexicographic_sort(a, b);
}

int sort_by_length(const char* a, const char* b) {
    int check = strlen(a)-strlen(b);
    return check ? check : lexicographic_sort(a, b);
}



void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int lens = len - 1;
    int con = 0;
    while(!con)
    {
        con = 1;
        for(int i = 0; i<lens; i++)
        {
            if(cmp_func(arr[i], arr[i+1]) > 0)
            {
                char *tarr = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tarr;
                con = 0;
            }
        }
       
    }
}

// wkue
// qoi
// sbv
// fekls

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
    printf("\n\n");
    
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
    
    return 0;
}