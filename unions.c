#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[10];
};

int main()
{
    //lets know what is union union is like a structure its use for make user define data type like structure but butter memory management
    //what is deference between structure and union 
    // mean deference is between union and structure is union is have better me memory management
    //hare are example
    // let we have three droum 
    //first droum is play in night it's required two stick play
    //second droum is play in mid night it's required two stick to play
    //third droum is play in morning it's required to play three stick to play
    // how you can play those droum ? 
    //first posiblity is you buy 3 stick you buy 2+2+3=7 stick
    //second posibility you buy 3 stick and use for first night 2 stick and second mid night 2 stick and third morning 3 stick 
    //the difference between structure, each member has its own stroge loction, whereas members of a union uses  a single shared 
    //the difference between  structure and union  lies in the in structure, each member has its ownstorge location, whereas members of a union users a single shared nmemory location.
    // this single shared memory location is equal to the size of its largest data member


    union student s1;
    s1.id = 1;
    s1.marks =  45;
    s1.fav_char = 'g';
    strcpy(s1.name, "niraj"); // last variable is diclear then it's value is print and all variable value is corrupt

    printf("s1.id : %d\n", s1.id);
    printf("s1.marks : %d\n", s1.marks);
    printf("s1.fav_char : %c\n", s1.fav_char);
    printf("s1.name : %s\n", s1.name);

    return 0;
}