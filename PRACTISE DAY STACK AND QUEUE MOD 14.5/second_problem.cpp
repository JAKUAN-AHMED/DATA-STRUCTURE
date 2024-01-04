#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int>q;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
     bool flag=false;
   if(st.size()==q.size())
   {
        while(!st.empty())
        {
            if((st.top())!=(q.front()))
            {
                flag=true;
                break;
            }
            st.pop();
            q.pop();
        }
   }
    //st.size()==st1.size()
    if(st.size()!=q.size()) cout<<"no"<<endl;
    else if(flag==true) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    return 0;
}
