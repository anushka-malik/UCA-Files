#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lo=20;
    int hi=50;
    int *arr=(int*)malloc(sizeof(int)*100);

    for(int i=0;i<25;i++)
    {
        int el=(rand()%(hi-lo+1))+ lo;
        arr[i]=el;
    }
    for(int i=0;i<25;i++)
   {
    printf("%d ",arr[i]);
   }
   printf("\n");

    return 0;
}

