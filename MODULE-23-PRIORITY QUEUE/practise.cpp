#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    set<int>s;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int num,val; cin>>num>>val;
        if(num==1) s.insert(val);
        else if(num==2) s.erase(val);
        else if(num==3)
        {
            // if(s.count(val)) cout<<"Yes"<<endl;
            // else cout<<"No"<<endl;
            auto it = s.find(val);
            if (it != s.end())
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else break;
    }
    return 0;
}
