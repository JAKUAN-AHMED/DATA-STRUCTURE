#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    list<int>l;
    while(!q.empty())
    {
        l.push_back(q.front());
        q.pop();
    }
    stack<int>st;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    list<int>l2;
    while(!st.empty())
    {
        l2.push_back(st.top());
        st.pop();
    }
    int flag=0;
    if(l==l2) flag=1;
    if(flag==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}