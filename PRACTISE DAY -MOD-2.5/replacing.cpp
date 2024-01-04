#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // replace(v.begin(),v.end(),3,100);
    for(int s:v)
    {
        if(s>0) cout<<"1"<<" ";
       else if(s<0) cout<<"2"<<" ";
        else cout<<"0"<<" ";
    }
    return 0;
}
