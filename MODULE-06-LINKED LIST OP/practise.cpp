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
void insert_At_tail(Node* &head,int val)
{
    cout<<endl<<endl<<"Inserting at Tail: "<<endl<<endl;
    Node* newNode=new Node(val);
    if (head==NULL)
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
void display(Node* head)
{
    cout<<endl<<endl<<"Your Linked List: "<<endl<<endl;
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->Next;
    }
    cout<<endl<<"Inserted at tail: "<<endl<<endl;
    
}
void insert_at_head(Node* &head,int val)
{
    Node* n=new Node(val);
    n->Next=head;
    head=n;
    cout<<endl<<"Inserted AT head"<<endl<<endl;
}
void insert_at_position(Node* &head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp->Next;
    }
    newNode->Next=tmp->Next;
    tmp->Next=newNode;
}
void delete_from_position(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->Next;
    }
    Node* deleteNode=tmp->Next;
    tmp->Next=tmp->Next->Next;
    delete deleteNode;

}
int main()
{
    Node* head=NULL;
    while (true)
    {
        cout<<"Option 1: Insert at Tail: "<<endl;
        cout<<"Option 2: Insert at Head: "<<endl;
        cout<<"Option 3: Insert at Position: "<<endl;
        cout<<"Option 4: deleteNode : "<<endl;
        cout<<"Option 5: Your Linked List : "<<endl;
        cout<<"Option 6: Terminated: "<<endl;
        // cout<<"Enter option: ";
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter value: ";
            int val;
            cin>>val;
            insert_At_tail(head,val);
        }
        else if(op==2)
        {
            cout<<"Enter value: "<<endl;
            int val;
            cin>>val;
            insert_at_head(head,val);

        }
        else if(op==3)
        {
            
            cout<<"Enter Position: "<<endl;
            int pos;
            cin>>pos;
            cout<<"Ente value: "<<endl;
            int val;
            cin>>val;
            insert_at_position(head,pos,val);
        }
        else if(op==4)
        {
            cout<<"Enter position: "<<endl;
            int pos;
            cin>>pos;
            delete_from_position(head,pos);
        }
        else if(op==5)
        {
            display(head);
        }
        else if(op==6)
        {
            break;
        }
    }
    
    return 0;
}

