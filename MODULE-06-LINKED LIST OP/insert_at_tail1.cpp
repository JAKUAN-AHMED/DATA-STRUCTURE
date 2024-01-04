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
void inserted_at_tail(Node* &head,int val)
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
void insert_At_head(Node* &head,int val)
{
    cout<<endl<<"Inserting at Head"<<endl;
    Node* newNode=new Node(val);
    newNode->Next=head;
    head=newNode;
    

}
void display(Node* head)
{
    
    cout<<"Your Linked List: ";
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<"->";
        tmp=tmp->Next;
    }
    cout<<"NULL"<<endl;
}
void insert_At_Position(Node* &head,int pos,int val)
{
    cout<<"inserting at custom position: ";
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp->Next;  
    }
    tmp->Next=newNode->Next;
    newNode->Next=tmp; 

}
int main()
{
    Node* head=NULL;
    while(true)
    {
        cout<<"Option 1: Inserted at Tail:"<<endl;
        cout<<"Option 2: Inserted at head:"<<endl;
        cout<<"Option 3: Your Linked List :"<<endl;
        cout<<"Option 4: Inserting at position: "<<endl;
        cout<<"Option 5: Terminated: "<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Enter Value: "<<endl;
            int val;
            cin>>val;
            inserted_at_tail(head,val);
        }
        else if(op==2)
        {
            cout<<"Enter value to Insert at head: "<<endl;
            int val;
            cin>>val;
            insert_At_head(head,val);
        }
        else if(op==3)
        {
            display(head);
        }
        else if(op==4)
        {
            cout<<"Inserting value at custom Position: ";
            cout<<"Enter Position: ";
            int pos;
            cin>>pos;
            cout<<"Enter value: ";
            int val;
            cin>>val;
            if(pos==0)
            {
                int val;
                cin>>val;
                insert_At_head(head,val);
            }    
            else if(pos==5)
            {
                int val;
                cin>>val;
                inserted_at_tail(head,val);
            }
            else insert_At_Position(head,pos,val);
        }
        else if(op==5)
        {
            break;
        }
    }
}