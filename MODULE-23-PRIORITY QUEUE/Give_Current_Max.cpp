#include <bits/stdc++.h>
using namespace std;
class Paralal
{
public:
    string name;
    int roll;
    int marks;
    Paralal(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp
{
public:
    bool operator()(Paralal a,Paralal b)
    {
        if(a.marks==b.marks)
        {
            return a.roll>b.roll;
        }
        return a.marks<b.marks;
    }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Paralal, vector<Paralal>,cmp>pq;
    while (n--)
    {
        string Mrs;
        int roll,marks;
        cin>>Mrs>>roll>>marks;
        pq.push(Paralal(Mrs,roll,marks));
    }
    int q;
    cin>>q;
    while (q--)
    {
        int a;
        cin>>a;
        if (a == 1)
        {
            if (pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" " << pq.top().marks << endl;
            }
        }
        else if(a==2) 
        {
            if (pq.empty())
            {
                cout<<"Empty"<<endl;
            } 
            else
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name<<" "<<pq.top().roll<<" " <<pq.top().marks << endl;
                } 
                else 
                {
                    cout<<"Empty"<<endl;
                }
            }
        }
        else 
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            pq.push(Paralal(name,roll,marks));
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
    }
    return 0;
}
