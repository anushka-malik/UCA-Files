 #include <stdio.h>

 int cmpAscending(int a,int b)
 {
     return a>b;
 }
 int cmpDescending(int a,int b)
 {
     return a<b;
 }
 void print(int arr[],int n)
 {
     for(int i=0;i<n;i++)
	 printf("%d ",arr[i]);
     printf("\n");
 }
 void sort(int arr[],int n,int (*cmp)(int,int))
 {
     for(int i=0;i<n;i++)
     {
	for(int j=0;j<n-i-1;j++)
	{
	   if(cmp(arr[j],arr[j+1])>0)
	   {
	       int t=arr[j];
	       arr[j]=arr[j+1];
	       arr[j+1]=t;
	   }
	}

     }
 }
 int main()
  {
      int arr[]={3,1,7,5,4,2};
      
      
      sort(arr,6,cmpAscending);
      
      print(arr,6);

      sort(arr,6,cmpDescending);
 
      print(arr,6);

      return 0;
  }

