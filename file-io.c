/*
# why do we need a file ?

* files are used to store data and information .
* files aare used to read & access data anytime form the hard disk
files make it easy for a programmer to access and store content without losing
it on program temination.

# volatile memory

*volatile memory is computer storage that only maintans its data while the
device is powered.

*the RAM will hold data, programs, and information as long as it has a constatant
power supply but immediately the power  is interputed all that content is cleared.

*the volatile memory will only hold data temporarily.

# non volatile memory

* non-volatile memory is computer memory that can retain the stored information
even whne not powered.

*this type of memmory is also referred to as permanent memory since data stored
within it can be retrived even when there is no constant power supply.

*it is used for the long term storage of data.

why do we need files ?

* when a C program is terminated, the data storaed in ram is lost.

* storing in a file will preserve our data enven after the progam terminates.

* RAM  is not able to handle quite large amount of data due to its small size relative to hard disk.

* it is easy to transfer data as files.




# types of files

    $there are two types fo files :

        *text files
        *binary files

# file operations in  c

 $ in c we can perform  these high level operations on files :

    1. creating a new files
    2. opening a file
    3. closingga file
    4. reading form and writing to file


*/

/*

# working with files in c

* when woring with file we  have to declare a pointer of
type FILE

* this declearation helpes us to work with files through c
program.

FILE * ptr = NULL;

hard disk

ram

# opening a file - creating or editing a file

* stdio.h contains a fucntion  called fopen() for opening files in  C.

* the syntax for opening a file in standard I/O is:

            ptr = fopen("fileopen","mode")

* for example :

    fopen("E:\\code\\harry.txt","w");
    fopen("E\\:programming\\bahi.bin","rb");

fopen("test.txt","r,w,a,r+");


#closing a file


* any file which is opened in a C program needs to be closed

* closing a file is accomplished by the libaray function fclose()

* fclose(ptr); //fptr is the file pointer associated with file to be closed


# reading a file

* in order to read a file, we can use fscanf function

* this function is file version of scanf function

* fscan expects a file pointer in additon to the other arguments which scanf expects

* we will have to pen the file in read mode in order to use this function


# writing to a file

* in order to write to a file, we can use fprintf function

* this function is file version of printf function

* fprintf expects a file pointer in additon to the other arguments which printf expects

* we will have to open the file in write mode in order to this function


*/

// #include <stdio.h>

// int main()
// {
//     // reading
//     FILE *ptr = NULL;

//     char string[50];

//     ptr = fopen("io.txt", "r");
//     fscanf(ptr, "%s", string);
//     printf("the content of this file has : %s\n", string);

// writing
//  FILE *ptr = NULL;
//  char string[50] = "this txt";
//  ptr = fopen("io.txt", "w");
//  fprintf(ptr, "%s", string);

// //apand
//  FILE *ptr = NULL;
//  char string[50] = "this txt";
//  ptr = fopen("io.txt", "a");
//  fprintf(ptr, "%s", string);

//     return 0;
// }

//  mode & description

/*

"r"

opens an existing text file for reading

"w"

opens a file for writting, if it doesn't exist, then a new file is created.
writing starts froms thee beginning of the file.

"a"

opens a text file for writing in appending mode. it it does not exist, then a new file is created. the program will
start appending content to existing file content.

"r+"

this mode will open a text file for both reading and writing.

"w+"

opens a text file for both reading and writing, it first truncates the file to zero length
if it exists, otherwise creates a file it if does not exist.

"a+"

opens a text file for both reading and writing. it creates the file if it does
not exist. the reading will start from the beginning but  writing can only append to file.


// other file i/o functions in  c

there are various functions provided by c standard  to read write a file, character by character, or in  the form of a fixed length string

* fome of them are :

*fputc

* simplest function to write characters to a file is fputc

*syntax of fputc goes as follows :

    * int fputc (character, FILE pointer);
    * it returns the written character written on success.
    * on failure it returns EOF
    * the EOF is a constant defined in the header file stdio.h


#include <stdio.h>

int main()
{
    FILE * ptr = NULL;
    ptr =  fopen("myfile.txt", "w");
    // char string  = 't';

    // fputc(string, ptr);
    // fputc('h', ptr);

    char string[20] = "hello";

    int i = 0;
    while(string[i]!='\0')
    {
        fputc(string[i], ptr);
        i++;
    }

    return 0;
}



*fputs

* fputs function is used to wirte a null terminated string to a file in c

    * int fputs(conts char*s, FILE*fp);



#include <stdio.h>

int main()
{
    FILE * ptr = NULL;
    ptr =  fopen("myfile.txt", "w");
    // fputs("this is  string", ptr);

    char string[20] = "this is this";

    fputs(string, ptr);

    fclose(ptr);
    return 0;
}


*fgetc

* simplest function to read characters to a file is fgets

    * int fputc (FILE*fp);
    * it returns the written character written on success.
    * on failure it returns EOF
    * the EOF is a constant defined in the header file stdio.h

#include <stdio.h>

int main()
{
    FILE * ptr = NULL;
    ptr = fopen("myfile.txt", "r");
    // char c  = fgetc(ptr);
    // c  = fgetc(ptr);
    // printf("the character i read was : %c\n",  c);
    // c  = fgetc(ptr);
    // printf("the character i read was : %c\n",  c);
    // c  = fgetc(ptr);
    // printf("the character i read was : %c\n",  c);

    int i = 0;
    while(i<14)
    {
        char c = getc(ptr);
        printf("the character i read was : %c\n", c);
        i++;
    }

    fclose(ptr);
    return 0;
}

output is :

the character i read was : t
the character i read was : h
the character i read was : i
the character i read was : s
the character i read was :
the character i read was : i
the character i read was : s
the character i read was :
the character i read was : s
the character i read was : t
the character i read was : r
the character i read was : i
the character i read was : n
the character i read was : g

*fgets

* fgets function is used to read a null terminated string to a file in c

    * int fgets(const char*s, intn, FILE*fp);


#include <stdio.h>

int main()
{
    FILE * ptr = NULL;

    ptr = fopen("myfile.txt", "r");

    char string[4];

    fgets(string, 3, ptr);

    printf("the string is : %s\n", string);

    fclose(ptr);

    return 0;
}

output is :
the string is : th


*/


// "r+"

// in r++ mode we can perform both activity read write but if when we can write in R+ mode it's replace conttant form starting with old contant.


// #include <stdio.h>

// int main()
// { 
//     FILE * ptr = NULL;
//     ptr = fopen("myfile.txt", "r+");

//     fputs("this", ptr);



//     fclose(ptr);

//     return 0;
// }


// "w+"

// in w+ mode we can perform both activity read and write but when we can writing first it clearing old contant of file so it write new contanat in file


// #include <stdio.h>

// int main()
// { 
//     FILE * ptr = NULL;
//     ptr = fopen("myfile.txt", "w+");

//     fputs("this", ptr);

//     fclose(ptr);

//     return 0;
// }

// "a+"

// a++ mode we can perform 3 activity read write and append. in write mode it can't clearing old contant it's append new contant in end of old contant

// #include <stdio.h>

// int main()
// { 
//     FILE * ptr = NULL;
//     ptr = fopen("myfile.txt", "a+");

//     char string[2000];
//     fgets(string, 2200, ptr);
//     printf("contant is : %s", string);
//     fputs("who are you ", ptr);

//     fclose(ptr);

//     return 0;
// }
