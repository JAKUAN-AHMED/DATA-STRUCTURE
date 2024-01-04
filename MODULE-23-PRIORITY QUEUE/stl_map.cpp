#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["sakib"]=75;
    mp["tamim"]=100;
    mp["jaber"]=60;
    mp["jakuan"]=90;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    // if(mp.count("sakib"))
    // {
    //     cout<<"ache"<<endl;
    // }
    // else cout<<"nai"<<endl;
    // return 0;
}
