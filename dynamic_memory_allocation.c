/*

function for dynamic memory allocation in c

* for use dinamic memory allocation to defind and import pakage #include <stdlib.h>

1. in dynamic memoory allocation, the memory is allocated at runtime from  the heap segment. 
2. we have four functions that help us achieve this task.
 
 1. malloc
 2. calloc
 3. realloc
 4. free

1. malloc 

1. malloc() stands for memory allocation.
2. it reserves a block of memory with the given amount of bytes.
3. the retrun value is a void poointer to the allction space.
4. therefore the void pointer needs tobe casted to the appropriate type as per the requirements.
5. however, if the space is insufficient, alloction of memory fails and it returns a null pointer.
6. all the values at allcated memory are initilized to garbage values.

syntax :
ptr = (ptr-type*) malloc(size_in_bytes)
int *ptr;
ptr = (int *)malloc(3*size(int))

2. calloc()

1. calloc() stands for contigous allocation.
2. it reserves n blocks of memory with the given  amount of bytes.
3. the return value it a  void pointer to the allocated space.
4. therefore the void pointer needs to be casted to the appropriate type  as per the requirements.
5. however, ifthe space is insufficient, allocation  of memory fails and it returns a null pointer.
6. all the value at allocated memory are intialized to 0.

syntax : 
ptr *(ptr-type*)calloc(n, size_in_bytes) 

3. realloc()

1. relloc stand for rellocation 
2. the dynamically allocated memory if insufficient we can cahange the size of previously allocated memory using relloc() function()

syntax

    ptr = (ptr-type*)relloc(ptr, new_size_in_bytes)  


4. free()

1. free() is used to free the allocated memory.
2. it the dynamically allocated memory is not required 
anymore, we can free it using free function.
3. this will free the memory being used by the program in the heap.

syntax 

        free(ptr)
        
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    // malloc
    int *ptr; //here are initialized pointer
    int n; 
    printf("enter the size of the array you Want to create\n");
    scanf("%d", &n);

    // here use malloc function
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i<n; i++)
    {
        printf("enter the value no %d of this array \n", i);
        scanf("%d", &ptr[i]);
    }
       for (int i = 0; i<n; i++)
    {
        printf("enter the value no %d of this array %d \n", i, ptr[i]);
    }

    
    // calloc
    // int *ptr; //here are initialized pointer
    // int n;
    // printf("enter the size of the array you Want to create\n");
    // scanf("%d", &n);

    // //here are use calloc function
    // ptr = (int *)calloc(n , sizeof(int));

    // for (int i = 0; i<n; i++)
    // {
    //     printf("enter the value no %d of this array \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    //    for (int i = 0; i<n; i++)
    // {
    //     printf("enter the value no %d of this array %d \n", i, ptr[i]);
    // }


    //realloc

    
    // printf("enter the size of the array you Want to create\n");
    // scanf("%d", &n);

    //here are use realloc function
    // ptr = (int *)realloc(ptr, n * sizeof(int));

    // for (int i = 0; i<n; i++)
    // {
    //     printf("enter the value no %d of this array \n", i);
    //     scanf("%d", &ptr[i]);
    // }
    //    for (int i = 0; i<n; i++)
    // {
    //     printf("enter the value no %d of this array %d \n", i, ptr[i]);
    // }

    //free
//   printf("ptr 1 is : %d \n", ptr[1]);
    //here are use free function
    free(ptr);
  


    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     int n;

//     printf("please enter the size of array \n");
//     scanf("%d", &n);

//     ptr = (int *)malloc(n * sizeof(int));

//     for(int i = 0; i<n; i++)
//     {
//         printf("please enter the values %d in array \n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("\n values of array %d \n", ptr[i]);
//     }
    
//     printf("please enter the size of array \n");
//     scanf("%d", &n);
//     free(ptr);
    
//     ptr = (int *)calloc(n, sizeof(int));

//     for(int i = 0; i<n; i++)
//     {
//         printf("please enter the value %d of array\n", i);
//         scanf("%d", &ptr[i]);
//     }

//     for(int i = 0; i<n; i++)
//     {
//         printf("%d \n", ptr[i]);
//     }



//     printf("please enter the legth of array\n");
//     scanf("%d", &n);
//     ptr = (int *)realloc(ptr, n*sizeof(int));
    
//     for(int i = 0; i<n; i++)
//     {
//         printf("please enter the value %d value of array\n", i);
//         scanf("%d", &ptr[i]);
//     }

//     for(int i = 0; i<n; i++)
//     {
//         printf("the value %d of array is %d \n", i, ptr[i]);
//     }
    


//     return 0;
// }