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
void insert_at_tail(Node* &head,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp=head;
    while (tmp->Next!=NULL)
    {
        tmp=tmp->Next;
    }
    tmp->Next=newNode;
    
}
void display(Node* head)
{
    cout<<endl<<endl<<"Your Linked List "<<endl<<endl;
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    cout<<endl;
}
int main()
{
    int val;
    Node* head=NULL;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        else insert_at_tail(head,val);
    }
    display(head);
    
    return 0;
}
