#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        stack<char>st;
        stack<char>st2;
        int m;
        cin>>m;
        string s;
        cin>>s;
        for (char c:s)
        {
            
                if(st.empty()) st.push(c);
                else
                {
                    if ((c=='R' && st.top()=='B') || (c=='B' && st.top()=='R'))
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='P') st.pop();
                        else st.push('P');

        
                    }
                    else if((c=='R' && st.top()=='G') || (c =='G' && st.top()=='R'))
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='Y') st.pop();
                        else st.push('Y');
                    }
                    else if ((c=='B' && st.top()=='G') || (c=='G' && st.top()=='B'))
                    {
                        st.pop();
                        if(!st.empty() && st.top()=='C') st.pop();
                        else st.push('C');

                    }
                    else if(st.top()==c)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(c);
                    }
                }
            
            
        }
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty())
        {
            cout<<st2.top();
            st2.pop();
        }
        cout<<endl;
    }
    return 0;
}