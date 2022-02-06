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



#include <stdio.h>

int main()
{
    // reading 
    // FILE *ptr = NULL;

    // char string[50];

    // ptr = fopen("io.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("the content of this file has ;  %s\n", string);
     
     //writing 
    //  FILE *ptr = NULL;
    //  char string[50] = "this txt";
    //  ptr = fopen("io.txt", "w");
    //  fprintf(ptr, "%s", string);

    //apand 
     FILE *ptr = NULL;
     char string[50] = "this txt";
     ptr = fopen("io.txt", "a");
     fprintf(ptr, "%s", string);

    return 0;
}

 