#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<string>pos;
    string add;

    while (cin >>add&&add !="end")
    {
        pos.push_back(add);
    }
    int n;
    cin >> n;
    string ord,arg;
    cin >> ord >> arg;

    list<string>::iterator now=pos.begin();
    if (ord == "visit")
    {
        while (now!=pos.end())
        {
            if (*now==arg)
            {
                cout<<*now <<endl;
                break;
            }
            now++;
        }
        if (now==pos.end())
        {
            cout<<"Not Available"<<endl;
        }
    }
    else if(ord=="next")
    {
        if (next(now)!=pos.end())
        {
            ++now;
            cout <<*now<<endl;
        }else
        {
            cout<<"Not Available"<<endl;
        }
    }
    else if (ord=="prev")
    {
        if (now==pos.begin())
        {
            cout<<"Not Available"<<endl;
        } 
        else
        {
            now--;
            cout<<*now <<endl;
        }
    } 
    else if (ord=="visit")
    {
        cin >> arg;
        now = pos.begin();
        while (now!=pos.end())
        {
            if (*now==arg)
            {
                cout<<*now <<endl;
                break;
            }
            now++;
        }
        if (now==pos.end())
        {
            cout<<"Not Available"<<endl;
        }
    }
    return 0;
}