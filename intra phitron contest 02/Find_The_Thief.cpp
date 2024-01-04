#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second%2!=0)
            {
                cout<<it->first<<endl;
                break;
            }
            // cout<<it->first<<" "<<it->second<<endl;
        }
    }
    return 0;
}
