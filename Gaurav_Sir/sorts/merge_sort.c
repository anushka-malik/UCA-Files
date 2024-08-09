#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void merge(int arr[],int temp[],int l,int m,int r)
{
    for(int i=l;i<=r;i++)
      temp[i]=arr[i];
    int i=l,j=m+1;
    int k=l;
    while(i<=m && j<=r)
    {
        if(temp[i]<=temp[j])
            arr[k++]=temp[i++];
        else
            arr[k++]=temp[j++];
    }
    while(i<=m)
       arr[k++]=temp[i++];
    while(j<=r)
       arr[k++]=temp[j++];

}

void divide(int arr[],int temp[],int l ,int r)
{
    if(l>=r)
      return;
    int mid=l+(r-l)/2;
    divide(arr,temp,l,mid);
    divide(arr,temp,mid+1,r);
    merge(arr,temp,l,mid,r);

}

void merge_sort(int arr[],int n)
{
    int *temp=(int *)malloc(n*sizeof(int));
    divide(arr,temp,0,n-1);
    free(temp);
}


void test()
{

    int n;
//  scanf("%d\n",&n);
    n=8;
    int *arr=(int*)malloc(n*sizeof(int));
    int inp[]={1,5,8,3,2,4,9,7};
    int out[]={1,2,3,4,5,7,8,9};

    merge_sort(inp,n);

    for(int i=0;i<n;i++)
     {
       assert(inp[i]==out[i]);

     }
}


int main()
{
   test();
   return 0;
}

