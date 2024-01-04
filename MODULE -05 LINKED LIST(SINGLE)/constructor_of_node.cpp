#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* Next;
        Node(int val)
        {
            this->val=val;
            this->Next=NULL;
        }
};
int main()
{
    Node a(10);
    Node b(20);
    a.Next=&b;
    cout<<a.val<<endl<<b.val<<endl<<a.Next->val<<endl<<a.Next->val;
    return 0;
}
