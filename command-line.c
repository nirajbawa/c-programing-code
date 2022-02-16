// #what are commant line arrhguments


// * command line argument is an important concept in C programming.
// * somtimes we neeed to pass arguments from the command line to program set off inputs.
// * command line arguments are used to supply paramenter to the program when it is invoked.
// * it is mostly used when you need to control your program from the console.
// * these arguments are passed to the main() method.



// command line example

// FFmpeg is a free and open-source project consisting of a vast sotfware suite of libraries an programs for handing ideo, audio,,and other  multimedia files streams.

// Ffmpeg.exe is a command line utility written  in c language.

// other examples include git, brew, apt-get etc.

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("the value of argc is : %d\n", argc);
//     return 0; 
// }

// output : 

// the value of argc is : 1

// for giveing command line argument to program first we and type commmand .\utilityName.exe "arguments1" "more" 
// when we can can not give arguments than value of argc is 1 it's store default file name then other user arguments.


#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("value of argc is : %d\n",argc);
    for(int i = 0; i<argc; i++)
    {
        printf("this is a argument at index number :%d: value of :  %s \n", i, argv[i]);
    }
    return 0;
}

// output :

// .\command-line.exe niraj 
// bava

// value of argc is : 3
// this is a argument at index number :0: value of :  D:\codefiles\c programing code\code with harry c programing code\command-line.exe 
// this is a argument at index number :1: value of :  niraj 
// this is a argument at index number :2: value of :  bava 