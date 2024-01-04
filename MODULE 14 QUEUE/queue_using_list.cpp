#include<bits/stdc++.h>
using namespace std;
class myqueue
{
   public:
    list<int>l;
   void push(int val)
   {
        l.push_front(val);
   }
   void pop()
   {
     l.pop_back();
   }
   int front()
   {
        return l.front();
   }
   int size()
   {
        return l.size();
   }
   bool empty()
   {
        return l.empty();
   }
};
int main()
{
    myqueue q;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
