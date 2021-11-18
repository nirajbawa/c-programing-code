#include <stdio.h>
#include <string.h>


//hare we are define structure and student is a name of structure
struct student
{
    int id; // and there are data type of student structure
    int marks;
    char fav_char;
    char name[10];
};
struct student harry, ravi, shubham; // this is a global variable for global scope
// this is a testing variable for testing global scope of student structure and it's variable
void print()
{
    printf("%d", harry.marks);
}

int printAllData()
{
    printf("%d\n", harry.id);
    printf("%d\n", harry.id);
    printf("%d\n", harry.id);
    printf("%d\n", harry.marks);      
    printf("%d\n", harry.marks);
    printf("%d\n", harry.marks);
    printf("%c\n", harry.fav_char);
    printf("%c\n", harry.fav_char);
    printf("%c\n", harry.fav_char);
    printf("%s\n", harry.name);
    printf("%s\n", harry.name);
    printf("%s\n", harry.name);
}

int main()
{    //hare we are define student structure   // harry, ravi shubham is a variable of student structure
    //struct student harry, ravi, shubham; //this is formal variable it's not for global scope
    harry.id = 1;  // hare we are define value of variable
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 45;
    shubham.marks = 56;
    harry.fav_char = 'p';
    ravi.fav_char = 'j';
    shubham.fav_char = 'f';
    strcpy(harry.name, "harry");
    strcpy(ravi.name, "ravi");
    strcpy(shubham.name, "shubham");
    // printf("%d", harry.id); // hare are we print value of studcture student
 //   print();

    //quick quiz 
    //print al the information of a given student

    printAllData();

    return 0;
}
