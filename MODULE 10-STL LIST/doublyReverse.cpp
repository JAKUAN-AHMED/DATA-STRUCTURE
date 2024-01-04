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
void reverse( Node* head,Node* tail)
{
    Node* i=head;
    Node* j=tail;
    while (i!=j && i->Next!=j)
    {
        swap(i->val,j->val);
        i=i->Next;
        j=j->prev;
    }
    swap(i->val,j->val);
    cout<<endl;
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node*c=new Node(40);
    Node* d=new Node(50);
    Node* tail=d;
    head->Next=a;
    a->prev=head;
    a->Next=b;
    b->prev=a;
    b->Next=c;
    c->prev=b;
    c->Next=d;
    d->prev=c;
    reverse(head,tail);
    PrintList(head);
    // PrintRecursion(head);

    return 0;
}
