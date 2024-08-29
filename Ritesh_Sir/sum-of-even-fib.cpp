#include <iostream>
using namespace std;
void fib(int a,int b,int sum,int &ans,int n)
{
    if(sum>n)
     return ;
    if(sum%2==0)
     ans+=sum;
    a=b;
    b=sum;
    sum=a+b;
    fib(a,b,sum,ans,n);
}
int main()
{
    int n;
    cin>>n;
    int a=1;
    int b=1;
    int sum=a+b;
    int ans=0;
    fib(a,b,sum,ans,n);
    cout<<ans<<endl;    
    return 0;
}