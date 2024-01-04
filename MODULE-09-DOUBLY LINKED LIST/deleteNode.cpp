#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* Next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->Next=NULL;
        this->prev=NULL;
    }

};
void PrintList(Node* head)
{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    cout<<endl;
}
void Print_reverse(Node* tail)
{
    Node* tm=tail;
    while (tm!=NULL)
    {
        cout<<tm->val<<" ";
        tm=tm->prev;
    }
    cout<<endl;
    
}
int size(Node* head)
{
     Node* tmp=head;
     int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->Next;
    }
    return count;
}
void DeleteNode(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->Next;
    }
    Node* deletenode=tmp->Next;
    tmp->Next=tmp->Next->Next;
    tmp->Next->prev=tmp;
    delete deletenode;
}
void DeleteTail(Node* &tail)
{
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    tail->Next=NULL;
}
void DeleteHead(Node* &head)
{
    Node* deleteNode=head;
    head=head->Next;
    delete deleteNode;
    head->prev=NULL;
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=c;
    head->Next=a;
    a->prev=head;
    a->Next=b;
    b->prev=a;
    b->Next=c;
    c->prev=b;
    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos==0)
    {
        DeleteHead(head);
    }
    else if(pos==size(head)-1)
    {
        DeleteTail(tail);
    }
    else
    {
        DeleteNode(head,pos);
    }
    PrintList(head);
    Print_reverse(tail);
    cout<<endl;
    cout<<size(head);
    return 0;
}
