#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    }
    vector<int>v3;
    v3=v2;
    v3.insert(v3.end(),v.begin(),v.end());
    for(int s:v3)
    {
        cout<<s<<" ";
    }

    
    return 0;
}
