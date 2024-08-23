 #include <stdio.h>
 #include <stdbool.h>
 #include <stdlib.h>

 int check(int num)
 {
    if((num & (num-1))==0)
      return 1;
    return 0;
 }

 int main()
 {
       int arr[6]={2,4,8,15,28,32};
       for(int i=0;i<6;i++)
       {
	     ((check(arr[i]))==1)?(printf("%d is power of two: true\n",arr[i])):(printf("%d is power of two :false\n",arr[i]));
       }
       return 0;
 }
