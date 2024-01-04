#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        if(val==0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        if(val==1)
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}
