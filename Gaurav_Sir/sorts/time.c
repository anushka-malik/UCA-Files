#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <time.h>

int main()
{
   clock_t start,end;
   start=clock();

   long long int sum=0;

   for(int i=0;i<10000;i++)
           sum+=i;
   end=clock();
   double time_used=(double)(end-start)/(CLOCKS_PER_SEC);
   printf("Time used in seconds : %f \n",time_used);
   return 0;
}

