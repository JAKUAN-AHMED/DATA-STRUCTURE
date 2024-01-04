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
void deleteFromHead(Node* &head,Node* &tail)
{
    Node* deletenode=head;
    head=head->Next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
void deleteFromTail(Node* &tail,Node* &head)
{
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->Next=NULL;
}
void deleteFromAny(Node* head,int pos)
{
    Node* tmp=head;
    for (int i = 1; i <=pos-1 ; i++)
    {
       tmp=tmp->Next;
    }
    Node* DeleteNODE=tmp->Next;
    tmp->Next=tmp->Next->Next;
    tmp->Next->prev=head;
    delete DeleteNODE;
    
}
void print(Node* head)
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
    Node* tail=b;
    head->Next=a;
    a->prev=head;
    a->Next=b;
    b->prev=a;
    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos==0)
    {
        deleteFromHead(head,tail);
    }
    else if(pos==size(head)-1)
    {
        deleteFromTail(head,tail);
    }
    else{
        deleteFromAny(head,pos);
    }
    print(head);
    Print_reverse(tail);
    return 0;
}