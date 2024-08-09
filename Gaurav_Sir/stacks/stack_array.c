#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

int N=0;
int* arr=NULL;
int max_size=1;
void resize_array(int **arr,int s)
 {
    int *newarr=(int*)malloc(s*sizeof(int));

    for(int i=0;i<N;i++)
     {
        newarr[i]=(*arr)[i];
     }
    free(*arr);
    *arr=newarr;

 }


void push(int item)
{
   if(N==0)
      resize_array(&arr,max_size);
   else if(N==max_size)
    {
         max_size*=2;
         resize_array(&arr,max_size);
    }
   arr[N]=item;
   N++;
}

int pop()
{
   if(N==0)
     return INT_MIN;
   else if(N>0 && N==max_size/4)
   {
      max_size/=2;
      resize_array(&arr,max_size);
   }
   int v=arr[--N];
   return v;
}

int size()
{
   return N;
}

bool isEmpty()
{
   return N==0;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    assert(arr[4]==5);
    assert(pop()==5);
    assert(size()==4);
    assert(arr[3]==4);
    assert(pop()==4);
    assert(size()==3);

    assert(arr[2]==3);
    assert(pop()==3);
    assert(size()==2);
    assert(isEmpty()==0);
    return 0;
}
                                                                      
