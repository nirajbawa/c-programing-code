#include <stdio.h>
#include <string.h>

// input :
// <h1> this is heading </h1>
//output
//this is a heading

// this is a parser fucntion
void parser(char *string) // here string is give as pointer value of string
{
    //here are a we declare two variables in and index
    int in = 0;
    int index = 0;
    //here are we play the for loop condition si i is 0 then i is is less than size of
    //string the i ++ and start the loop for getting size of string here we use strlen function
    //this loop is remove <> this tag
    for (int i = 0; i < strlen(string); i++)
    {
        // when come in loop then start this if condition
        if (string[i] == '<') // condition is string value of i == '<' then in converte to euqal to 1; *in default value is 0
        {
            in = 1;   // int is change to 1
            continue; // and here continue the loop
        }
        else if (string[i] == '>') // here condition is when string value of i is == '>' then in converte to qual to 0
        {
            in = 0;   // in coverte to 0
            continue; // loop continue
        }
        // here condition is int == 0 then converte create collective variable  string[index] and add value of variable string size of i
        if (in == 0)
        {
            string[index] = string[i]; // add value to string[index] to string size of i
            index++;                   //and ++ the value of index
        }
    }
    string[index] = '\0'; // and here last add value string[index] in char '\0'

    // here we are remove front space from string
    //condition of while is string 0 is equal to 'space' the start this while loop
    while (string[0] == ' ')
    {
        // the condition of the for loop is int o equal to 0 then o is less than strlen of string  then o++ and start the while loop
        for (int o = 0; o < strlen(string); o++)
        {
            // and here are remove space from string
            string[o] = string[o + 1]; // string num of char o then add string o + 1 and remove space and add the add char of string here
        }
    }
    //here we are remove back space of string
    //condition is string num of strlen of string - 1 == is equal to 'space' then start this loop
    while (string[strlen(string) - 1] == ' ')
    {
        // and hare are remove space and add null '\0' to end
        string[strlen(string) - 1] = '\0'; // add in string to num of strlen of string -1 and add char '\0' for define string is end
    }
}

int main()
{
    //this is a string
    char string[] = "  <hhj1  >     this is a heading    </hjhgj1  >   ";
    //call parser function
    parser(string);
    //print output
    printf("this is output :  ~%s~", string);
    return 0;
}
