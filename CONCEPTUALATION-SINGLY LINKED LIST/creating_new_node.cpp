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
    Node* a=new Node(5);
    Node* b=new Node(10);
    Node* c=new Node(15);
    a->Next=b;
    b->Next=c;
    //c->Next=NULL;
    Node* tmp=a;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    
    return 0;
}
