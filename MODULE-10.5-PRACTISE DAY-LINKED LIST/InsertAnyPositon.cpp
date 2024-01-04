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
void InsertHead(Node* &head,Node* &tail,int val)
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
    head=head->prev;
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
void insertanyPosition(Node* head,Node* tail,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->Next;
    }
    newNode->Next=tmp->Next;
    tmp->Next->prev=newNode;
    tmp->Next=newNode;
    newNode->prev=tmp;
    
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
    int query;
    cin>>query;
    for (int i = 0; i < query; i++)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos>size(head))
        {
            cout<<"Invalid Index"<<endl;
        }    
        else if(pos==0)
        {
            InsertHead(head,tail,val);
        }    
        else if(pos==size(head))
        {
            insertTail(head,tail,val);
        }    
        else
        {
            insertanyPosition(head,tail,pos,val);
        }
        if (pos<=size(head)) {
            print(head);
            reverse(head,tail);
            print(head); 
        }  
        // print(head);
        // reverse(head,tail);
        // print(head);  
    }
    return 0;
}