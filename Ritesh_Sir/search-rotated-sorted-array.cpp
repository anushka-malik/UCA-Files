#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) 
{
        int n=nums.size();
        int s=0;
        int e=n-1;
        int m;
        while(s<=e)
        {
             m=(s+e)/2;
            if(target==nums[m])
                return m;
            else
            {
               if(nums[s]<=nums[m])
               {
                   if(target>=nums[s] && target<nums[m])
                       e=m-1;
                   else
                       s=m+1;
               }
                else
                {
                    if(target>nums[m] && target<=nums[e])
                        s=m+1;
                    else
                        e=m-1;
                }
            }
        }
        return -1;
}

int main()
{
    vector<int>arr={4,5,6,7,0,1,2};
    int target=0;
    cout<<"Index: "<<search(arr,target)<<endl;
    return 0;
}