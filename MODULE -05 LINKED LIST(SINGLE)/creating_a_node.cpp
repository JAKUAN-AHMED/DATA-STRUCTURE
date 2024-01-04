#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* Next;
};
int main()
{
    Node a,b;
    a.val=10;
    b.val=20;
    a.Next=&b;
    b.Next=NULL;
    cout<<a.Next->val<<" "<<b.val;
    return 0;
}
