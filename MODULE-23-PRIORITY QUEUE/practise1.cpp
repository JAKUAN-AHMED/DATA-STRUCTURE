#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n; cin>>n;
        while (n--)
        {
            int t; cin>>t;
            set<int>s;
            while (t--)
            {
            int x; cin>>x;
            s.insert(x);
            }
            vector<int>v;
            for(int val:s)
            {
                v.push_back(val);
            }
            for(int i=v.size()-1;i>=0;i--)
            {
                cout<<v[i]<<" ";
            }
           cout<<endl;
        }   
       return 0;
}
