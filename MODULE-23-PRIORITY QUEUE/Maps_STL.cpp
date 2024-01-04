#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int t; cin>>t;
    while (t--)
    {
        int c; cin>>c;
        string name;
        cin>>name;
        if(c==1)
        {
            int val; cin>>val;
            mp[name]+=val;
        }
        // else mp[name]=0;
        else if(c==2)
        {
            mp[name]=0;
        }
        else if(c==3)
        {
            cout<<mp[name]<<endl;
        }
        else break;
    }
    return 0;
}
