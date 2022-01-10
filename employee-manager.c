#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *eid;
    int len, nofe;
  
   for(int i = 0; i<3; i++)
   {
     
       printf("please enter the length of employee id %d : \n", i);
       scanf("%d", &len);
       eid = (char *)malloc((len+1) * sizeof(char)); 
       printf("please enter the employee id %d : \n", i);
       getchar();
       scanf("%s", eid);
       printf("\n nid of employee %d is %s\n", i, eid);
       free(eid);
   }
    return 0;
}