#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        queue<char>st;
        stack<char>q;
        queue<string>q2;
        int m;
        cin>>m;
        string s;
        cin>>s;

        if(s.empty())
        {
            cout<<endl;
            continue;
        }
        for (char c:s)
        {
            if (c=='R' || c=='G' || c=='B')
            {
                if(st.empty()) st.push(c);
                else
                {
                    if ((c=='R' && st.front()=='B') || (c=='B' && st.front()=='R'))
                    {
                        q.push('P');
                    }
                    else if((c=='R' && st.front()=='G') || (c =='G' && st.front()=='R'))
                    {
                        q.push('Y');
                    }
                    else if ((c=='B' && st.front()=='G') || (c=='G' && st.front()=='B'))
                    {
                        q.push('C');
                    }
                    st.pop();
                }
            }
            else
            {
                st.push(c);
            }
        }
        if (!st.empty())
        {
            while (!st.empty())
            {
                q.push(st.front());
                st.pop();
            }
        }
        stack<char> rq;
        while (!q.empty())
        {
            rq.push(q.top());
            q.pop();
        }
        while(!rq.empty())
        {
            char a=rq.top();
            rq.pop();
            if (rq.empty())
                cout << a;
            else
            {
                if (a==rq.top())
                {
                    rq.pop();
                }
                else
                {
                    cout<<a;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
