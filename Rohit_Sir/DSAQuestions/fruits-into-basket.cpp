#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int totalFruit(vector<int>& fruits) 
{
        int ans=0;
        int i=0;
        int j=0;
        map<int,int>mp;
        while(j<fruits.size())
        {
            mp[fruits[j]]++;
            if(mp.size()>2)
            {
               mp[fruits[i]]--;
                if(mp[fruits[i]]==0)
                    mp.erase(fruits[i]);
                i++;
            }
            if(mp.size()==2)
            {
                int c=0;
                for(auto it:mp)
                 c+=it.second;
                ans=max(ans,c);
            }
            j++;
        }
        int count=0;
        for(auto it:mp)
        {
            count+=it.second;
        }
        ans=max(ans,count);
        return ans;
}

int main()
{
    vector<int>fruits={1,2,3,2,2};
    cout<<"Maixmum fruits :"<<totalFruit(fruits)<<endl;
    return 0;
}