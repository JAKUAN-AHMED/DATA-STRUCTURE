#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>list;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        list.push_back(val);
    }
    list.sort();
    list.unique();
    for(int s:list)
    {
        cout<<s<<" ";
    }
    return 0;
}
