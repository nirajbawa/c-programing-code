// * dynamic memory allocation is a way in which the size of a data structure can be changed during the runtime.

// * memory assigned to a program in a typical architecture cand be broken down into four segments :

// 1. code
// 2. static/global variables
// 3. stack
// 4. heap 

// * with grat power comes reponsibility 
// * memory leak is caused when we don't use dynamic memory properly 
// * when we keep to allocating memory in the heap without freeing the overall memory usage keeps onn increasing.
// * this situation is the cause of memory leak ie the programmer creates a memory block in the memory and forgets to delete it.
// * to avoid these memory leak situations, memory allocated on heap should always be freed not needed.
 




#include <stdio.h>


int main()
{
 int i = 0;
 int *i2;

 while(i<45545)
 {
     printf("welcome to code with harry");
     i2 = malloc(34444*sizeof(int));
     if(i % 100 == 0)
     {
         getchar();
     }
     i++;
     free(i2); // without this wwill encounter a situation of memory leak
 }
 return 0;
}