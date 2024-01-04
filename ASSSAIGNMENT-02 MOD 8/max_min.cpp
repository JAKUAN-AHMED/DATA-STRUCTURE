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
void insertTail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    tail=newNode;
}
int main()
{
    Node*  head=NULL;
    Node* tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        else insertTail(head,tail,val);
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for (Node* i = head; i!=NULL; i=i->Next)
    {
        if(i->val>max)
        {
            max=i->val;
        }
        if(i->val<min)
        {
            min=i->val;
        }
    }
    cout<<max<<" "<<min<<endl;
    
    
    return 0;
}
