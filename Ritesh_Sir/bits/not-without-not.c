#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void pow_of_2(int n)
{
     if( (n & (-n)) == n)
     {
     printf("true");
     return ;
     }

     printf("false");
}

void pow_of_two(int n)
{
   if((n & (n-1))==0)
   {
    printf("true ");
    return ;
   }
   printf("false ");
}

int main()
{
   int arr[8]={2,4,8,128,256,16,200,100};
   for(int i=0;i<8;i++)
   {
     pow_of_two(arr[i]);
   }
    return 0;
}