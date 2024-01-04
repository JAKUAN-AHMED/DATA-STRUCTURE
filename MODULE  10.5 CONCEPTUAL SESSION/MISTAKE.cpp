#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>pos;
    string add;
    while (cin>>add && add!="end")
    {
        pos.push_back(add);
    }
    int n;
    cin>>n;
    cin.ignore();
    list<string>::iterator current=pos.begin();
    for (int i=0;i<n;++i)
    {
        string command;
        getline(cin,command);
        stringstream ss(command);
        string ord,arg;
        ss>>ord;
        if(ord=="visit")
        {
            ss>>arg;//skip for visit
            bool found=false;
            for (auto it=pos.begin();it!=pos.end();++it)
            {
                if (*it==arg)
                {
                    cout<<*it<<endl;
                    current=it;
                    found=true;
                    break;
                }
            }
            if (!found)
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(ord=="next")
        {
            if (next(current)!=pos.end())
            {
                ++current;
                cout <<*current<<endl;
            }else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(ord=="prev")
        {
            if(current!=pos.begin())
            {
                --current;
                cout<<*current<<endl;
            }
            else 
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}
