#include <stdio.h>
#include <stdlib.h>
void test()
{
   int* ptr=(int*)calloc(1,sizeof(int));
   printf("%d\n",*ptr);
}

// create calloc using malloc


int main()
{
   test();
    return 0;
}