#include <stdio.h>
#include <string.h>
/*

you manage a travel agency and you want your n driver to input thire following details :
1. name 
2. driving license  no
3. route 
4. kms
your program should be able to take n as input (or you can take n = 3 for simplicity) and 
your dirvers will start inputting their details one by one

your program should print details of the drivers in a beautiful fashion
user structures

*/

struct dirver
{
    char name[10];
    int driving_license_no;
    char route[50];
    int kms;
} d1, d2, d3;

int d1print()
{
    printf("\n\nplease enter your details : \n\n");
    

    char dname[10], droute[50];
    int ddriving_license_no, dkms;

    printf("please enter your name : ");
    getchar();
    gets(dname);

    printf("please enter your route : ");
    getchar();
    gets(droute);

    printf("please enter your driving license no : ");
    scanf("%d", &ddriving_license_no);

    printf("please enter your kms : ");
    scanf("%d", &dkms);

    strcpy(d1.name, dname);
    d1.driving_license_no = ddriving_license_no;
    strcpy(d1.route, droute);
    d1.kms = dkms;
}

int d2print()
{
    printf("\n\nplease enter your details : \n\n");
    

    char dname[10], droute[50];
    int ddriving_license_no, dkms;

    printf("please enter your name : ");
    getchar();
    gets(dname);

    printf("please enter your route : ");
    getchar();
    gets(droute);

    printf("please enter your driving license no : ");
    scanf("%d", &ddriving_license_no);

    printf("please enter your kms : ");
    scanf("%d", &dkms);

    strcpy(d2.name, dname);
    d2.driving_license_no = ddriving_license_no;
    strcpy(d2.route, droute);
    d2.kms = dkms;
}


int d3print()
{
    printf("\n\nplease enter your details : \n\n");
    

    char dname[10], droute[50];
    int ddriving_license_no, dkms;

    printf("please enter your name : ");
    getchar();
    gets(dname);

    printf("please enter your route : ");
    getchar();
    gets(droute);

    printf("please enter your driving license no : ");
    scanf("%d", &ddriving_license_no);

    printf("please enter your kms : ");
    scanf("%d", &dkms);

    strcpy(d3.name, dname);
    d3.driving_license_no = ddriving_license_no;
    strcpy(d3.route, droute);
    d3.kms = dkms;
}




int main()
{
    d1print();
    d2print();
    d3print();
    printf("\n\n detail of drivers : \n\n");
    printf(" 1. name : %s \n 2. driving license no : %d \n 3. route : %s \n 4. kms : %d \n\n", d1.name, d1.driving_license_no, d1.route, d1.kms);
    printf(" 1. name : %s \n 2. driving license no : %d \n 3. route : %s \n 4. kms : %d \n\n", d2.name, d2.driving_license_no, d2.route, d2.kms);
    printf(" 1. name : %s \n 2. driving license no : %d \n 3. route : %s \n 4. kms : %d \n\n", d3.name, d3.driving_license_no, d3.route, d3.kms);
    return 0;
}