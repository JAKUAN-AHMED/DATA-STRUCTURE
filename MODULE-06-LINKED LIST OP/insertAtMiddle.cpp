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
void insertAtHead(Node* &head,int val)
{
    cout<<"Just head is first node value:"<<head->val<<endl;
    Node* n=new Node(val);
    n->Next=head;
    head=n;
    cout<<n->val<<endl;
}
void InserAtTail(Node* &head, int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* tmp=head;
    while(tmp->Next!=NULL)
    {
        tmp=tmp->Next;
    }
    tmp->Next=n;
    //cout<<head->val<<endl;
    cout<<n->val<<endl;

}
bool search(Node* &head,int key)

{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        if(tmp->val==key)
        {
            return true;
        }
        tmp=tmp->Next;
    }
    return false;
    
}
void display(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<"-->";
        tmp=tmp->Next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head=NULL;
    InserAtTail(head,10);
    InserAtTail(head,20);
    InserAtTail(head,30);
    InserAtTail(head,40);
    InserAtTail(head,50);
    insertAtHead(head,60);
    display(head);
    cout<<search(head,60);
    // Node* head=NULL;
    // Node* a=NULL;
    // Node* b=NULL;
    // Node* c=NULL;
    // Node* d=NULL;
    // InserAtTail(head,10);
    // InserAtTail(a,20);
    // InserAtTail(b,30);
    // InserAtTail(c,40);
    // InserAtTail(d,50);
    // display(head);
    // display(a);
    // display(b);
    // display(c);
    // display(d);

}
