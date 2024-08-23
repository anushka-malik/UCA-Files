
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int candy(vector<int>& ratings) {
        vector<int>vec(ratings.size(),1);
        int n=ratings.size();
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                vec[i]=vec[i-1]+1;
            }
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                vec[i]=max(vec[i],vec[i+1]+1);
            }
        }
        int c=0;
        for(int i=0;i<vec.size();i++)
            c+=vec[i];
        return c;
        
    }

int main()
{
    vector<int>ratings={1,2,2};
    int ans=candy(ratings);
    cout<<"Minimum number of candies : "<<ans<<endl;

    return 0;
}