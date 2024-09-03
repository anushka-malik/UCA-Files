#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// if we try to access data pointed at some unknown location , there might be chances of segmentation fault,might be trying to access restricted area
// which might lead to error in the program.
void check()
{
   int* ptr=(int*)malloc(sizeof(int));
   *ptr=10;
   printf("Value = %d\n",*ptr);
   printf("Value at ptr+3 = %d\n",*(ptr+3));

   // we also need to  free (deallocate) memory in C simultaneoulsy for efficient memory manangement in order to prevent memory leaks.    
   free(ptr);

}

// This will give a segmentation fault because str2 is a string literal and  is stored in  Code segment, so we cannot manipulate it.
void string_check()
{
    char* str="HELLO WORLD";
    str[0]='E';
    printf("%s\n",str);

}

int main()
{
//    check();
string_check();
    return 0;

}