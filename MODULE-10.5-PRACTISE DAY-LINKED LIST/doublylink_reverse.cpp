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
void reverseInAnother(Node* head,Node* tail)
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
    
}
void reverse(Node* tail)
{
    Node* tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
    
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
    b->Next=NULL;
    reverseInAnother(head,tail);
    print(head);
    //reverse(tail);
    return 0;
}