#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

char username[20];

static int cscore = 0;
static int uscore = 0;

int randnum(int num)
{
     srand(time(NULL));
    int randnum =rand()% num;
    printf;
    return randnum;
}

int maingamefunc(int option, int computer)
{
    if(option==1)
    {
        if(computer==0)
        {
            printf("TI (ROCK VS ROCK = TIE )");
        }
        else if(computer==1)
        {
            printf("COMPUTER IS WIN (ROCK VS PAPER = PAPER IS WIN)");
            cscore++;
        }
        else if(computer==2)
        {
            printf("%s IS WIN (ROCK VS SCISSOR == ROCK IS WIN)", username);
            uscore++;
        }
    }
    else if(option==2)
    {
        if(computer==1)
        {
            printf("TI (PAPER VS PAPER =  TIE )");
        }
        else if(computer==0)
        {
            printf("%s IS WIN (PAPER VS ROCK = PAPER IS WIN)", username);
            uscore++;
        }
        else if(computer==2)
        {
            printf("COMPUTER IS WIN (PAPER VS SCISSOR ==  SCISSOR IS WIN)");
            cscore++;
        }
    }
    else if(option==3)
    {
        if(computer==2)
        {
            printf("TI (SCISSOR VS SCISSOR =  TIE )");
        }
        else if(computer==0)
        {
            printf("COMPUTER IS WIN (SCISSOR VS ROCK = ROCK IS WIN)");
            cscore++;
        }
        else if(computer==1)
        {
            printf("%s IS WIN (SCISSOR VS PAPER ==  SCISSOR IS WIN)", username);
            uscore++;
        }
    }
    printf("\n\n*******************************************  ENTER 0 FOR QUIT THE GAME OR ENTER 5 FOR SCORE VIWING SCORE ***************************************************\n\n");
}


int main()
{
    int i = 0;
    char gameName[50] = "welcome to rock, paper, scissors game";
    strupr(gameName);
    int rand;
    int option;


    printf("********************************************************  %s  *************************************************************\n\n\n ", gameName);

     printf("\n ENTER YOUR NAME : ");
        gets(username);
        strupr(username);

    printf("\n\n *********************************************************************** GAME IS START ***********************************************************************\n\n");

    for(;;)
    {
        printf("\n\n ROUND %d\n\n", i+1);
        printf("PLEASE CHOOSE 1. ROCK, 2. PAPER, 3. SCISSOR \n\n ENTER YOUR OPTION : ");
        scanf("%d", &option);

        if(option==0){
            printf("\n\n ***********************************************************************************************************************************************************\n\n");
            printf("YOUR ALL TIME SCORE IS : %d\n\n", uscore);
            printf("COMPUTER'S ALL TIME SCORE IS : %d\n", cscore);
            printf("\n\n ***********************************************************************************************************************************************************\n\n");
            break;
        }
        else if(option==5)
        {
              printf("\n\n ***********************************************************************************************************************************************************\n\n");
              printf("YOUR ALL TIME SCORE IS : %d\n\n", uscore);
              printf("COMPUTER'S ALL TIME SCORE IS : %d\n", cscore);
              printf("\n\n ***********************************************************************************************************************************************************\n\n");
              continue;
        }
        else if(option == 1 || option ==2 || option ==3){

        switch (option)
        {
        case 1:
            printf("\nYOU CHOOSE ROCK\n");
            break;

        case 2:
            printf("\nYOU CHOOSE PAPER\n");
            break;
        
        case 3:
            printf("\nYOU CHOOSE SCISSOR\n");
            break;
        }
    
        rand = randnum(3);

        switch (rand)
        {
        case 0:
            printf("\nCOMPUTER CHOOSE ROCK\n\n");
            break;

        case 1:
            printf("\nCOMPUTER CHOOSE PAPER\n\n");
            break;
        
        case 2:
            printf("\nCOMPUTER CHOOSE SCISSOR\n\n");
            break;
        }
        printf("\n\n ***********************************************************************************************************************************************************\n\n");
        maingamefunc(option, rand);
        i++;
        }
        else{
            printf("\n\n ***********************************************************************************************************************************************************\n\n");
            printf("\n\nPLEASE ENTER VALID INPUT\n\n");
            printf("\n\n ***********************************************************************************************************************************************************\n\n");
        }
    }
    return 0;
}

