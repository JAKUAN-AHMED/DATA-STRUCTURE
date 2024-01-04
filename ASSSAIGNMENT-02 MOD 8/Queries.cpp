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
void InserAtTail(Node* &head,Node* &tail,int val)
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
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;

    }
    head->Next=newNode;
    head=newNode;
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
void display(Node * head,Node* tail)
{
    Node* tmp=head;
    cout<<tmp->val<<" "<<tail->val<<endl;
    
}    
int main()
{
    Node *head=NULL;
    Node* tail=NULL;
    int query;
    cin>>query;
    for(int i=0;i<query;i++)
    {
        int pos;
        cin>>pos;
        if(pos==1)
        {
            int val;
            cin>>val;
            InserAtTail(head,tail,val);
            display(head,tail);
        }
        else if(pos==0)
        {
            int value;
            cin>>value;
            insert_at_head(head,tail,value);
            display(head,tail);
        }
    }
    

    return 0;
}
