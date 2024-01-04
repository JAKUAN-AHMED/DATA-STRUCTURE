#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0;i<5;i++)
    {
        getline(cin,v[i]);
    }
    for(string p:v)
    {
        cout<<p<<endl;
    }
    return 0;
}
