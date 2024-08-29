#include <iostream>
using namespace std;

long long int find(long long int x,long long int n,long long int M)
	{
	    if(n==1)
	        return x%M;
	    if(n%2==0)
	    {
	        long long int val=find(x,n/2,M);
	        long long int ans=(val*val)%M;
	        return ans;
	    }
	    else
	    {
	        long long int val=find(x,n/2,M);
	        long long int ans=((val*val)%M *(x%M))%M;
	        return ans;
	    }
	}

