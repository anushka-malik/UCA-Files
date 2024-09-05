#include <stdio.h>
#include <stdlib.h>

void check(int n)
{ 
   int *arr=(int*)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++)
   {
    arr[i]=i;
   }  
   printf("arr[0] = %d\n",arr[0]);

   //Accesing out of bound index gives undefined behaviour -segmentation fault,restricted area so cannot access the value.      
   printf("Value out of bound is %d\n",arr[n]); 
   arr+=6;

   //Also , accessing uninitialized pointers(garbage value) may cause errors in the program.
   printf("Value pointed by pointer -> %d\n",arr);
}

int main()
{
    int n;
    scanf("%d",&n);
    check(n);
    return 0;
}