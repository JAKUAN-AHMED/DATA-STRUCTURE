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
    stack<int>st1;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        st1.push(y);
    }
    bool flag=false;
   if(st.size()==st1.size())
   {
        while(!st.empty())
        {
            if((st.top())!=(st1.top()))
            {
                flag=true;
                break;
            }
            st.pop();
            st1.pop();
        }
   }
    //st.size()==st1.size()
    if(st.size()!=st1.size()) cout<<"no"<<endl;
    else if(flag==true) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    return 0;
}
