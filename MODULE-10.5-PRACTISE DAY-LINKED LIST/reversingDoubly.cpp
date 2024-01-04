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
void InsertTail(Node* &head,Node* &tail,int val)
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
void reverse(Node* head,Node* tail)
{
    Node* i=head;
    Node* j=tail;
    while(i!=j && i->Next!=j)
    {
        
        swap(i->val,j->val);
        i=i->Next;
        j=j->prev;
    }
    swap(i->val,j->val);

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
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        else InsertTail(head,tail,val);
    }
    reverse(head,tail);
    print(head);
    return 0;
}    