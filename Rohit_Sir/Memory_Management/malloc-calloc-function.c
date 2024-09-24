#include <stdio.h>
#include <stdlib.h>

//  Calloc takes two arguments-number of elements and size of each element.
// It allocates the required number of bytes from heap. It also cleans the allocated bytes(performs & 0) with each  bit ,thus initializing each 
// block to 0.

void check_calloc(int n)
{
   int *ptr=(int*)calloc(n,sizeof(int));
   for(int i=0;i<n;i++)
   {
    printf("%d\n",*(ptr+i));
   }
}

// malloc function also allocates the required number of bytes from the heap but doesnot take the overhead of cleaning the data placed at the
// allocated bytes.Accessing the data at allocated bytes can result into errors.
void check_malloc(int n)
{
   char *ptr=(char*)malloc(n*sizeof(char));
   for(int i=0;i<n;i++)
   {
    printf("%c\n",*(ptr+i));
   }
}

// custom calloc function using malloc function.
void* custom_calloc(int n,int size)
{
    char* ptr=(char*)malloc(n*size);
    for(int i=0;i<n;i++)
    {
        *(ptr+i)='\0';
    }
    return (void*)ptr;
}

int main()
{
    int n;
    scanf("%d",&n);
    // check_calloc(n);
    // check_malloc(n);
    char* ptr=(char*)custom_calloc(n,sizeof(char));
    for(int i=0;i<n;i++)
    {
        printf("%c\n",*(ptr+i));
    }
    
    return 0;
}