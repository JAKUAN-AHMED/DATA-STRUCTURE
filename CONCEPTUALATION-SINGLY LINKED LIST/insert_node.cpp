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

//insert at tail to build linked list
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
//inserted at head
void insert_at_head(Node* &head,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp=head;
    head=newNode;
    newNode->Next=tmp;
}
int getsize(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        tmp=tmp->Next;
        count++;
    }
    return count;
    
}
void insert_at_any_position(Node* &head,int pos,int val)
{
    Node* newNode=new Node(val);
    if(pos==1)
    {
        insert_at_head(head,val);
        return;
    }
    else if(pos==getsize(head))
    {
        insert_at_tail(head,val);
        return;
    }
    Node* tmp=head;
    int position=1;
    while (position!=pos-1)
    {
        tmp=tmp->Next;
        position++;
    }
    Node* saveNode=tmp->Next;
    tmp->Next=newNode;
    newNode->Next=saveNode;
    
}
void printList(Node* head)
{
    cout<<endl<<endl<<"Your Linked List Is given below: "<<endl<<endl;
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    cout<<endl;
    int sz=getsize(head);
    cout<<endl<<sz<<endl;
    
}
int main()
{
    
    Node* head=NULL;
    insert_at_tail(head,10);
    insert_at_tail(head,20);
    insert_at_tail(head,30);
    insert_at_tail(head,40);
    insert_at_tail(head,50);
    insert_at_head(head,60);
    insert_at_head(head,80);
    insert_at_head(head,90);
    insert_at_any_position(head,1,20);
    insert_at_any_position(head,getsize(head),100);
    // insert_at_any_position(head,4,5000);
    insert_at_any_position(head,3,2000);
    printList(head);
    return 0;
}
