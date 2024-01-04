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
void insertHead(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->Next=head;
    head->prev=newNode;
    head=newNode;
}
void insertTail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->Next=newNode;
    newNode->prev=tail;
    tail=tail->Next;
}
void InsertAtAnyPosition(Node* &head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for (int i = 1; i <= pos-1; i++)
    {
       tmp= tmp->Next;
    }
    newNode->Next=tmp->Next;
    tmp->Next=newNode;
    newNode->Next->prev=newNode;
    newNode->prev=tmp;
    
}
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
    int pos,val;
    cin>>pos>>val;
    if(pos==0)
    {
        insertHead(head,tail,val);
    }
    else if(pos>size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos==size(head))
    {
        insertTail(head,tail,val);
    }
    else InsertAtAnyPosition(head,pos,val);
    PrintList(head);
    Print_reverse(tail);
    cout<<endl;
    cout<<size(head);
    return 0;
}
