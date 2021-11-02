#include <stdio.h>

//preproccesing define

#define pi 11

int main()
{
    // type fo variable in c

    //char : character size 1 bytes "%c"
    //int :  numbers at last 2-4 size bytes "%d, %i"
    //float : floating point number 4 bytes "%f"
    //double : floating point number 8 bytes "%lf"
    //long : long character 4-8 "%l"

    //key word

    // can't modified value of variable 
    // const int = 1;

    // pi = 45;

    printf("%d", pi);

    long a = 5566;

    printf("\n %ld", a);

    printf("\n %lu", sizeof(int));
    return 0;
}