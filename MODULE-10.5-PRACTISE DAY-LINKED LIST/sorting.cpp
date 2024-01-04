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
    }

};
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
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        else insertTail(head,tail,val);
        
    }
    for(Node* i=head;i->Next!=NULL;i=i->Next)
    {
        for (Node* j =i->Next; j!=NULL; j=j->Next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
        
    }
    print(head);
    
    return 0;
}