#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) 
{
      vector<int>vec(32,0);
      for(int i=0;i<32;i++)
      {
          int c=0;
          for(int j=0;j<nums.size();j++)
          {
              if((nums[j]&(1<<i)))
                  c++;
          }
          if(c%3==1)
              vec[i]=1;
      }
     int ans=0;
     for(int i=0;i<32;i++)
     {
         if(vec[i]==1)
         ans=ans|(1<<i);
     }
        return ans;
    
}

int main()
{
    vector<int>arr;
    for(int i=0;i<7;i++)
    {
        int v;
        cin>>v;
        arr.push_back(v);
    }
    int ans=singleNumber(arr);
    cout<<"Single num is: "<<ans<<endl;

    return 0;
}