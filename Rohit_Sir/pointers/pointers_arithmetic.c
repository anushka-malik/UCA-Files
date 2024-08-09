#include <stdio.h>
#include <stdlib.h>

int main()
 {
     int arr[5]={1,2,3,4,5};
     int *ptr=arr;

     for(int i=0;i<5;i++)
	 {
	 printf("%d\n",*ptr);
	 ptr++;
	 }

     ptr=&arr[0];
//Pointer arithmetic
     for(int i=0;i<5;i++)
	 printf("%d\n",*(ptr+i));

     for(int i=0;i<5;i++)
	 printf("%d\n",arr[i]);


//pointer subtraction gives the byte difference between the two pointers
     int a=10;
     int *p1=&a;
     int *p2=p1+2;
     
     printf("%p %p\n",p1,p2);
     int diff=p2-p1;
     printf("Difference = %d\n",diff);

//Pointers have fixed size of 4 bytes irrespective of its type bcoz it stores the address which can be stored in 4bytes or 8bytes depending on the OS.

    char c='A';
    char* pt_char=&c;
    int* pt_int=&a;
    double d=34.55;
    double* pt_doub=&d; 
    printf("%ld\n",sizeof(pt_char));
    printf("%ld\n",sizeof(pt_int));
    printf("%ld\n",sizeof(pt_doub));
    printf("%ld\n",sizeof(int));
    return 0;
 }
